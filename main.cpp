#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "board.h"
#include "snake.h"
#include "apple.h"
/*g++ -std=c++11 main.cpp Board.cpp Snake.cpp Apple.cpp -o snake*/
int main() {
    Board board;
    Position sPos;
    sPos.x = 10;
    sPos.y = 10;
    snake snake(sPos);
    Apple apple;
    apple.spawn(snake);

    while (true) {
        board.clear();
        for (auto p : snake.body) {
            board.grid[p.y][p.x] = 'o';
        }
        board.grid[snake.body.front().y][snake.body.front().x] = 'O';
        board.grid[apple.position.y][apple.position.x] = 'A';
        board.print();
        usleep(150000);
        cout<<"input direction"<<"\n";
        char ch;
        cin>>ch;
        
        if (ch == 'w'){ 
            snake.init_direct = {0, -1};
        }
        else if (ch == 's'){ snake.init_direct = {0, 1};
        }
        else if (ch == 'a'){
            snake.init_direct = {-1, 0};
        }
        else if (ch == 'd') {
            snake.init_direct = {1, 0};
        }
        else if (ch == 'x') {
            break;
        }
        if (snake.body.front() == apple.position) {
            snake.move(true);
            apple.spawn(snake);
        } else {
            snake.move(false);
        }

        Position head = snake.body.front();
        bool flag = false;
        int count = 0;
        for (auto p: snake.body){
            if (p.x==head.x && p.y == head.y&& count!=0){
                flag = true;
            }
            count++;
        }
        if (head.x < 0 || head.x >= Board::width || head.y < 0 || head.y >= Board::height||flag == true) {
            cout << "Game Over!\n";
            break;
        }
    }
    return 0;
}
