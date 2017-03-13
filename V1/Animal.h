#ifndef ANIMAL_H
#define ANIMAL_H
#include "Point.h"

/** @class Animal
  * ABC animal
  */
class Animal{
public:
    /** @brief Constructor.
      * Konstruktor kelas animal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */  
	Animal(int x, int y);

    /** @brief Method interaksi animal.
      * Setiap animal akan berinteraksi dengan cara yang berbeda-beda
      */	
	virtual void interact()=0;

    /** @brief Method untuk mengembalikan jumlah objek animal yang telah dibuat
      */
	int getNbAnimal();

	/** Jumlah animal dalam zoo */
	static int NbAnimal; 

protected:
	Point loc; /** Lokasi setiap animal dalam matriks Zoo */
};



/** @class FlyingAnimal
  * Kelas yang merepresentasikan binatang yang terbang atau hidup di udara.
  */
class FlyingAnimal : public Animal{
public:
	/** @brief Constructor.
      * Konstruktor kelas FlyingAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
	FlyingAnimal(int x,int y);
};

/** @class LandAnimal
  * Kelas yang merepresentasikan binatang yang hidup di darat.
  */
class LandAnimal : public Animal{
public:
	/** @brief Constructor.
      * Konstruktor kelas LandAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
	LandAnimal(int x,int y);
};

/** @class WaterAnimal
  * Kelas yang merepresentasikan binatang yang hidup di air.
  */
class WaterAnimal : public Animal{
public:
	/** @brief Constructor.
      * Konstruktor kelas WaterAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
	WaterAnimal(int x,int y);
};

#endif