#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void spellOut(const char* message, int delay) {
    for(int i = 0; i < strlen(message); ++i) {
        printf("%c", message[i]);
        #ifdef _WIN32
            Sleep(delay);
        #else
            usleep(delay * 1000);
        #endif
    }
}

int main() {
    #ifdef _WIN32
        system("cls");
        Sleep(1500);
    #else
        system("clear");
        usleep(1500 * 1000);
    #endif
    char gameOver[] = "Congratulations! You have completed the game.\n\n";
    spellOut(gameOver, 100);
    #ifdef _WIN32
        Sleep(1500);
    #else
        usleep(1500 * 1000);
    #endif
    char exitChoice[] = "What do you do?\n\n";
    char exitOption1[] = "[E]xit the game\n";
    char exitOption2[] = "[R]eturn to main menu\n";
    spellOut(exitChoice, 100);
    spellOut(exitOption1, 100);
    spellOut(exitOption2, 100);
    char exitAction;
    printf(":");
    scanf(" %c", &exitAction);
    if (exitAction == 'R' || exitAction == 'r') {
        #ifdef _WIN32
            system("cls");
            system("main.exe");
        #else
            system("clear");
            system("./main");
        #endif
    } else if (exitAction == 'E' || exitAction == 'e') {
        printf("Exit with [Enter]...\n");
    #ifdef _WIN32
        system("pause > nul");
    #else
        system("sleep 5");
    #endif
    return 0;
    }
}