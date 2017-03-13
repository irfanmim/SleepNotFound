#include "parse.h"
#include "Zoo.h"
#include "Cage.h"
#include <iostream>
#include <windows.h>
#include <vector>
#include <stdlib.h>
using namespace std;

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

void DisplayMenu() {
	ifstream infile("Zoo.txt");
	try{
		Zoo z(infile);
		z.initializeCage(infile);
		int defcol = z.getWidth() + 5;
		int inp;
		bool quit = false;
		vector<string> menu;
		
		menu.push_back("Pilihan menu : ");
		menu.push_back("1. Tour  ");
		menu.push_back("2. Quit ");
		menu.push_back("Masukkan input : ");	
		do {
			system("cls");
			z.show();
			for (int i = 0; i < menu.size(); i++) {
				gotoxy(defcol, i);
				cout << menu[i] << endl;
			}
			gotoxy((defcol+menu[menu.size()-1].size()), (menu.size()-1));
			cin >> inp;
			if (inp == 2) {
				quit = true;
			}else if(inp == 1){
				z.tour();
			}
		} while (!quit);

		infile.close();
	}catch(int x){
		switch(x){
			case 1:cout << "File format error" << endl;break;
			case 2:cout << "Row or column mismatch" << endl;break;
		}
	}catch(...){
		cout << "Another error occured" << endl;
	}
}

int main () {
	DisplayMenu();
	return 0;
}
