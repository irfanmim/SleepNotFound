#include "driver.h"
#include <fstream>
#include <iostream>
using namespace std;

Driver::Driver(ifstream& infile):z(infile){
  InitMenu();
  quit = false;
  z.InitializeCage(infile);
}

void Driver::DisplayMenu(){
  do {
    system("clear");

    cout << "WELCOME TO VIRTUAL ZOO" << endl << endl;

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
      quit = true;
    }
  } while(!quit);
}

void Driver::ShowZoo(){
  z.Show();
}

void Driver::TourZoo(){
  z.Tour();
}

void Driver::InitMenu(){
  menu.push_back("Pilihan menu : ");
  menu.push_back("1. Display Virtual Zoo");
  menu.push_back("2. Tour Virtual Zoo ");
  menu.push_back("3. Quit \n");
  menu.push_back("Masukkan input : ");
}
