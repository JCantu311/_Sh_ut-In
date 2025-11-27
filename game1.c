#include <stdio.h>
#include <stdlib.h>

int gameStart() {
    printf("T");
    system("py wait_short.py");
    printf("h");
    system("py wait_short.py");
    printf("e");
    system("py wait_short.py");
    printf(" ");
    system("py wait_short.py");
    printf("g");
    system("py wait_short.py");
    printf("a");
    system("py wait_short.py");
    printf("m");
    system("py wait_short.py");
    printf("e");
    system("py wait_short.py");
    printf(" ");
    system("py wait_short.py");
    printf("s");
    system("py wait_short.py");
    printf("t");
    system("py wait_short.py");
    printf("a");
    system("py wait_short.py");
    printf("r");
    system("py wait_short.py");
    printf("t");
    printf("s");
    system("py wait_short.py");
    printf(" ");
    system("py wait_short.py");
    printf("n");
    system("py wait_short.py");
    printf("o");
    system("py wait_short.py");
    printf("w");
    system("py wait_short.py");
    printf(".\n");
    #ifdef _WIN32
        system("pause > nul");
    #else
        system("sleep 5");
    #endif
    return 0;
}

int main() {
    printf("Welcome.\n\n");
    system("py wait_script.py");
    gameStart();
    return 0;
}