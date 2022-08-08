#include "DoKeyboardClick.h"
void DoKeyboardClick(int KeyCode, bool Flags)
{
    INPUT input[1] = {};

    input[0].type = INPUT_KEYBOARD;
    input[0].ki.wVk = KeyCode;
    input[0].ki.time = 0;// the time after which the execution will begin// ����� ����� ������� ������� ����������
    if (Flags == 0)
    {
        input[0].ki.dwFlags = KEYEVENTF_KEYUP; // if the value is 0, I release it because INPUT, if the dwFlags parameter is not set, automatically considers the key pressed// ���� �������� 0 �������� ������� ��� ��-�� ����, ��� INPUT ���� �������� dwFlags �� ���������� ������������� ������� ������� �������
    }



    SendInput(1, input, sizeof(INPUT));
}
