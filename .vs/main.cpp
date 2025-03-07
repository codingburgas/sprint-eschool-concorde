#include "raylib.h"
#include "testmenu.h"
#include <iostream> 

int main() {
    const int screenWidth = 1200;
    const int screenHeight = 950;
    InitWindow(screenWidth, screenHeight, "CONCORDE");  // Initialize the window with the specified width, height, and title
    SetTargetFPS(60);

    bool exitProgram = false;  // Flag to determine if the program should exit
    float time = 0;  // Time variable for controlling the gradient animation

    while (!exitProgram && !WindowShouldClose()) {

        time += GetFrameTime(); // Update the time variable for each frame based on the time elapsed since the last frame

        // Calculate the gradient colors dynamically based on the time (creates a smooth color shift)
        float r = 100 + 100 * sin(time);  // Red component fluctuates with a sine wave
        float g = 100 + 100 * sin(time + 2.0f);  // Green component fluctuates with a sine wave, offset by 2
        float b = 100 + 100 * sin(time + 4.0f);  // Blue component fluctuates with a sine wave, offset by 4

        // Set up the color for the top and bottom parts of the gradient
        Color topColor = { (unsigned char)r, (unsigned char)g, (unsigned char)b, 255 };   
        Color bottomColor = { (unsigned char)(r / 2), (unsigned char)(g / 2), (unsigned char)(b / 2), 255 };

        BeginDrawing();

        // The gradient is drawn by looping through each pixel row and blending the top and bottom colors
        for (int i = 0; i < screenHeight; i++) {
            float t = (float)i / screenHeight;  // Calculate the relative position of each row (from top to bottom)
            Color blended = {
                (unsigned char)(topColor.r * (1 - t) + bottomColor.r * t),
                (unsigned char)(topColor.g * (1 - t) + bottomColor.g * t),
                (unsigned char)(topColor.b * (1 - t) + bottomColor.b * t),
                255 
            };
            DrawLine(0, i, screenWidth, i, blended);  // Draw the current line with the blended color
        }
        // (could be removed if not needed)
        DrawRectangle(50, 50, screenWidth - 100, screenHeight - 100, ORANGE); 
        DrawRectangle(70, 70, screenWidth - 140, screenHeight - 140, LIGHTGRAY);
        DrawRectangle(90, 90, screenWidth - 180, screenHeight - 180, ORANGE); 
        DrawRectangle(110, 110, screenWidth - 220, screenHeight - 220, BLACK); 
        DrawRectangle(130, 130, screenWidth - 260, screenHeight - 260, DARKGRAY); 

        DrawText("WELCOME TO CONCORDE!", 400, 150, 30, ORANGE);
        DrawText("CHOOSE ONE OF THE FOLLOWING:", 400, 200, 20, DARKGRAY);
        DrawText("1. Head to Test Section", 450, 300, 20, BLACK);
        DrawText("2. Exit the Program", 450, 350, 20, BLACK);

        if (IsKeyPressed(KEY_ONE)) {  
            testmenu();
        }
        else if (IsKeyPressed(KEY_TWO)) {
            exitProgram = true; 
        }

        EndDrawing();
    }

    CloseWindow();

}
