#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3


//��������
void InitBoard(char board[ROW][COL], int row , int col);

void DisplayBoard(char board[ROW][COL], int row , int col);

void youplay(char board[ROW][COL], int row ,int col);

void compplay(char board[ROW][COL], int row , int col);

char win(char board[ROW][COL], int row , int col);
