#include "PlayField.hpp"
#include <iostream>

PlayField::PlayField(int rows, int columns) : field(boost::extents[rows][columns])
{
    this->rows = rows;
    this->columns = columns;
}

int PlayField::getFieldCell(int row, int column)
{
    return field[row][column];
}

void PlayField::setFieldCell(int row, int column, int value)
{
    field[row][column] = value;
}

void PlayField::printField()
{
    for (index i=0; i != rows; ++i) {
        for (index j=0; j != columns; ++j) {
            std::cout << "[" << i << "," << j << "]" << "=" << field[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

bool PlayField::checkWIn() {
    if (this->field[0][0] == this->field[0][1] && this->field[0][0] == this->field[0][2]) {
        return true;
    }
    else if (this->field[0][0] == this->field[1][1] && this->field[0][0] == this->field[2][2]) {
        return true;
    }
    else if (this->field[0][0] == this->field[1][0] && this->field[0][0] == this->field[2][0]) {
        return true;
    }
    else if (this->field[1][0] == this->field[1][1] && this->field[1][0] == this->field[1][2]) {
        return true;
    }
    else if (this->field[2][0] == this->field[2][1] && this->field[2][0] == this->field[2][2]) {
        return true;
    }
    else if(this->field[0][1] == this->field[1][1] && this->field[0][1] == this->field[2][1]) {
        return true;
    }
    else if(this->field[2][0] == this->field[1][1] && this->field[2][0] == this->field[0][2]) {
        return true;
    }
    else if(this->field[0][2] == this->field[1][2] && this->field[0][2] == this->field[2][2]) {
        return true;
    }
    else {
        return false;
    }
}
