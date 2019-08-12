#pragma once

class Chess
{
public:
	Chess();
	void human_play();
	void AI_play();
	void show_chess();
	bool check_full();
	char check_win();
	int who_win();
	int AI_think();


	char grid[9];
};