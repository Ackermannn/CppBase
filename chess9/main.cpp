#include<iostream>
#include "Chess.h"
int report(Chess);
int main() 
{
	
	Chess chess;
	std::cout << "====================START=====================" << std::endl;
	std::cout << "����һ����������Ϸ,���µ�����Ϊ'O',AI���Ϊ'X'." << std::endl;
	std::cout << "   ��������������һ��(ֱ��б�߶�����)ʱ,ʤ��.    " << std::endl;
	while (1)
	{	
		// ��������
		chess.human_play();
		chess.show_chess();
		if (report(chess) == 1) break;

		// ��������
		chess.AI_play();
		chess.show_chess();
		if (report(chess) == 1) break;
		

	}
	std::cout << "=====================END======================" << std::endl;
	return 0;
}

int report(Chess chess)
{
	if (chess.check_win() == 'O')
	{
		std::cout << "��ϲ����ʤ���ˣ�����" << std::endl;
		return 1;
	}
	if (chess.check_win() == 'X')
	{
		std::cout << "��Ǹ������ʤ����������" << std::endl;
		return 1;
	}
	if (chess.check_full())
	{
		std::cout << "��ѽ�������ƽ�ˡ�������" << std::endl;
		return 1;
	}
	return 0;
}
