#include "driver.h"
#include <fstream>
#include <iostream>
using namespace std;

Driver::Driver(ifstream& infile):z(infile){
	InitMenu();
	defcol = z.getWidth() + 5;
	quit = false;
	z.initializeCage(infile);
}

void Driver::DisplayMenu(){
	do {
		system("clear");
		ShowZoo();
		for (int i = 0; i < menu.size(); i++) {
			cout << menu[i] << endl;
		}
		cin >> inp;
		if (inp == 2) {
			quit = true;
		}else if(inp == 1){
			TourZoo();
		}
	} while(!quit);
}

void Driver::ShowZoo(){
  z.show();
}

void Driver::TourZoo(){
  z.tour();
}

void Driver::InitMenu(){
  menu.push_back("Pilihan menu : ");
  menu.push_back("1. Tour ");
  menu.push_back("2. Quit ");
  menu.push_back("Masukkan input : ");
}

void Driver::GoToXY(int x,int y){
  printf("%c[%d;%df",0x1B,y,x);
}