#ifndef PLAYFIELD_H
#define PLAYFIELD_H

#include "boost/multi_array.hpp"

class PlayField
{
private:
    int rows;
    int columns;
public:
    typedef boost::multi_array<int, 2> array2d;
    typedef array2d::index index;
    array2d field;
  
public:
    PlayField(int rows, int columns);
    int getFieldCell(int row, int column);
    void setFieldCell(int row, int column, int value);
    void printField();
    bool checkWIn();
};

#endif // PLAYFIELD_H
