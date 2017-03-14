#ifndef ZOO_H
#define ZOO_H
#include "../cell/cell.h"
#include "../habitat/habitat.h"
#include "../facility/facility.h"
#include "../cage/cage.h"

#include "../air_habitat/air_habitat.h"
#include "../amphibi/amphibi.h"
#include "../animal/animal.h"
#include "../aves/aves.h"
#include "../Bat/Bat.h"
#include "../cage/cage.h"
#include "../cageList/cageList.h"
#include "../cell/cell.h"
#include "../cendrawasih/cendrawasih.h"
#include "../cheetah/cheetah.h"
#include "../chimpanzee/chimpanzee.h"
#include "../coala/coala.h"
#include "../dolphin/dolphin.h"
#include "../driver/driver.h"
#include "../eagle/eagle.h"
#include "../entrance/entrance.h"
#include "../exit/exit.h"
#include "../facility/facility.h"
#include "../flying_animal/flying_animal.h"
#include "../gorilla/gorilla.h"
#include "../habitat/habitat.h"
#include "../hyena/hyena.h"
#include "../kangaroo/kangaroo.h"
#include "../kolibri/kolibri.h"
#include "../komodo/komodo.h"
#include "../land_animal/land_animal.h"
#include "../landHabitat/landHabitat.h"
#include "../lion/lion.h"
#include "../mammal/mammal.h"
#include "../mantaray/mantaray.h"
#include "../orangutan/orangutan.h"
#include "../ostrich/ostrich.h"
#include "../panda/panda.h"
#include "../park/park.h"
#include "../parse/parse.h"
#include "../peacock/peacock.h"
#include "../pisces/pisces.h"
#include "../point/point.h"
#include "../reptile/reptile.h"
#include "../restaurant/restaurant.h"
#include "../road/road.h"
#include "../shark/shark.h"
#include "../tiger/tiger.h"
#include "../water_animal/water_animal.h"
#include "../water_habitat/water_habitat.h"
#include "../whale/whale.h"

#include <fstream>
#include <vector>
using namespace std;

#define DEF_WIDTH 35
#define DEF_HEIGHT 25

/*
 * @class Zoo
 * Real class Zoo
*/
class Zoo{
public:
  /** @brief Constructor
    * @param infile file eksternal input
    * Konstruktor Zoo
    */  
  Zoo(ifstream& infile);
  /** @brief Procedure GetRowCol mengambil nilai kolom dan baris dari file eksternal
    * @param i jumlah baris
    * @param j jumlah kolom
    */
  /** @brief Procedure Initialize menginisialisasi Zoo berdasar nilai kolom dan baris dari file eksternal
    * @param row jumlah baris
    * @param col jumlah kolom
    * @param infile input file eksternal
    */
  void Initialize(int row,int col,ifstream& infile);
  /** @brief Procedure show menampilkan Zoo ke layar
    */
  void Show();
  /** @brief Function GetMember mengambil isi Cell dari koordinat (i,j)
    * @param i absis lokasi
    * @param j ordinat lokasi
    */
  Cell * GetMember(int i,int j);
  /** @brief Procedure SetMember men set pada koordinat (i,j) isi Cellnya apa
    * @param i absis lokasi
    * @param j ordinat lokasi
    * @param c pointer to Cell
    */
  void SetMember(int i,int j,Cell * c);
  /** @brief Function ParseCage mengembalikan array of pointer to Habitat
    * @param nh banyaknya sel habitat dalam satu Cage
    * @param infile file eksternal input
    */
  Habitat ** ParseCage(int& nh,ifstream& infile);
  /** @brief Function ParseCage mengembalikan Road tempat keluar (Exit)
    */
  Road * ParseCage();
  /** @brief Procedure intializeCage menginisiasi terbentuknya Cage dengan input file eksternal
    * @param infile file eksternal input 
    */
  void InitializeCage(ifstream& infile);
  /** @brief Function boolean IsInPath mengembalikan true jika (x,y) merupakan Road
    * @param x absis dari lokasi
    * @param y ordinat dari lokasi
    */
  bool IsInPath(int x,int y);
  /** @brief Procedure Tour melakukan Tour keliling Zoo
  */
  void Tour();
  /** @brief Function GetWidth mengembalikan jumlah kolom dari Zoo
  */
  int GetHeight() const;
  /** @brief Function GetWidth mengembalikan jumlah baris dari Zoo
  */
  int GetWidth() const;
  /** @brief Proedure ClearPath menghapus semua path yang sudah dilalui sehingga seperti semula
    */
  void ClearPath();
  /** @brief Destructor kelas Zoo
    */
  ~Zoo();
private:
  int width;/*jumlah kolom dari Zoo*/
  int height;/*jumlah baris dari Zo*/
  Cell *** member; /*Matriks berisi pointer to Cell*/
  vector<Road *> ent; /*kumplan dari Entrance yang ada*/
  Road * ext; /*Exit road pada Zoo*/
  vector<Road *> path; /*kumpulan dari path  yang ada*/
  CageList cl; /*list of Cage*/
};

#endif
