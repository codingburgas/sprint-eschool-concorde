#include "raylib.h"
#include "testmenu.h"
#include "symbolistTest.h"
#include "SpleenTest.h"
#include "ConsoleApplication1/ConsoleApplication1/AutumnSongTest.h"

void testmenu() {
    int selectedOption = 0;
    bool exitMenu = false;

    while (!exitMenu) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("CHOOSE ONE OF THE FOLLOWING TESTS:", 150, 50, 20, DARKBLUE);
        DrawText("1. Age of Enlightenment", 200, 150, 20, BLACK);
        DrawText("2. Social Realism", 200, 200, 20, BLACK);
        DrawText("3. Return to Main Menu", 200, 300, 20, BLACK);

        if (IsKeyPressed(KEY_ONE)) {
            Ageofenlightenmenttest();
        }
        else if (IsKeyPressed(KEY_TWO)) {
            ModernismTest();
        }
        else if (IsKeyPressed(KEY_FOUR)) {
            exitMenu = true;
        }

        EndDrawing();
    }
}
