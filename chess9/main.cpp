#include<iostream>
#include "Chess.h"
int main() 
{
	Chess chess;
	while (1)
	{
		chess.human_play();
		chess.show_chess();

		if (chess.who_win() == 1) 
		{ 
			std::cout << "��ϲ����ʤ���ˣ�����" << std::endl; 
			break;
		}
		if (chess.who_win() == 2) 
		{ 
			std::cout << "��Ǹ������ʤ����������" << std::endl; 
			break;
		}
		if (chess.check_full()) 
		{
			std::cout << "��ѽ�������ƽ�ˡ�������" << std::endl;
			break; 
		}


		chess.AI_play();
		chess.show_chess();

		if (chess.who_win() == 1) 
		{ 
			std::cout << "��ϲ����ʤ���ˣ�����" << std::endl; 
			break;
		}
		if (chess.who_win() == 2) { 
			std::cout << "��Ǹ������ʤ����������" << std::endl; 
			break;
		}
		if (chess.check_full())
		{
			std::cout << "��ѽ�������ƽ�ˡ�������" << std::endl;
			break;
		}

	}
	return 0;
}