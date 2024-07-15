#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE *getFile(char filename[100]) {
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    printf("File not found\n");
    exit(1);
  }
  return file;
}

void getFloor(FILE *file) {
  int c, floor = 0;
  while ((c = fgetc(file)) != EOF) {
    (c == '(') ? floor++ : (c == ')') ? floor-- : floor * 1;
  }
  printf("%d\n", floor);
}

void getBasementEnteringPosition(FILE *file) {
  int c, floor = 0;
  while ((c = fgetc(file)) != EOF) {
    (c == '(') ? floor++ : (c == ')') ? floor-- : floor * 1;
    if (floor == -1) {
      printf("enters Basement at: %ld\n", ftell(file));
      break;
    }
  }
}

void generateFile() {
  FILE *file;
  file = fopen("random.txt", "w");
  for (int i = 0; i < 7000; i++) {
    int random = rand() % 20;
    printf("%d\n", random);
    if (random < 10) {
      fprintf(file, "(");
    } else {
      fprintf(file, ")");
    }
  }
}
int main() {
    srand ( time(NULL) );
    //RAND_MAX
    printf("RAND_MAX: %d\n", RAND_MAX);
  FILE *file;
  printf("1. Get Floor\n2. Get Basement Entering Position\n3. Generate File\n");
  int choice;
  scanf("%d", &choice);
  if (choice == 1 || choice == 2) {
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = getFile(filename);
    if (choice == 1) {
      getFloor(file);
    } else {
      getBasementEnteringPosition(file);
    }
  } else if (choice == 3) {
    generateFile();
    int option;
    printf("Do you want to get the floor or basement entering position?\n1. Get Floor\n2. Get Basement Entering Position\n");
    scanf("%d", &option);
    if (option == 1) {
      file = getFile("random.txt");
      getFloor(file);
    } else if (option == 2) {
      file = getFile("random.txt");
      getBasementEnteringPosition(file);
    } else {
      printf("Invalid choice\n");
    }
  } else {
    printf("Invalid choice\n");
  }


  return 0;
}
