#include "driver.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;

Driver::Driver(ifstream& infile):z(infile) {
  InitMenu();
  def_col = z.GetWidth() + 5;
  quit = false;
  z.InitializeCage(infile);
}

void Driver::DisplayMenu() {
  do {
    
cout << "+=====================================================================+" << endl;
cout << "     __    __ __      __  ___ __         __ ___             ___ __  __ " << endl;
cout << "|  ||_ |  /  /  \\|\\/||_    | /  \\  \\  /||__) | /  \\ /\\ |     _//  \\/  \\" << endl;
cout << "|/\\||__|__\\__\\__/|  ||__   | \\__/   \\/ || \\  | \\__//--\\|__  /__\\__/\\__/" << endl << endl;
cout << "+=====================================================================+" << endl << endl << endl;       

    for (int i = 0; i < menu.size(); i++) {
      if (i != menu.size() - 1) {
        cout << menu[i] << endl;
      }
      else {
        cout << menu[i];
      }
    }
    cin >> inp;
    
    if (inp == 1) {
      ShowZoo();
      cout << endl << "Press any key to continue...";
      cin.ignore(10,'\n');
      cin.get();
    }
    else if (inp == 2) {
      TourZoo();
      cout << endl << "Press any key to continue...";
      cin.ignore(10,'\n');
      cin.get();
    }
    else if (inp == 3) {
      AnimateZoo();
      cout << endl << "Press any key to continue...";
      cin.ignore(10,'\n');
      cin.get();
    }
    else if (inp == 4) {
      FoodZoo();
      cout << endl << "Press any key to continue...";
      cin.ignore(10,'\n');
      cin.get();
    }
    else if (inp == 5) {
      quit = true;
    } else {
      cout << "Wrong input";
      cout << endl << "Press any key to continue...";
      cin.ignore(10,'\n');
      cin.get();
    }
  } while(!quit);
}

void Driver::ShowZoo() {
  z.Show();
}

void Driver::TourZoo() {
  z.Tour();
}

void Driver::AnimateZoo() {
  z.Animate();
}

void Driver::FoodZoo() {
  z.ShowFood();
}

void Driver::InitMenu() {
  menu.push_back("Pilihan menu : ");
  menu.push_back("1. Display Virtual Zoo");
  menu.push_back("2. Tour Virtual Zoo ");
  menu.push_back("3. Show Movement ");
  menu.push_back("4. Show Total Food ");
  menu.push_back("5. Quit \n");
  menu.push_back("Masukkan input : ");
}

void Driver::GoToXY(int x,int y) {
  printf("%c[%d;%df",0x1B,y,x);
}