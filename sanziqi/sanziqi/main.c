#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu() {


	printf("********************************\n");
	printf("****       1.开始游戏       ****\n");
	printf("****       0.退出游戏       ****\n");
	printf("********************************\n"); 


}

void game() {
	//先初始化棋盘
	char board[ROW][COL];
	InitBoard(board,ROW,COL);

	//打印棋盘
	DisplayBoard(board,ROW,COL);
	
	char ret = 0;//反映游戏状态

	while (1) {
		//玩家下棋
		youplay(board, ROW, COL);
		//显示玩家下棋后的棋盘
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜
		ret = win(board,ROW,COL);
		if(ret != 'C') 
		{
			break;
		}

		//电脑下棋
		compplay(board, ROW, COL);
		//显示电脑下棋后的棋盘
		DisplayBoard(board, ROW, COL);
		//判断电脑是否获胜
		ret =  win(board,ROW,COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("你赢了 ！\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢了 ！\n");
	}
	else
	{
		printf("平局 ！\n");
	}
	DisplayBoard(board,ROW,COL);



}


int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do {
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d",&input);

		//输入1 开始游戏。 输入 0 结束游戏
		switch(input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入1或0 ！\n");
			break;


		}


	} while (input);
	return 0;
}