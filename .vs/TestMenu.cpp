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
        DrawText("1. Symbolist Movement", 200, 150, 20, BLACK);
        DrawText("2. Spleen - Charles Baudelaire", 200, 200, 20, BLACK);
        DrawText("3. Autumn Song - Paul Verlaine", 200, 250, 20, BLACK);
        DrawText("4. Return to Main Menu", 200, 300, 20, BLACK);

        if (IsKeyPressed(KEY_ONE)) {
            SymbolistTest();
        }
        else if (IsKeyPressed(KEY_TWO)) {
            SpleenTest();
        }
        else if (IsKeyPressed(KEY_THREE)) {
            AutumnSongTest();
        }
        else if (IsKeyPressed(KEY_FOUR)) {
            exitMenu = true;
        }

        EndDrawing();
    }
}
