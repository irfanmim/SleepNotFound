#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"

/** @class Animal
  * ABC animal
  */
class Animal{
public:
	/** @brief Constructor.
	  * Konstruktor kelas animal
	  * @param x Koordinat x
	  * @param y Koordinat y
	  * @param w Koordinat w
	  */  
	Animal(int x, int y, int w);
	/** @brief Method untuk mengembalikan nilai weight
	  */
	int getWeight() const;
    /** @brief Method interaksi Animal.
      * Setiap Animal akan berinteraksi dengan cara yang berbeda-beda
      * I.S.: Kelas Animal belum memiliki method
      * F.S.: Kelas abstract Animal sudah memiliki method interact yang pure virtual 
      * Perancang kelas: Marvin
      */  	
	virtual void interact()=0;
    /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      * I.S.: Kelas Animal belum memiliki atribut
      * F.S.: Kelas Animal sudah memiliki atribut jumlah animal
      * Perancang kelas: Marvin
      */
	int getNbAnimal();

	static int NbAnimal; /** Jumlah animal dalam zoo */
	/** @brief Method untuk menambahkan weight animal
	  * @param w Penambahan berat badan w
	  */
	void addWeight(int w);

protected:
	Point loc; /** Lokasi setiap animal dalam matriks Zoo */
	int weight; /** Berat animal */
};
#endif
