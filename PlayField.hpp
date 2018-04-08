#ifndef PLAYFIELD_H
#define PLAYFIELD_H


class PlayField
{
private:
    int rows;
    int columns;
public:

public:
    PlayField(int rows, int columns);
    int getFieldCell(int row, int column);
    void setFieldCell(int row, int column, int value);
    void printField();
    bool checkWIn();
};

#endif // PLAYFIELD_H
