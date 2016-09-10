#include "movable.h"

Movable::Movable()
    :Object() {}

Movable::Movable(Type type)
    :Object(type,0,0) {}

Movable::Movable(Type type, int x, int y)
    :Object(type,x,y) {}

using namespace std;

pair<int,int> Movable::get_cords_by_dir(Direction dir)
{
    switch(dir)
    {
    case UP:
        return pair<int,int> (x-1,y);
    case DOWN:
        return pair<int,int> (x+1,y);
    case LEFT:
        return pair<int,int> (x,y-1);
    case RIGHT:
        return pair<int,int> (x,y+1);
    default:
        return pair<int,int> (x,y);
        break;
    }
}

void Movable::move(Map& map,pair<int,int> cords)
{
    if(map.is_softly(cords.first,cords.second))
    {
        if(map.is_free(cords.first,cords.second))
        {
            x=cords.first;
            y=cords.second;
        }
        else
        {
            check(map,cords);
        }
    }  
}
<<<<<<< HEAD
=======

void Movable::check(Map& map,pair<int,int> cords)
{
//    Object* object = map.find_object(cords.first,cords.second);
//    if(object->get_type() == ENEMY)
//    {
//        //fight(object);
//    }
}

void Movable::fight(Object * enemy)
{
}

>>>>>>> 0fb496da5ceef422290a617aa4eeb110b57e07c7
