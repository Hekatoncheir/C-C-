//
// Created by liang on 2017/7/5.
//
#include "mybox.h"
#include "array.h"

tetris::tetris() {
        for (int i = 0; i < 12; i++)//��ʼ����ͼ
            for (int j = 0; j < 23; j++){
                map[i][j] = 0;
                top = 99;
                score = 0;
                level = 1;
                shape = 0;
                position[0] = 5;    //������ʼ��ĺ�����
                position[1] = 0;    //������ʼ���������
            }
}

void tetris::initInterface() {
    for (int i = 0; i < 12; i++)//��ʼ����ͼ
        for (int j = 0; j < 23; j++){
            map[i][j] = 0;
            top = 99;
            score = 0;
            level = 1;
            shape = 0;
            position[0] = 5;    //������ʼ��ĺ�����
            position[1] = 0;
        }
}
void setCurPos(int i, int j, int color = 1 | 2 | 4)
{                           //color�൱���Լ�ѡ����ɫ��û�о���Ĭ�ϵİ�ɫ
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);       //��ñ�׼������
    SetConsoleTextAttribute(out, WORD(color));//������ɫ
    COORD pos = { short(i * 2), short(j) };
    SetConsoleCursorPosition(out, pos); //����λ��
}

void tetris::DrawMap()
{
    //��ͼ���
    for (int i = 0; i < 14; i++)     // 0 - 13
    {
        setCurPos(i, 0);
        cout << "��";
    }
    for (int i = 0; i < 25; i++) // 0 - 24
    {
        setCurPos(0, i);
        cout << "��";
        setCurPos(13, i);
        cout << "��";
    }
    for (int i = 0; i < 14; i++)
    {
        setCurPos(i, 24);
        cout << "��";
    }
    //��Ϣ���
    for (int i = 15; i <= 25; i++)
    {
        setCurPos(i, 0);
        cout << "��";
        setCurPos(i, 8);
        cout << "��";
    }
    for (int i = 0; i <= 8; i++)
    {
        setCurPos(15, i);
        cout << "��";
        setCurPos(25, i);
        cout << "��";
    }
    setCurPos(16, 12);
    cout << "Write By ZhouXiang";
    setCurPos(16, 15);
    cout << " ������ " << score;
    setCurPos(16, 16);
    cout << " �ȼ��� " << level;
}

void tetris::DrawBox(int x, int y, int shape)//������
{
    int nx = 0, ny = 0;
    int color = sharp[shape][8];
    for (int i = 0; i < 4; i++)
    {
        nx = x + sharp[shape][i * 2];
        ny = y + sharp[shape][i * 2 + 1];
        setCurPos(nx + 1, ny + 1, color);//��ĵ�ͼ��ʵ�ʵĵ�ͼ�������궼��1(��Ϊ��һ����Χ)
        cout << "��";
    }
}
void tetris::ReBox(int x, int y, int shape)//��������
{
    int nx = 0, ny = 0;
    for (int i = 0; i < 4; i++)
    {
        nx = x + sharp[shape][i * 2];
        ny = y + sharp[shape][i * 2 + 1];
        setCurPos(nx + 1, ny + 1);
        cout << " ";
    }
}

int tetris::IsJudge(int x, int y, int shape)
{
    int nx = 0, ny = 0;
    for (int i = 0; i < 4; i++)
    {
        nx = x + sharp[shape][i * 2];
        ny = y + sharp[shape][i * 2 + 1];
        if (nx < 0 || nx >= 12 || ny < 0 || ny >= 23 || map[nx][ny] != 0)   //���ܷ��ˣ�����0
            return 0;
    }
    return 1;
}

int tetris::TurnBlock(int shape)
{
    switch (shape)
    {
        case A1: shape = A2;  break;
        case A2: shape = A1;  break;

        case B:  shape = B;   break;

        case C11:shape = C12; break;
        case C12:shape = C13; break;
        case C13:shape = C14; break;
        case C14:shape = C11; break;

        case C21:shape = C22; break;
        case C22:shape = C23; break;
        case C23:shape = C24; break;
        case C24:shape = C21; break;

        case D11:shape = D12; break;
        case D12:shape = D11; break;

        case D21:shape = D22; break;
        case D22:shape = D21; break;

        case E31:shape = E32; break;
        case E32:shape = E33; break;
        case E33:shape = E34; break;
        case E34:shape = E31; break;
        default: break;
    }
    return shape;
}

void tetris::UpdateMap(int shape)
{
    int nx = 0, ny = 0;
    int flag;
    int clear = 0;                          //����˶��ٸ��У�������
    for (int i = 0; i < 4; i++)
    {
        nx = position[0] + sharp[shape][i * 2];//position[0]=5
        ny = position[1] + sharp[shape][i * 2 + 1];//position[1]=0
        map[nx][ny] = sharp[shape][8];             //������ɫֵ����Ϊ��ɫֵ��Ϊ0�����Կ��Ժ�û�з������ֿ�
    }
    if (position[1] < top)//��Ϊ��ͼ����������0����ײ���22�����Ե�ǰ�ȵ��y�������С��top��������ߵ�仯�ˣ�����һ��top
        top = position[1];
    for (int j = position[1]; j < position[1] + high[shape]; j++)   //�������½���������������������������
    {
        flag = 0;
        for (int i = 0; i < 12; i++)
        {
            if (map[i][j] == 0)         //û�п���������
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)                      //����������ǰ��
        {
            for (int k = j; k >= top; k--)//��ÿһ�е���һ�����ƣ�ֱ����ߵ��������������
            {
                if (k == 0)             //���� �������
                {
                    for (int i = 0; i < 12; i++)
                    {
                        map[i][k] = 0;
                        setCurPos(i + 1, k + 1);
                        cout << " ";
                    }
                }
                else
                {
                    for (int i = 0; i < 12; i++)
                    {
                        map[i][k] = map[i][k - 1];
                        setCurPos(i + 1, k + 1);   //��Ϊ������ͼ�ο�ߣ���Ϸ���й����е�����ϵ����� ����������ϵ��x��y���� 1 ��
                        if (map[i][k] == 0)    //��ɾ���е� ��һ���ǿյģ�������һ��Ҳ�ǿյ�
                            cout << " ";
                        else                        //��һ�в��ǿյ�
                        {
                            int tempColor = map[i][k];
                            setCurPos(i + 1, k + 1, tempColor);
                            cout << "��";
                        }
                    }
                }
            }
            top++;                  //�����ɹ�����ߵ��½�һ��
            clear++;
            score += clear * 100;
        }
    }
    setCurPos(16, 15);
    cout << " ������ " << score;
}

void tetris::RunGame()
{
    CONSOLE_CURSOR_INFO cci;
    cci.bVisible = FALSE;
    cci.dwSize = sizeof(cci);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cci);
    initInterface();
    system("cls");
    DrawMap();
    int key1, key2 ;                   //��ȡ������Ϣ
    int i = 0;             //��ʱ����ʱ��û�л��ָ��Զ��½�
    int Count = 0;
    int nextshape = 0;
    int curshape = 0;
    srand(time(0));
    curshape = rand() % 7;
    nextshape = rand() % 7;
    DrawBox(position[0], position[1], curshape);   //����ǰͼ��
    DrawBox(17, 3, nextshape);             //������һ��Ҫ���ֵ�ͼ��
//    Count = 20000 - 1000 * level;
    while (1)
    {
        Count = 4000 - 100 * level;
        if (i >= Count)                                  //�����Զ�������
        {
            i = 0;                                  //�� i ���㣬�´μ�������
            if (IsJudge(position[0], position[1] + 1, curshape) == 0)  //�¸�λ����Ч��������
            {
                UpdateMap(curshape);                       //����һ�»���
                ReBox(17, 3, nextshape);                 //���ԭ������һ��ͼ��
                curshape = nextshape;
                nextshape = rand() % 7;
                position[0] = 5;                        //�����ȵ�
                position[1] = 0;
                DrawBox(position[0], position[1], curshape);
                DrawBox(17, 3, nextshape);                 //�������ڵ���һ��ͼ��
                if (IsJudge(position[0], position[1], curshape) == 0)      //�޷����Ƶ�ǰͼ��
                {
                    system("cls");
                    cout << "��Ϸ�������������յ÷�Ϊ��" << score << endl;
                    cout << "��Y���¿�ʼ,��N����" << endl;
                    char ch;
                    cin >> ch;
                    if (ch == 'n' || ch == 'N')
                        exit(0);
                    else if (ch == 'Y' || ch == 'y') {
                        RunGame();
                    }
                }
            }
            else
            {
                ReBox(position[0], position[1], curshape);
                position[1]++;
                DrawBox(position[0], position[1], curshape);
            }
        }
        if (kbhit())                                   //��ȡ������Ϣ
        {
            key1 = getch();
            if (key1 == 224) {
                key2 = getch();
                if (key2 == 75)                       //����
                {
                    if (IsJudge(position[0] - 1, position[1], curshape)) {
                        ReBox(position[0], position[1], curshape);
                        position[0]--;
                        DrawBox(position[0], position[1], curshape);
                    }
                } else if (key2 == 77)              //����
                {
                    if (IsJudge(position[0] + 1, position[1], curshape)) {
                        ReBox(position[0], position[1], curshape);
                        position[0]++;
                        DrawBox(position[0], position[1], curshape);
                    }
                } else if (key2 == 80)              //���¼���
                {
                    if (IsJudge(position[0], position[1] + 1, curshape)) {
                        ReBox(position[0], position[1], curshape);
                        position[1]++;
                        DrawBox(position[0], position[1], curshape);
                    }
                } else if (key2 == 72)
                {
                    while (IsJudge(position[0], position[1] + 1, curshape))
                    {
                        ReBox(position[0], position[1], curshape);
                        position[1]++;
                        DrawBox(position[0], position[1], curshape);
                    }
                }
            }
            else if (key1 == 32)//����
            {
                int temp = curshape;
                curshape = TurnBlock(curshape);
                if (IsJudge(position[0], position[1], curshape))
                {
                    ReBox(position[0], position[1], temp);
                    DrawBox(position[0], position[1], curshape);
                }
                else
                    curshape = temp;
            }
            else if (key1 == 112)                          //��ͣ
            {
                getch();
            }
            while (kbhit())                            //��ȡ��ʣ�µļ�����Ϣs
                getch();
        }
        i++;
        if (score/level >=100)
            level++;
        setCurPos(16, 16);
        cout << " �ȼ��� " << level;
    }
}