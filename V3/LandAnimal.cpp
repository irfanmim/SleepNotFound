#include "LandAnimal.h"
#include <iostream>
using namespace std;

Tiger :: Tiger (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {}

void Tiger::renderAnimal(){
	cout << "t";
}

void Tiger :: interact() {cout << "*Aummmmmmmmm .... *" << endl;}

Peacock :: Peacock (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {}

void Peacock::renderAnimal(){
	cout << "&";
}

void Peacock :: interact() {cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;}

Panda :: Panda (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {}

void Panda::renderAnimal(){
	cout << "p";
}

void Panda :: interact() {cout << "*Panda duduk sambil makan bambu*" << endl;}

Ostrich :: Ostrich (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {}

void Ostrich::renderAnimal(){
	cout << "s";
}

void Ostrich :: interact() {cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;}

Orangutan :: Orangutan (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {}

void Orangutan::renderAnimal(){
	cout << "r";
}

void Orangutan :: interact() {cout << "*Orangutan bergelayutan*" << endl;}

Lion :: Lion (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {}

void Lion::renderAnimal(){
	cout << "i";
}

void Lion :: interact() {cout << "*Singa menyanyi lagu Lion King*" << endl;}

Komodo :: Komodo (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {}

void Komodo::renderAnimal(){
	cout << "d";
}

void Komodo :: interact() {cout << "*Komodo berjalan lambat sekali*" << endl;}

Kangaroo :: Kangaroo (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {}

void Kangaroo::renderAnimal(){
	cout << "n";
}

void Kangaroo :: interact() {cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;}

Hyena :: Hyena (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {}

void Hyena::renderAnimal(){
	cout << "y";
}

void Hyena :: interact() {cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;}

Gorilla :: Gorilla (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {}

void Gorilla::renderAnimal(){
	cout << "g";
}

void Gorilla :: interact() {cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;}

Coala :: Coala (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {}

void Coala::renderAnimal(){
	cout << "a";
}

void Coala :: interact() {cout << "*Coala imut sekali <3*" << endl;}

Chimpanzee :: Chimpanzee (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {}

void Chimpanzee::renderAnimal(){
	cout << "m";
}

void Chimpanzee :: interact() {cout << "*Chimpanzee garuk-garuk punggung*" << endl;}

Cheetah :: Cheetah (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {}

void Cheetah::renderAnimal(){
	cout << "h";
}

void Cheetah :: interact() {cout << "*Cheetah tidur siang*" << endl;}