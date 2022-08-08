#pragma once
class ActionState
{
private:
	int KeyCode;
	bool state;
public:
	int GetKeyCode();
	bool GetState();

	void SetKeyCode(int KeyCode);
	void SetState(bool state);
};

