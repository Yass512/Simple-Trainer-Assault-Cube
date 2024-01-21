#include "pch.h"
#include "printInfo.h"

void clearLine(int limit)
{
	for (int i = 0; i < limit; i++)
	{
		std::cout << " ";
	}
	std::cout << std::endl;
}


void PrintInfo(bool bHealth, bool bAmmo, bool bRecoil)
{
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|-------Assault Cube Internal Trainer-------|" << std::endl;
	std::cout << "|---------------Made by Yass----------------|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

	std::cout <<"| " <<"[NUM_PAD 1] Infinite Health :";

	if (bHealth)
	{
		std::cout << "           ON" << "|";
	}
	else
	{
		std::cout <<  "          OFF" << "|";
	}
	clearLine(5);

	std::cout << "| " <<"[NUM_PAD 2] Infinite Ammo :";

	if (bAmmo)
	{
		std::cout << "             ON" << "|";
	}
	else
	{
		std::cout << "            OFF" << "|";
	}
	clearLine(5);

	std::cout << "| " <<"[NUM_PAD 3] No Recoil :";
	if (bRecoil)
	{
		std::cout << "                 ON" << "|";
	}
	else
	{
		std::cout << "                OFF" << "|";
	}
	clearLine(5);
	std::cout << "| " <<"[NUM_PAD 4]" <<" Set teleport coordinates      |\n";
	std::cout << "| " <<"[NUM_PAD 5]" <<" Teleport to set coordinates   |\n";
	std::cout << "| " <<"[NUM_PAD 6]" <<" Set 888 frags to Scoreboard   |\n";
	std::cout << "| " <<"[END]      " <<" Eject                         |\n";
	std::cout << "---------------------------------------------" << std::endl;
}