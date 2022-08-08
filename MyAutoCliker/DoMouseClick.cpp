#include "DoMouseClick.h"
void DoMouseClick(DWORD Flags)
{
    INPUT input[1] = {};//creating an array and writing data//создаю массив и записываю данные

    input[0].type = INPUT_MOUSE;
    
    input[0].mi.dwFlags = Flags;

   

    SendInput(1, input, sizeof(INPUT));
 }
