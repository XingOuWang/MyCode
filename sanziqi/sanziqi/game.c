#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//函数实现
void InitBoard(char board[ROW][COL], int row, int col) 
{
	//把数组里的每一个元素初始化成空格
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		int j = 0;
		for (j = 0; j < col; j++) 
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}




}


void youplay(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1) 
	{
		printf("请输入你想下的位置:>");

		//玩家输入
		scanf("%d %d", &x, &y);

		//判断玩家输入的坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋，先判断玩家下的位置是否已经有棋子
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("你下的位置已经被占用了 ！请重新选择 ！\n");
			}

		}
		else
		{
			printf("请输入一个正确的坐标 ！\n");
		}

	}
}


void compplay(char board[ROW][COL], int row, int col)
{
	printf("电脑的回合\n");


	//电脑随机生成坐标用rand()函数。
	//取余可以控制电脑随机生成的坐标在合法范围内
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		//老规矩，电脑下棋前也要判断位置是否被占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}


int full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			if(board[i][j] == ' ') 
			{
				return 0;
			}
		}
	}
	return 1;
}

char win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行元素是否相等
	for (i = 0; i < row; i++) 
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') 
		{
			return board[i][1];
		}
	}
	//判断三列元素是否相等
	for (i = 0; i < col; i++) 
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') 
		{
			return board[1][i];
		}
	}
	//判断两个对角线元素是否相等
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] &&board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否是平局
	//如果平局则返回1否则返回0
	int ret = full(board,row,col);
	if(ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}