#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

bool alive = true;

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

void creditsNewLineDelay(int delay) {
    #ifdef _WIN32
        Sleep(delay);
    #else
        usleep(delay * 1000);
    #endif
    printf("\n");
}

void credits() {
    char gameOver[] = "Game Over.\n";
    spellOut(gameOver, 100);
    creditsNewLineDelay(1000);

    char credits[] = "Credits:\n";
    spellOut(credits, 100);
    creditsNewLineDelay(1000);

    char writing[] = "Writing: JaimeC311\n";
    spellOut(writing, 100);
    creditsNewLineDelay(1000);

    char development[] = "Development: JaimeC311\n";
    spellOut(development, 100);
    creditsNewLineDelay(1000);

    char everythingElse[] = "Everything Else: JaimeC311\n";
    spellOut(everythingElse, 100);
    creditsNewLineDelay(1000);

    printf("Goodbye.\n");
    #ifdef _WIN32
        Sleep(1500);
    #else
        usleep(1500 * 1000);
    #endif
    printf("You may now exit by pressing [Enter]...\n");
    printf(":");
    #ifdef _WIN32
        system("pause > nul");
    #else
        system("sleep 5");
    #endif
}

int intro() {
    #ifdef _WIN32
        Sleep(100);
    #else
        usleep(100 * 1000);
    #endif
    char welcome[] = "Welcome.\n\n";
    spellOut(welcome, 85);
    #ifdef _WIN32
        Sleep(3000);
    #else
        usleep(3000 * 1000);
    #endif
    char startMessage[] = "The game starts now.\n";
    spellOut(startMessage, 85);
    #ifdef _WIN32
        Sleep(10000);
    #else
        usleep(10000 * 1000);
    #endif
    printf("\n");
    char actually[] = "It actually starts";
    spellOut(actually, 85);
    for(int i = 0; i < 3; ++i) {
        #ifdef _WIN32
            Sleep(300);
        #else
            usleep(300 * 1000);
        #endif
        printf(".");
    }
    char now[] = " now.\n";
    spellOut(now, 85);
    char continueMsg[] = "Press [Enter] to continue...\n";
    spellOut(continueMsg, 100);
    printf(":");
    #ifdef _WIN32
        system("pause > nul");
    #else
        system("sleep 5");
    #endif
    return 0;
}

int gameRoom5() {
    gameEnd();
    return 5;
}

int gameRoom4() {
    return gameRoom5();
}

int gameRoom3() {
    return gameRoom4();
}

int gameRoom2() {
    printf("PLACEHOLDER: unfinished\n");
    return gameRoom3();
}

int gameRoom1() {
    int seenDoor = 0;
    int foundKey = 0;
    const char *inv[] = { "Note", "Key",};
    size_t count = sizeof(inv) / sizeof(inv[0]);
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    char room1Intro[] = "You awake in a room. The bed; solid, cold, and dank, levels you to your feet.\n";
    spellOut(room1Intro, 85);
    action1:;
    char firstAction[] = "What do you do?\n\n[L]ook around the room\n[C]heck your pockets\n[S]cream for help\n[E]xit the game (warning, no saved game)\n";
    spellOut(firstAction, 85);
    char action;
    printf(":");
    scanf(" %c", &action);
    if(action == 'L' || action == 'l') {
        seenDoor = 1;
        char room1ActionL[] = "You see a double-door; akin to that of a public school or hospital, as well as a window to your right, along the outside wall.\n";
        spellOut(room1ActionL, 85);
        char room1ActionLChoice[] = "What do you do?\n\n";
        char openDoor[] = "[O]pen the door\n";
        char throughWindow[] = "[T]hrough the window\n";
        char previousMenu[] = "[P]revious menu\n";
        spellOut(room1ActionLChoice, 85);
        if (foundKey > 0) {
            spellOut(openDoor, 85);
        }
        spellOut(throughWindow, 85);
        spellOut(previousMenu, 85);
        char actionL;
        printf(":");
        scanf(" %c", &actionL);
        if(actionL == 'O' || actionL == 'o') {
            char room1ActionLO[] = "The door is locked.\n";
            char room1ActionLO2[] = "You use the key you found in your pocket to unlock the door.\n";
            if (foundKey > 0) {
                spellOut(room1ActionLO2, 85);
                char room1ActionLO2b[] = "You unlock the door, the key crumbling beyond further use in the process.\n";
                char youLeave[] = "You leave the room\n";
                spellOut(room1ActionLO2b, 85);
                spellOut(youLeave, 85);
                size_t newCount = 0;
                const char **filtered = malloc(count * sizeof(const char *));
                for (size_t i = 0; i < count; ++i) {
                    if (strcmp(inv[i], "Key") != 0) {
                        filtered[newCount++] = inv[i];
                    }
                }
                free(filtered);
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                return gameRoom2();
            }
            spellOut(room1ActionLO, 85);
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            goto action1;
        } else if (actionL == 'P' || actionL == 'p') {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            goto action1;
        } else if (actionL == 'T' || actionL == 't') {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            char room1ActionLT[] = "You approach the window and look outside. \nThe window is unlocked and only otherwise covered by a screen mesh, and beyond it, you see a desolate, barren landscape stretching into the horizon.\nFor some reason, you attempt escape through the window, despite clearly being multiple floors up.\nIn your foolish attempt, with the ground rushing to meet you, you faint before impact.\nYou die, unconciously.\n";
            alive = false;
            spellOut(room1ActionLT, 85);
            #ifdef _WIN32
                Sleep(1100);
            #else
                usleep(900 * 1000);
            #endif
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            char deathMsg[] = "You have died.\n";
            spellOut(deathMsg, 115);
            #ifdef _WIN32
                Sleep(1500);
            #else
                usleep(1500 * 1000);
            #endif
            return 0;
        }
    } else if (action == 'C' || action == 'c') {
        action2:;
        foundKey = 1;
        char room1ActionC1[] = "You check your pockets and find the following:\n";
        spellOut(room1ActionC1, 85);
        for (size_t i = 0; i < count; ++i) {
            spellOut(inv[i], 85);
            printf("\n");
        }
        char room1ActionC2[] = "What do you do?\n\n";
        char testKey[] = "[T]est the key on the door\n";
        char readNote[] = "[R]ead the note\n";
        char previousMenu[] = "[P]revious menu\n";
        spellOut(room1ActionC2, 85);
        if(seenDoor > 0) {
            spellOut(testKey, 85);
        }
        spellOut(readNote, 85);
        spellOut(previousMenu, 85);
        char actionC;
        printf(":");
        scanf(" %c", &actionC);
        if(actionC == 'T' || actionC == 't') {
            char room1ActionCT[] = "You try the key on the door. It fits, and you turn it. \nHowever, the key was extremely oxidized and crumbled beyond further use upon attempting to extract it from the door.\nThe door is now unlocked.\n";
            spellOut(room1ActionCT, 85);
            char room1ActionCT2[] = "What do you do?\n\n[O]pen the door\n[P]revious menu\n";
            spellOut(room1ActionCT2, 85);
            char actionCT;
            printf(":");
            scanf(" %c", &actionCT);
            if(actionCT == 'O' || actionCT == 'o') {
                char room1ActionCTO[] = "You open the door and step through...\n";
                spellOut(room1ActionCTO, 85);
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                return gameRoom2();
            } else if (actionCT == 'P' || actionCT == 'p') {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                goto action2;
            }
        } else if (actionC == 'R' || actionC == 'r') {
            char room1ActionCR[] = "The note is old, wrinkled, and blurred; currently, there is no way of reading it.\n";
            spellOut(room1ActionCR, 85);
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            goto action1;
        } else if (actionC == 'P' || actionC == 'p') {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            goto action1;
        }
        printf(":");
        #ifdef _WIN32
            system("pause > nul");
        #else
            system("sleep 5");
        #endif
    } else if (action == 'S' || action == 's') {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        char room1ActionS[] = "Regrettably, you scream. \nPreviously, the only light in the room came exclusively from the window; \nhowever, upon screaming, red alarm lights flash to existence.\nSuddenly, the room fills with a scent you can't quite place.\nHowever, it soon takes your consciousness, and shortly thereafter, your life.\n";
        spellOut(room1ActionS, 85);
        char room1ActionS2[] = "You have died.\n";
        spellOut(room1ActionS2, 115);
        alive = false;
        #ifdef _WIN32
            Sleep(1500);
        #else
            usleep(1500 * 1000);
        #endif
        return 0;
    } else if (action == 'E' || action == 'e') {
        printf("Exit with [Enter]...\n");
        printf(":");
        #ifdef _WIN32
            system("pause > nul");
        #else
            system("sleep 5");
        #endif
        return 1;
    }
    return gameRoom2();
}

int gameEnd() {
    credits();
    return 0;
}

int main() {
    int finalRoom = 5;
    intro:;
    intro();
    int x = gameRoom1();
    if(x == finalRoom) {
        #ifdef _WIN32
            system("congrats.exe");
        #else
            system("./congrats");
        #endif
    } else if(x == 0) {
        #ifdef _WIN32
            system("main.exe");
        #else
            system("./main");
        #endif
    } else {
        goto exit;
    }
    exit:;
    return 0;
}