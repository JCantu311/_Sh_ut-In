#include <stdio.h>
#include <stdlib.h>
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

int menu() {
  restart:;
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
  printf("-----------------------------------------------\n");
  printf("*                                             *\n");
  printf("*                 [Sh]ut In                   *\n");
  printf("*                                             *\n");
  printf("-----------------------------------------------\n\n");
  printf("Welcome to Game 1.\n\n");
  printf("Main Menu:\n");
  printf("[S]tart\n");
  printf("[D]ocumentation\n");
  printf("[E]xit\n");
  for(int i = 0; i < 2; ++i) {
    printf("\n");
  }
  char choice[2];
  printf(":");
  scanf(" %s", choice);
  if (strcmp(choice, "S") == 0 || strcmp(choice, "s") == 0) {
    #ifdef _WIN32
      system("cls");
      system("game1.exe");
    #else
      system("clear");
      system("./game1");
    #endif
  } else if (strcmp(choice, "E") == 0 || strcmp(choice, "e") == 0) {
      system("exit");
  } else if (strcmp(choice, "D") == 0 || strcmp(choice, "d") == 0) {
      #ifdef _WIN32
          system("start docs.html > nul");
      #else
          system("xdg-open docs.html");
      #endif
      goto restart;
  } else if (strcmp(choice, "sh") == 0 || strcmp(choice, "Sh") == 0|| strcmp(choice, "SH") == 0) {
    char shush[] = "How dare you tell me to shush? ";
    char terminating[] = "Terminating";
    spellOut(shush, 85);
    #ifdef _WIN32
      Sleep(500);
    #else
      usleep(500 * 1000);
    #endif
    spellOut(terminating, 85);
    for(int i = 0; i < 3; ++i) {
        #ifdef _WIN32
          Sleep(300);
        #else
          usleep(300 * 1000);
        #endif
        printf(".");
    }
    printf("\n");
    #ifdef _WIN32
      Sleep(200);
      system("cls");
    #else
      usleep(200 * 1000);
      system("clear");
    #endif
    system("exit");
  } else {
    goto restart;
  }
  return 0;
}

int main() {
  menu();
}