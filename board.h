#ifndef BOARD_H
#define BOARD_H

class Board{
    public:
        int width = 20;
        int height = 20;
        char grid[height][width];
        void clear();
        void print();
};
#endif