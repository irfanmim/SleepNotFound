#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

#define defcol 70	/** Col posisi awal penulisan menu di cmd **/

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

void DisplayMenu() {
	int inp;
	bool quit = false;
	vector<string> menu;
	
	menu.push_back("Pilihan menu : ");
	menu.push_back("1. Display Zoo ");
	menu.push_back("2. Tour  ");
	menu.push_back("3. Display Food ");
	menu.push_back("4. Quit ");
	menu.push_back("Masukkan input : ");	
	do {
		system("cls");
		for (int i = 0; i < menu.size(); i++) {
			gotoxy(defcol, i);
			cout << menu[i] << endl;
		}
		gotoxy((defcol+menu[menu.size()-1].size()), (menu.size()-1));
		cin >> inp;
		if (inp == 4) {
			quit = true;
		}
	} while (!quit);
	
}

int main () {
	DisplayMenu();
	return 0;
}
