#include "apple.h"
#include "board.h"

using namespace std;

void Apple::spawn(snake& s){
    while (true){
        Position temp;
        temp.x = rand() % Board::width;
        temp.y = rand() % Board::height;
        position = temp;
        if (!s.collide(position)){
            break;
        }
    }
}