//
// Created by liang on 2017/7/5.
//
#include "mybox.h"
#include "array.h"

tetris::tetris() {
        for (int i = 0; i < 12; i++)//初始化地图
            for (int j = 0; j < 23; j++){
                map[i][j] = 0;
                top = 99;
                score = 0;
                level = 1;
                shape = 0;
                position[0] = 5;    //下落起始点的横坐标
                position[1] = 0;    //下落起始点的纵坐标
            }
}

void tetris::initInterface() {
    for (int i = 0; i < 12; i++)//初始化地图
        for (int j = 0; j < 23; j++){
            map[i][j] = 0;
            top = 99;
            score = 0;
            level = 1;
            shape = 0;
            position[0] = 5;    //下落起始点的横坐标
            position[1] = 0;
        }
}
void setCurPos(int i, int j, int color = 1 | 2 | 4)
{                           //color相当于自己选择颜色，没有就用默认的白色
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);       //获得标准输出句柄
    SetConsoleTextAttribute(out, WORD(color));//设置颜色
    COORD pos = { short(i * 2), short(j) };
    SetConsoleCursorPosition(out, pos); //设置位置
}

void tetris::DrawMap()
{
    //地图框架
    for (int i = 0; i < 14; i++)     // 0 - 13
    {
        setCurPos(i, 0);
        cout << "■";
    }
    for (int i = 0; i < 25; i++) // 0 - 24
    {
        setCurPos(0, i);
        cout << "■";
        setCurPos(13, i);
        cout << "■";
    }
    for (int i = 0; i < 14; i++)
    {
        setCurPos(i, 24);
        cout << "■";
    }
    //信息框架
    for (int i = 15; i <= 25; i++)
    {
        setCurPos(i, 0);
        cout << "■";
        setCurPos(i, 8);
        cout << "■";
    }
    for (int i = 0; i <= 8; i++)
    {
        setCurPos(15, i);
        cout << "■";
        setCurPos(25, i);
        cout << "■";
    }
    setCurPos(16, 12);
    cout << "Write By ZhouXiang";
    setCurPos(16, 15);
    cout << " 分数： " << score;
    setCurPos(16, 16);
    cout << " 等级： " << level;
}

void tetris::DrawBox(int x, int y, int shape)//画方块
{
    int nx = 0, ny = 0;
    int color = sharp[shape][8];
    for (int i = 0; i < 4; i++)
    {
        nx = x + sharp[shape][i * 2];
        ny = y + sharp[shape][i * 2 + 1];
        setCurPos(nx + 1, ny + 1, color);//玩的地图比实际的地图横纵坐标都大1(因为有一个外围)
        cout << "■";
    }
}
void tetris::ReBox(int x, int y, int shape)//消除方块
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
        if (nx < 0 || nx >= 12 || ny < 0 || ny >= 23 || map[nx][ny] != 0)   //不能放了，返回0
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
    int clear = 0;                          //清除了多少个行，最后积分
    for (int i = 0; i < 4; i++)
    {
        nx = position[0] + sharp[shape][i * 2];//position[0]=5
        ny = position[1] + sharp[shape][i * 2 + 1];//position[1]=0
        map[nx][ny] = sharp[shape][8];             //保存颜色值，因为颜色值不为0，所以可以和没有方格区分开
    }
    if (position[1] < top)//因为地图的最上面是0，最底层是22，所以当前热点的y坐标如果小于top，就是最高点变化了，更新一下top
        top = position[1];
    for (int j = position[1]; j < position[1] + high[shape]; j++)   //从上向下进行消除，从下向上容易少消行
    {
        flag = 0;
        for (int i = 0; i < 12; i++)
        {
            if (map[i][j] == 0)         //没有可以消除的
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)                      //可以消除当前行
        {
            for (int k = j; k >= top; k--)//将每一行的上一行下移，直到最高点所在行下移完毕
            {
                if (k == 0)             //消除 到了最顶行
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
                        setCurPos(i + 1, k + 1);   //因为有两条图形框边，游戏运行过程中的坐标系相对于 真正的坐标系是x、y都加 1 的
                        if (map[i][k] == 0)    //被删除行的 上一行是空的，所以这一行也是空的
                            cout << " ";
                        else                        //上一行不是空的
                        {
                            int tempColor = map[i][k];
                            setCurPos(i + 1, k + 1, tempColor);
                            cout << "■";
                        }
                    }
                }
            }
            top++;                  //消除成功，最高点下降一个
            clear++;
            score += clear * 100;
        }
    }
    setCurPos(16, 15);
    cout << " 分数： " << score;
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
    int key1, key2 ;                   //读取键盘信息
    int i = 0;             //计时，到时间没有获得指令，自动下降
    int Count = 0;
    int nextshape = 0;
    int curshape = 0;
    srand(time(0));
    curshape = rand() % 7;
    nextshape = rand() % 7;
    DrawBox(position[0], position[1], curshape);   //画当前图形
    DrawBox(17, 3, nextshape);             //画出下一个要出现的图形
//    Count = 20000 - 1000 * level;
    while (1)
    {
        Count = 4000 - 100 * level;
        if (i >= Count)                                  //可以自动下移了
        {
            i = 0;                                  //将 i 清零，下次继续计数
            if (IsJudge(position[0], position[1] + 1, curshape) == 0)  //下个位置无效，到底了
            {
                UpdateMap(curshape);                       //更新一下画面
                ReBox(17, 3, nextshape);                 //清除原来的下一个图形
                curshape = nextshape;
                nextshape = rand() % 7;
                position[0] = 5;                        //更新热点
                position[1] = 0;
                DrawBox(position[0], position[1], curshape);
                DrawBox(17, 3, nextshape);                 //画上现在的下一个图形
                if (IsJudge(position[0], position[1], curshape) == 0)      //无法绘制当前图形
                {
                    system("cls");
                    cout << "游戏结束！！！最终得分为：" << score << endl;
                    cout << "按Y重新开始,按N结束" << endl;
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
        if (kbhit())                                   //读取键盘信息
        {
            key1 = getch();
            if (key1 == 224) {
                key2 = getch();
                if (key2 == 75)                       //左移
                {
                    if (IsJudge(position[0] - 1, position[1], curshape)) {
                        ReBox(position[0], position[1], curshape);
                        position[0]--;
                        DrawBox(position[0], position[1], curshape);
                    }
                } else if (key2 == 77)              //右移
                {
                    if (IsJudge(position[0] + 1, position[1], curshape)) {
                        ReBox(position[0], position[1], curshape);
                        position[0]++;
                        DrawBox(position[0], position[1], curshape);
                    }
                } else if (key2 == 80)              //向下加速
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
            else if (key1 == 32)//变形
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
            else if (key1 == 112)                          //暂停
            {
                getch();
            }
            while (kbhit())                            //读取掉剩下的键盘信息s
                getch();
        }
        i++;
        if (score/level >=100)
            level++;
        setCurPos(16, 16);
        cout << " 等级： " << level;
    }
}