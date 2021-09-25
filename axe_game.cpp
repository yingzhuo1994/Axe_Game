#include "raylib.h"
int main()
{
    // window dimensions
    int width = 350;
    int height = 200;
    InitWindow(width, height, "Stephen's Window");

    // circle coordinates
    int circle_x{175};
    int circly_y{100};

    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins

        DrawCircle(circle_x, circly_y, 25, BLUE);

        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }
        // Game logic ends
        EndDrawing();
    }
}