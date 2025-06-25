#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

int headX = WIDTH / 2;
int headY = HEIGHT / 2;
int foodX, foodY;
int score = 0;
bool gameOver = false;

vector<pair<int, int>> tail;

void placeFood() {
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
}

void drawGrid() {
    system("clear"); // use "cls" for Windows
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == headX && y == headY)
                cout << "O"; // Head
            else if (x == foodX && y == foodY)
                cout << "F"; // Food
            else {
                bool isTail = false;
                for (auto t : tail) {
                    if (t.first == x && t.second == y) {
                        cout << "x";
                        isTail = true;
                        break;
                    }
                }
                if (!isTail)
                    cout << ".";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
    cout << "Move (w/a/s/d), q to quit: ";
}

void updateTail(int prevX, int prevY) {
    if (!tail.empty()) {
        for (int i = tail.size() - 1; i > 0; --i)
            tail[i] = tail[i - 1];
        tail[0] = {prevX, prevY};
    }
}

int main() {
    srand(time(0));
    placeFood();

    while (!gameOver) {
        drawGrid();

        char move;
        cin >> move;

        int prevX = headX, prevY = headY;

        switch (move) {
            case 'w': headY--; break;
            case 's': headY++; break;
            case 'a': headX--; break;
            case 'd': headX++; break;
            case 'q': gameOver = true; continue;
            default: continue;
        }

        // Wall collision
        if (headX < 0 || headX >= WIDTH || headY < 0 || headY >= HEIGHT) {
            cout << "Game Over! You hit the wall.\n";
            break;
        }

        // Self collision
        for (auto t : tail) {
            if (t.first == headX && t.second == headY) {
                cout << "Game Over! You hit your tail.\n";
                gameOver = true;
                break;
            }
        }

        if (gameOver) break;

        // Eat food
        if (headX == foodX && headY == foodY) {
            score++;
            tail.push_back({prevX, prevY});
            placeFood();
        }

        updateTail(prevX, prevY);
    }

    cout << "Final Score: " << score << endl;
    return 0;
}
