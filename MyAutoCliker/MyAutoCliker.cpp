// MyAutoCliker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<vector>
#include<iostream>

#include"WritingMouseAction.h"
#include"ReadingMouseAction.h"



int main()
{
	int a;
	
	std::cout << "\t\t\t\t\tHELLO, THIS IS MY AUTO CLIKER" << std::endl;
	std::cout << "select the clicker mode " << std::endl;
	std::cout << "[0] \t endless replay " << std::endl;
	std::cout << "[1] \t one repeat " << std::endl;
	std::cout << "if you need to stop the clicker hold down shift and 8 " << std::endl;
	std::cout << "if you need to stop the Reading your move hold down shift and 9 " << std::endl;
	std::cin >> a;
	

	
	for (int i = 10; i >= 0; --i)
	{
		std::cout << "time to start Read your move " << i << " seconds" << std::endl;
		Sleep(1000);
	}
	
	std::vector<MyCursor> MyC;
	MyC = WritingMouseAction();
	std::cout << "\t\t\t\t\tHELLO, THIS IS MY AUTO CLIKER" << std::endl;
	bool StateEndles;
	
	switch (a)
	{
	case 0:
		Sleep(1000);
		StateEndles = true;
		while (StateEndles)
		{
			StateEndles = ReadingMouseAction(MyC);
		}
		break;
	case 1:
		Sleep(1000);
		ReadingMouseAction(MyC);
		break;
	}
	
	
	

	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
