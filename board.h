#ifndef BOARD_H
#define BOARD_H

class Board{
    public:
        static const int width = 20;
        static const int height = 20;
        char grid[height][width];
        void clear();
        void print();
};
#endif