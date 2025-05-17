#include "board.h"
#include <iostream>

using namespace std;

void Board::clear(){
    for (int i = 0; i<height; i++){
        for (int j = 0; j<width; j++){
            grid[i][j] = " ";
        }
    }
}
void Board::print(){
    for (int i = 0; i<width+2;i++){
        cout<<"#";
    }
    cout<<"\n";
    for (int i = 0; i<height; i++){
        cout<<"#";
        for (int j = 0; j<width; j++){
            cout<<grid[i][j];
        }
        cout<<"#\n";
    }
    for (int i = 0; i<width+2;i++){
        cout<<"#";
    }
    cout<<"\n";
}