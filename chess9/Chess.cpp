#include "Chess.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

Chess::Chess()
{
	for (int i = 0; i < 9; i++) 
	{
		grid[i] = '.';
	}
	
}

void Chess::human_play()
{
	int human_grid;
	std::cout << "请您下棋(输入1~9的数字)：" << std::endl;
	std::cin >> human_grid;
	grid[human_grid - 1] = 'O';
}

void Chess::AI_play()
{
	int AI_grid;
	std::cout << "AI在下棋中...." << std::endl;
	AI_grid = AI_think();
	grid[AI_grid] = 'X';
}

void Chess::show_chess()
{
	std::cout << " " << grid[6] << " " << grid[7] << " " << grid[8] << std::endl;
	std::cout << " " << grid[3] << " " << grid[4] << " " << grid[5] << std::endl;
	std::cout << " " << grid[0] << " " << grid[1] << " " << grid[2] << std::endl;
}

bool Chess::check_full()//检查棋盘是不是满了
{
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.')return false;
	}

	return true;
}

char Chess::check_win()
{
	for (int i = 1; i <= 7; i += 3)
	{
		if (grid[i - 1] == grid[i] and grid[i] == grid[i + 1])
		{
			if (grid[i] == 'O' or grid[i] == 'X')
			{
				return grid[i];
			}
		}
	}
	for (int i = 3; i <= 5; i++)
	{
		if (grid[i - 3] == grid[i] and grid[i] == grid[i + 3])
		{
			if (grid[i] == 'O' or grid[i] == 'X')
			{
				return grid[i];
			}
		}
	}
	if (grid[6] == grid[4] and grid[4] == grid[2]) 
	{
		if (grid[4] == 'O' or grid[4] == 'X')
		{
			return grid[4];
		}
	}
	if (grid[0] == grid[4] and grid[4] == grid[8])
	{
		if (grid[4] == 'O' or grid[4] == 'X')
		{
			return grid[8];
		}
	}
	return '.';
}

int Chess::who_win()
{
	if (check_win() == 'X')
	{
		return 2;
	}
	if (check_win() == 'O')
	{
		return 1;
	}
	return 0;
}

int Chess::AI_think()
{
	int AI_grid;
	char copy_grid[9];
	srand((unsigned)time(NULL));
	/*
	for (int i = 0; i < 9; i++)
	{
		copy_grid[i] = grid[i];
	}
	*/
	//调用who_win()那个点电脑会胜利
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.')
		{
			grid[i] = 'X';
			if (who_win() == 2) 
			{
				grid[i] = '.';
				return i;
			}
			grid[i] = '.';
		}
		else
			continue;
	}
	//调用who_win()那个点人类会胜利
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.')
		{
			grid[i] = 'O';
			if (who_win() == 1)
			{
				grid[i] = '.';
				return i;
			}
			grid[i] = '.';
		}
		else
			continue;
	}
	//电脑随机下棋....
	AI_grid = rand() % 9;

	while (grid[AI_grid] != '.')
	{
		AI_grid = rand() % 8;
	}

	return AI_grid;;
}
