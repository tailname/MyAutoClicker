#include "MyCursor.h"

int x;
int y;


std::vector<ActionState> actions;






int MyCursor::GetX()
{
	return x;
}
int MyCursor::GetY()
{
	return y;
}

std::vector<ActionState> MyCursor::GetAction()
{
	return actions;
}




void MyCursor::SetX(int x)
{
	
	this->x = x;
}
void MyCursor::SetY(int y)
{
	this->y = y;
}
void MyCursor::SetAction(int KeyCode, bool state)
{
	ActionState AcS;// creating a class in which the state of the keys will be stored//создаю класс в котором будет храниться состояние клавиш 
	
	AcS.SetKeyCode(KeyCode);
	AcS.SetState(state);
	actions.push_back(AcS);

	
}

 
