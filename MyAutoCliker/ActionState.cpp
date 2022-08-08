#include"ActionState.h"

	int KeyCode;
	bool state = 0;

	int ActionState::GetKeyCode()
	{
		return KeyCode;
	}
	bool ActionState::GetState()
	{
		return state;
	}
	void ActionState::SetKeyCode(int KeyCode)
	{
		this->KeyCode = KeyCode;
	}
	void ActionState::SetState(bool state)
	{
		this->state = state;
	}

