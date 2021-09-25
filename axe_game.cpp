#include "raylib.h"
int main()
{
    // window dimensions
    int width = 800;
    int height = 450;
    InitWindow(width, height, "Axe Game");

    // circle coordinates
    int circle_x{200};
    int circly_y{200};

    // axe coordinates
    int axe_x{400};
    int axe_y{0};

    int direction{10};

    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins

        DrawCircle(circle_x, circly_y, 25, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move the axe
        axe_y += direction;
        if (axe_y > height || axe_y < 0)
        {
            direction = -direction;
        }
        if (IsKeyDown(KEY_D) && circle_x < width)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }
        // Game logic ends
        EndDrawing();
    }
}