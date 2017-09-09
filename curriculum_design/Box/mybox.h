//
// Created by liang on 2017/7/5.
//

#ifndef TETRIS_H_
#define TETRIS_H_
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <iostream>
using namespace std;

class tetris
{
private:
    int map[12][23];        //背景
    int top;            //当前的最高点
    int score;          //分数
    int level;          //难度等级
    int shape;             //当前的方块的形状
    int position[2];        //热点，当前活动的所在点
public:
    tetris();
    void DrawMap();         //绘制地图
    void initInterface();           //初始化界面
    void DrawBox(int x, int y, int shape); //绘制图形
    void ReBox(int x, int y, int shape);   //擦除图形
    int  IsJudge(int x, int y, int shape); //是否可以绘制图形
    int  TurnBlock(int shape);         //旋转方块
    void UpdateMap(int shape);         //更新画面
    void RunGame();             //运行
};

#endif