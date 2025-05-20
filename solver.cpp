#include <iostream>
#include <list>
#include <algorithm>
#include <map>
#include "snake.h"
#include "board.h"
#include "apple.h"
#include "solver.h"
using namespace std;

list<Position> Solver::solver(Position apple, list<Position> snake){
    list<Position> q;
    bool visited[20][20] = {false};
    map<Position, Position> parent;
    Position start = snake.front();
    visited[start.x][start.y] = true;
    q.push_back(start);
    for (Position p : snake) {
        visited[p.x][p.y] = true;
    }
    visited[start.x][start.y] = false; 
    bool found = false;

    while (!q.empty()) {
        Position current = q.front();
        q.pop_front();

        if (current == apple) {
            found = true;
            break;
        }
        int dx[] = {0, 0, -1, 1};
        int dy[] = {-1, 1, 0, 0};

        for (int i = 0; i < 4; ++i) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < 20 && ny >= 0 && ny < 20 && !visited[nx][ny]) {
                Position next = {nx, ny};
                visited[nx][ny] = true;
                parent[next] = current;
                q.push_back(next);
            }
        }
    }
    list<Position> path;
    if (found) {
        for (Position p = apple; p.x != start.x && p.y !=start.y; p = parent[p]) {
            path.push_front(p);
        }
        path.push_front(start);
    }

    return path;
}
