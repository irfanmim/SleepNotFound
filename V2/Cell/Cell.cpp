#include "Cell.h"
#include <iostream>
using namespace std;

Cell::Cell():loc(0,0){
	restaurant = false;
	road = false;        
	park = false;
	entrance = false;
	exit = false;
	animal = false;
	airhabitat = false;
	waterhabitat = false;
	landhabitat = false;
	road_visited = false;
	isInCage = false;
	isHabitat = false;
	moving = false;
}

Cell::Cell(int x,int y):loc(x,y){
	restaurant = false;
	road = false;        
	park = false;
	entrance = false;
	exit = false;
	animal = false;
	airhabitat = false;
	waterhabitat = false;
	landhabitat = false;
	road_visited = false;
	isInCage = false;
	isHabitat = false;
	moving = false;
}

void Cell::render(){
	if (restaurant == true) {
		cout << "S";
	}
	else if (road == true) {
		if (road_visited == true) {
			cout << "-";
		}
		else {
			cout << " ";
		}
	}
	else if (park == true) {
		cout << "P";
	}
	else if (entrance == true) {
		cout << "E";
	}
	else if (exit == true) {
		cout << "B";
	}
	else if (airhabitat == true) {
		if (isInCage) {
			if (isAnimalExist() && isMoving()) {
				cout << getAnimalchar();
			}
			else {
				cout << "A";
			}
		}
		else {
			cout << "a";
		}
	}
	else if (waterhabitat == true) {
		if (isInCage) {
			if (isAnimalExist() && isMoving()) {
					cout << getAnimalchar();
				}
				else {
					cout << "W";
				}
		}
		else {
			cout << "w";
		}
	}
	else if (landhabitat == true) {
		if (isInCage) {
			if (isAnimalExist() && isMoving()) {
					cout << getAnimalchar();
				}
			else {
				cout << "A";
			}		
		}
		else {
			cout << "l";
		}
	}
	else {
		cout << "#";
	}
}


void Cell::printCoor(){
	loc.printPoint();
}

Point& Cell::getLoc(){
	return loc;
}

void Cell::setAtr(char c) {
	switch(c) {
		case '$': restaurant = true; break;//setMember(i,j,new Restaurant(i,j));break;
		case 'R': road = true; break;//setMember(i,j,new Road(i,j));break;
		case '*': park = true; break;//setMember(i,j,new Park(i,j));break;
		case ')': 
			entrance = true; break;//setMember(i,j,new Entrance(i,j));
			//ent = (Road *)member[i][j];break;
		case '(':
			exit = true; break;//setMember(i,j,new Exit(i,j));
			//ext = (Road *)member[i][j];break;
		case 'a': airhabitat = true; break;//setMember(i,j,new AirHabitat(i,j,false));break;
		case 'w': waterhabitat = true; break;//setMember(i,j,new WaterHabitat(i,j,false));break;
		case 'l': landhabitat = true; break;//setMember(i,j,new LandHabitat(i,j,false));break;
		//default: setMember(i,j,new Cell(i,j));break;

	}
}

void Cell::setAnimalExist(bool status) {
	animal = status;
}

void Cell::inCage() {
	isInCage = true;
}

void Cell::setHabitat() {
	isHabitat = true;
}

bool Cell::isAnimalExist() {
	return (animal == true);
}

void Cell::setVisited(bool status) {
	road_visited = status;
}

bool Cell::isVisited() {
	return (road_visited);
}

void Cell::setAnimalchar(char ch) {
	animalchar = ch;
}

void Cell::wakeAnimal() {
	if (animalchar == 'b') {
		cout << "*Kelelawar bergelantung terbalik*" << endl;
	}
	else if (animalchar == 'c') {
		cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;
	}
	else if (animalchar == 'e') {
		cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;
	}
	else if (animalchar == 'k') {
		cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;
	}
	else if (animalchar == 'h') {
		cout << "*Cheetah tidur siang*" << endl;
	}
	else if (animalchar == 'm') {
		cout << "*Chimpanzee garuk-garuk punggung*" << endl;
	}
	else if (animalchar == 'a') {
		cout << "*Coala imut sekali <3*" << endl;
	}
	else if (animalchar == 'g') {
		cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;
	}
	else if (animalchar == 'y') {
		cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;
	}
	else if (animalchar == 'n') {
		cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;
	}
	else if (animalchar == 'd') {
		cout << "*Komodo berjalan lambat sekali*" << endl;
	}
	else if (animalchar == 'i') {
		cout << "*Singa menyanyi lagu Lion King*" << endl;
	}
	else if (animalchar == 'r') {
		cout << "*Orangutan bergelayutan*" << endl;
	}
	else if (animalchar == 's') {
		cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;
	}
	else if (animalchar == 'p') {
		cout << "*Panda duduk sambil makan bambu*" << endl;
	}
	else if (animalchar == 'P') {
		cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;
	}
	else if (animalchar == 't') {
		cout << "*Aummmmmmmmm .... *" << endl;
	}
	else if (animalchar == 'D') {
		cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;
	}
	else if (animalchar == 'M') {
		cout << "*Ikan pari bentuknya aneh sekali ... :| *" << endl;
	}
	else if (animalchar == 'S') {
		cout << "*Ikan hiu memperhatikan kamu*" << endl;
	}
	else if (animalchar == 'W') {
		cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;
	}
	else { // 'x'
		cout << "Animal tidak terdefinisi" << endl;
	}
}
char Cell::getAnimalchar() {
	return animalchar;
}

int Cell::getX(){
	return loc.getX();
}

int Cell::getY(){
	return loc.getY();
}
void Cell:: setMoving(bool status) {
	moving = status;
}
bool Cell:: isMoving() {
	return (moving == true);
}
