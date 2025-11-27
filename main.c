#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
  #include <windows.h>
#else
  #include <unistd.h>
#endif

int menu() {
  printf("-----------------------------------------------\n");
  printf("*                                             *\n");
  printf("*                    Game 1                   *\n");
  printf("*                                             *\n");
  printf("-----------------------------------------------\n\n");
  printf("Welcome to Game 1.\n\n");
  printf("Main Menu:\n");
  printf("[S]tart\n");
  printf("[E]xit\n");
  char choice;
  scanf(" %c", &choice);
  if (choice == 'S' || choice == 's') {
    #ifdef _WIN32
      system("cls");
    #else
      system("clear");
    #endif
    system("game1.exe");
  } else {
      system("exit");
  }
  #ifdef _WIN32
    system("pause > nul");
  #else
    system("sleep 5");
  #endif
  return 0;
}

int main() {
  menu();
}