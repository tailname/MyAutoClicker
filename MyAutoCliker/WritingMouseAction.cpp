#include"WritingMouseAction.h"
std::vector<MyCursor> WritingMouseAction()
{
	
	std::vector<MyCursor> MyC; //  creating a vector for writing and reading actions// создаю вектор для записи и чтения действий 
	MyC.reserve(1000); 
	
	bool StatKey[256]{false}; // I create a variable in which the state of all keys in the previous tick will be located// создаю переменную в которой будет находится состояние всех клавиш в предыдущий тик
	short int PressMouseKey = 0;
	POINT cur_pos;

	
	while (!(GetAsyncKeyState(VK_LSHIFT) & 0x8000) || !(GetAsyncKeyState(0x39) & 0x8000)) //I check whether shift and button 9 are pressed, add 0x8000 to find out the position of the highest byte, if it = 1, then the button is pressed at the moment//Проверяю нажат ли shift и кнопка 9, дописываю 0x8000, чтобы узнать положение старшего байта, если он = 1, то кнопка нажата в данный момент
	{
		MyCursor MouseState;
		
		GetCursorPos(&cur_pos);// I get the position x, y// получаю положение x, y



		MouseState.SetX(cur_pos.x);
		MouseState.SetY(cur_pos.y);
		Sleep(12);// I put a delay so as not to load the PC too much//ставлю задержку чтобы сильно не нагружать пк
		for (int i = 0; i < 256; ++i)
		{
			bool bl = (GetAsyncKeyState(i) & 0x8000); // I give the value of bool, so that after it was possible to correctly count them//привожу значение bool, чтобы после удалось корректно считать их
			if (bl != StatKey[i])
			{
				StatKey[i] = bl;// if the value of the key does not match the value in the previous tick, I change the value//если значение клавиши не совпадает с значением в предыдущем тике, меняю значение
				MouseState.SetAction(i, StatKey[i]);//setting the value of the key to my class//устанавливаю значение клавиши в свой класс
			}
		}
		
		
		MyC.push_back(MouseState);


	}
	
	
	
	
	return MyC;
}