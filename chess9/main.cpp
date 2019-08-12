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
			std::cout << "¹§Ï²Äú£¬Ê¤ÀûÁË£¡£¡£¡" << std::endl; 
			break;
		}
		if (chess.who_win() == 2) 
		{ 
			std::cout << "±§Ç¸£¬µçÄÔÊ¤Àû¡£¡£¡£¡£" << std::endl; 
			break;
		}
		if (chess.check_full()) 
		{
			std::cout << "°¥Ñ½£¬ºÃÏñ´òÆ½ÁË¡£¡£¡£¡£" << std::endl;
			break; 
		}


		chess.AI_play();
		chess.show_chess();

		if (chess.who_win() == 1) 
		{ 
			std::cout << "¹§Ï²Äú£¬Ê¤ÀûÁË£¡£¡£¡" << std::endl; 
			break;
		}
		if (chess.who_win() == 2) { 
			std::cout << "±§Ç¸£¬µçÄÔÊ¤Àû¡£¡£¡£¡£" << std::endl; 
			break;
		}
		if (chess.check_full())
		{
			std::cout << "°¥Ñ½£¬ºÃÏñ´òÆ½ÁË¡£¡£¡£¡£" << std::endl;
			break;
		}

	}
	return 0;
}