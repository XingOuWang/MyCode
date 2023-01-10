#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu() {


	printf("********************************\n");
	printf("****       1.��ʼ��Ϸ       ****\n");
	printf("****       0.�˳���Ϸ       ****\n");
	printf("********************************\n"); 


}

void game() {
	//�ȳ�ʼ������
	char board[ROW][COL];
	InitBoard(board,ROW,COL);

	//��ӡ����
	DisplayBoard(board,ROW,COL);
	
	char ret = 0;//��ӳ��Ϸ״̬

	while (1) {
		//�������
		youplay(board, ROW, COL);
		//��ʾ�������������
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = win(board,ROW,COL);
		if(ret != 'C') 
		{
			break;
		}

		//��������
		compplay(board, ROW, COL);
		//��ʾ��������������
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		ret =  win(board,ROW,COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("��Ӯ�� ��\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ�� ��\n");
	}
	else
	{
		printf("ƽ�� ��\n");
	}
	DisplayBoard(board,ROW,COL);



}


int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do {
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);

		//����1 ��ʼ��Ϸ�� ���� 0 ������Ϸ
		switch(input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������1��0 ��\n");
			break;


		}


	} while (input);
	return 0;
}