#include "cendrawasih.h"
#include <iostream>
using namespace std;

Cendrawasih :: Cendrawasih (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight) {

}

void Cendrawasih::renderAnimal(){
	cout << "c";
}

void Cendrawasih :: interact() {
	cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;
}