#include <stdio.h>
#include <conio.h> 

#define WIDTH 20
#define HEIGHT 10

enum Direction { UP, DOWN, LEFT, RIGHT };

struct Point {
    int x;
    int y;
};

struct SnakeSegment {
    struct Point position;
    struct SnakeSegment *next;
};

struct Snake {
    struct SnakeSegment *head;
    enum Direction direction;
};

void moveSnake(struct Snake *snake) {
    // Move the snake's head
    switch (snake->direction) {
        case UP:
            snake->head->position.y--;
            break;
        case DOWN:
            snake->head->position.y++;
            break;
        case LEFT:
            snake->head->position.x--;
            break;
        case RIGHT:
            snake->head->position.x++;
            break;
    }
  
    struct SnakeSegment *current = snake->head->next;
    while (current != NULL) {
        current->position = current->next->position;
        current = current->next;
    }
}

int main() {
   
    struct Snake snake;
    struct SnakeSegment head = { .position = {WIDTH/2, HEIGHT/2}, .next = NULL };
    snake.head = &head;
    snake.direction = RIGHT;

    // Main game loop
    while (1) {
        // Game logic
        moveSnake(&snake);

      
    }

    return 0;
}
