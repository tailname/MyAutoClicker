#include"ClickerEvent.h"
void ClickerEvent(int keycode, bool state)
{
	if (state == true)
	{
		// check key state//проверяю чему ровно состояние  кнопки 
		switch (keycode)
		{
		case 1:
			DoMouseClick(MOUSEEVENTF_LEFTDOWN);
			break;
		case 2:
			DoMouseClick(MOUSEEVENTF_RIGHTDOWN);
			break;
		case 4:
			DoMouseClick(MOUSEEVENTF_MIDDLEDOWN);
			break;
		default:
			DoKeyboardClick(keycode, state); // if it's not a mouse, then it's a keyboard// если это не мышка значит это клавиатура
			break;
		}
	}
	else 
	{
		//releasing the mouse keys //отпускаю клавиши мыши 
		switch (keycode)
		{
		case 1:
			DoMouseClick(MOUSEEVENTF_LEFTUP);
			break;
		case 2:
			DoMouseClick(MOUSEEVENTF_RIGHTUP);
			break;
		case 4:
			DoMouseClick(MOUSEEVENTF_MIDDLEUP);
			break;
		default:
			DoKeyboardClick(keycode, state);
			break;
		}
	}
	

}