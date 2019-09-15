#include<iostream>
#include "Chess.h"
int report(Chess);
int main() 
{
	
	Chess chess;
	std::cout << "====================START=====================" << std::endl;
	std::cout << "这是一个井字棋游戏,你下的棋标记为'O',AI标记为'X'." << std::endl;
	std::cout << "   当三个棋子连城一线(直线斜线都可以)时,胜利.    " << std::endl;
	while (1)
	{	
		// 人类下棋
		chess.human_play();
		chess.show_chess();
		if (report(chess) == 1) break;

		// 电脑下棋
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
		std::cout << "恭喜您，胜利了！！！" << std::endl;
		return 1;
	}
	if (chess.check_win() == 'X')
	{
		std::cout << "抱歉，电脑胜利。。。。" << std::endl;
		return 1;
	}
	if (chess.check_full())
	{
		std::cout << "哎呀，好像打平了。。。。" << std::endl;
		return 1;
	}
	return 0;
}
