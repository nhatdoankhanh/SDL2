#include <iostream>
#include <conio.h> // Để sử dụng hàm _getch()

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

struct Point {
    int x;
    int y;
};

enum Direction { STOP, LEFT, RIGHT, UP, DOWN };
Direction dir;
Point snake[100];
int length;
Point food;

void Setup() {
    dir = STOP;
    snake[0] = { WIDTH / 2, HEIGHT / 2 };
    food = { rand() % WIDTH, rand() % HEIGHT };
    length = 1;
}

void Draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                cout << "#";
            if (i == snake[0].y && j == snake[0].x)
                cout << "O";
            else if (i == food.y && j == food.x)
                cout << "F";
            else {
                bool printTail = false;
                for (int k = 1; k < length; k++) {
                    if (snake[k].x == j && snake[k].y == i) {
                        cout << "o";
                        printTail = true;
                    }
                }
                if (!printTail)
                    cout << " ";
            }

            if (j == WIDTH - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                exit(0);
        }
    }
}

void Logic() {
    Point prevTail = snake[length - 1];
    Point prev = snake[0];
    Point next;
    for (int i = 1; i < length; i++) {
        next = snake[i];
        snake[i] = prev;
        prev = next;
    }

    switch (dir) {
        case LEFT:
            snake[0].x--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
        case UP:
            snake[0].y--;
            break;
        case DOWN:
            snake[0].y++;
            break;
    }

    if (snake[0].x == food.x && snake[0].y == food.y) {
        length++;
        food = { rand() % WIDTH, rand() % HEIGHT };
    }
}

int main() {
    Setup();
    while (true) {
        Draw();
        Input();
        Logic();
        // Thêm delay để trò chơi không chạy quá nhanh
        // Hoặc sử dụng hàm sleep() nếu bạn muốn tạo delay chính xác hơn
    }
    return 0;
}
