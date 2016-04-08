#ifndef MAP_H
#define MAP_H

#include <cell.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Map : public Cell
{
   vector< vector<Cell> > terrain; // Карта уровня
public:
   Map();
   void map_init(string); // загрузка конкретной локации по её названию
   void print(); // вывод карты на экран
};

// dev kit pro GBA

#endif // MAP_H
