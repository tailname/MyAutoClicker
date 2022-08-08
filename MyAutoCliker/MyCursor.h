#pragma once
#include<vector>

#include"ActionState.h"

class MyCursor
{
	int x;
	int y;
	
	
	std::vector<ActionState> actions;
	
	
public:
	

	int GetX();
	int GetY();
	
	
	std::vector<ActionState> GetAction();

	
	void SetX(int x);
	void SetY(int y);
	
	void SetAction(int KeyCode, bool state);
	
};


