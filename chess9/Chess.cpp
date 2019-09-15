#include "Chess.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

Chess::Chess() {}

void Chess::human_play()
{
	char human_grid;

	std::cout << "��������(����1~9������)��" << std::endl;
	std::cin >> human_grid;

	// �������������Ƿ�Ƿ�
	while (true)
	{
		if (human_grid >= '1' && human_grid <= '9')
		{
			if (grid[int(human_grid) - int('1')] == '.')
			{
				grid[int(human_grid) - int('1')] = 'O';
				break;
			}
			else
			{
				std::cout << "����ط��Ѿ��¹�������,����Ҫˣ����?��" << std::endl;
				std::cout << "��������(����1~9������)��" << std::endl;
				std::cin >> human_grid;
			}
		}
		else 
		{
			std::cout << "��������1~9������!,�����Ǳ����ĸ!��" << std::endl;
			std::cin >> human_grid;
		}		
	}
}

void Chess::AI_play()
{
	int AI_grid;
	std::cout << "AI��������...." << std::endl;
	AI_grid = AI_think();
	grid[AI_grid] = 'X';
}

void Chess::show_chess()
{
	std::cout << " " << grid[6] << " " << grid[7] << " " << grid[8] << std::endl;
	std::cout << " " << grid[3] << " " << grid[4] << " " << grid[5] << std::endl;
	std::cout << " " << grid[0] << " " << grid[1] << " " << grid[2] << std::endl;
}

bool Chess::check_full()//��������ǲ�������
{
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.') return false;
	}

	return true;
}

char Chess::check_win()   // ��ķ�������ò��ܸ�,����ǣһ����ȫ��!!!!
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

int Chess::AI_think()
{
	int AI_grid;
	srand((unsigned)time(NULL));
	//����who_win()�Ǹ�����Ի�ʤ��
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.')
		{
			grid[i] = 'X';
			if (check_win() == 'X')
			{
				grid[i] = '.';
				return i;
			}
			grid[i] = '.';
		}
		else
			continue;
	}
	//����who_win()�Ǹ��������ʤ��
	for (int i = 0; i < 9; i++)
	{
		if (grid[i] == '.')
		{
			grid[i] = 'O';
			if (check_win() == 'O')
			{
				grid[i] = '.';
				return i;
			}
			grid[i] = '.';
		}
		else
			continue;
	}
	//�����������....
	AI_grid = rand() % 9;

	while (grid[AI_grid] != '.')
	{
		AI_grid = rand() % 8;
	}

	return AI_grid;;
}
