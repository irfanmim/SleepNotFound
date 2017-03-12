#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#define DEF_WIDTH 35
#define DEF_HEIGHT 25

/** @class Zoo
  * Kelas yang merepresentasikan kebun binatang.
  */
class Zoo{
	public:

		/** @brief Constructor tidak berparameter.
	  	  * Membuat objek zoo dengan width DED_WIDTH dan height DEF_HEIGHT
	  	  */		
		Zoo();
		
		/** @brief Constructor berparameter.
	  	  * Membuat objek zoo dengan width dan height dari masukan
	  	  * @param w Nilai width
	  	  * @param h Nilai height
	  	  */		
		Zoo(int w,int h);
		
		/** @brief Destruktor
		  */
		~Zoo();

		/** @brief Method untuk mengisi zoo dengan binatang
		  * @param c Matriks of character yang merepresentasikan file eksternal
		  * @param row Banyaknya baris 
		  * @param col Banyaknya kolom
	      */
		void initialize(char ** c,int row,int col);

		/** @brief Method untuk print Zoo
	      */		
		void show();
		
	private:
		int width;
		int height;
		Cell *** member;
};

#endif