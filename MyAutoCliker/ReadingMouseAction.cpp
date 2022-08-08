#include"ReadingMouseAction.h"

bool ReadingMouseAction(std::vector<MyCursor> MyC)
{
	const bool KEYDOWN = 1;
	const bool KEYUP = 0;
    std::vector<MyCursor>::iterator it = MyC.begin();
	int keycode;


	while (it != MyC.end())
	{
		Sleep(12);// delay so as not to load the pc//задержка чтобы не нагружать пк
		
		while ((GetAsyncKeyState(VK_LSHIFT) & 0x8000) && (GetAsyncKeyState(0x38) & 0x8000))
		{
			ReleaseKeys(KEYUP);
			return false;
		}
		for (int i = 0; i < (it->GetAction().size()); ++i)
		{
			keycode = it->GetAction()[i].GetKeyCode();// I get the key number//получаю номер клавиши
			switch (it->GetAction()[i].GetState()) // getting the state of the key//получаю состояние клавиши
			{
			case KEYDOWN:
				ClickerEvent(keycode, KEYDOWN);
				break;
			default:
				ClickerEvent(keycode, KEYUP);
				break;
			}
		}
		SetCursorPos(it->GetX(), it->GetY());//setting the cursor position// устанавливаю позицию курсора
		++it;
	}
	ReleaseKeys(KEYUP);
	return true;
}
void ReleaseKeys(const int EventKey)
{
	for (int i = 0; i < 256; ++i)
	{
		ClickerEvent(i, EventKey);

		//I release all the pressed keys// отпускаю все нажатые клавиши
	}
}