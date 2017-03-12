#include "LandAnimal.h"
#include <iostream>
using namespace std;

Tiger :: Tiger (int x, int y) : LandAnimal(x, y){}

void Tiger :: interact() {cout << "*Aummmmmmmmm .... *" << endl;}

Peacock :: Peacock (int x, int y) : LandAnimal(x, y){}

void Peacock :: interact() {cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;}

Panda :: Panda (int x, int y) : LandAnimal(x, y) {}

void Panda :: interact() {cout << "*Panda duduk sambil makan bambu*" << endl;}

Ostrich :: Ostrich (int x, int y) : LandAnimal(x, y) {}

void Ostrich :: interact() {cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;}

Orangutan :: Orangutan (int x, int y) : LandAnimal(x, y){}

void Orangutan :: interact() {cout << "*Orangutan bergelayutan*" << endl;}

Lion :: Lion (int x, int y) : LandAnimal(x, y) {}

void Lion :: interact() {cout << "*Singa menyanyi lagu Lion King*" << endl;}

Komodo :: Komodo (int x, int y) : LandAnimal(x, y) {}

void Komodo :: interact() {cout << "*Komodo berjalan lambat sekali*" << endl;}

Kangaroo :: Kangaroo (int x, int y) : LandAnimal(x, y) {}

void Kangaroo :: interact() {cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;}

Hyena :: Hyena (int x, int y) : LandAnimal(x, y) {}

void Hyena :: interact() {cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;}

Gorilla :: Gorilla (int x, int y) : LandAnimal(x, y) {}

void Gorilla :: interact() {cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;}

Coala :: Coala (int x, int y) : LandAnimal(x, y) {}

void Coala :: interact() {cout << "*Coala imut sekali <3*" << endl;}

Chimpanzee :: Chimpanzee (int x, int y) : LandAnimal(x, y) {}

void Chimpanzee :: interact() {cout << "*Chimpanzee garuk-garuk punggung*" << endl;}

Cheetah :: Cheetah (int x, int y) : LandAnimal(x, y) {}

void Cheetah :: interact() {cout << "*Cheetah tidur siang*" << endl;}