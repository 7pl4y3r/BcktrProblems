// Backtracking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "GirlsProblem.h"
#include "Dividers.h"
#include "Bracket.h"

void showMenu() {

	std::cout << "h - help\n";
	std::cout << "1 - Girls and guys problem\n";
	std::cout << "2 - Dividers problem\n";
	std::cout << "3 - Brackets problem\n";
	std::cout << "e - exit\n";
}

void choose() {

	showMenu();
	Girls girls;
	Dividers dividers;
	Bracket bracket;
	char c;

	do {

		std::cout << "Option...";
		std::cin >> c;

		switch (c) {

		case 'h': showMenu(); break;
		case '1': girls.readData();  break;
		case '2': dividers.readData(); break;
		case '3': bracket.readData(); break;

		}

	} while (c != 'e');

}

int main()
{
	choose(); 
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
