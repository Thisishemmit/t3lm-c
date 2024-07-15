#include <stdio.h>

void printGuides() {
  printf("\n");
  printf("Salam 3likom, World!\n");
  printf("Ghatlahad bli kayn wahd file simito puzzle.txt hda test1.c\n");
  printf("Dak lfile fih instruction dial kifash nwslo lwahd lwijha\n");
  printf("Dik lwijha kayn fiha wahd shakhs kystanana\n");
  printf("Lwijha kayna fwahd l3imara twiiila bzaaaf wdaakhla flard bazaf\n");
  printf("Instructions dylna homa 2 charachters, '(' and ')'\n");
  printf("'(' katgol lik tl3 wahd etage \n");
  printf("')' katgol lik ta7bat wahd etage\n");
  char understood = 'a';
  printf("fhamti? (y/n): ");
  scanf("%c", &understood);
  getchar();
  if (understood == 'n' || understood == 'N') {
    printGuides();
  } else if (understood == 'y' || understood == 'Y') {
    printf("Mazyaaan\n");
  }
}

void requirement1() {
  printf("\n");
  printf("Ash khasak dir r9m 1:\n");
  printf("ghata3tina ina etage kayn fih dak shakhs b instructions li kynin f "
         "puzzle.txt\n");
  printf("Hna knbdaw man etage r9m 0\n");
  // example for etage = 1
  printf("Example: ( awla (() awla ((()) ghadi ta3tina etage r9m 1\n");
  // example for etage = 4
  printf("Example: )())()(( ghadi ta3tina etage r9m 4\n");
  // example for etage = -1
  printf("Example: ()) awla )(()))( ghadi ta3tina etage r9m -1\n");
  char understood = 'a';
  printf("fhamti? (y/n): ");
  scanf("%c", &understood);
  getchar();
  if (understood == 'n' || understood == 'N') {
    requirement1();
  } else if (understood == 'y' || understood == 'Y') {
    printf("Mazyaaan\n");
  }
}

void howToCheckPass() {
  printf("\n");
  printf("Fash tal9a lajawab ghaykon howa password dyal part2.zip li kayn hda "
         "test1.c tama ghatl9a part 2 man had tamrin wli ghayakhdna l tamrin "
         "zawj");
}

int main() {
  printGuides();
  printf("\n");
  requirement1();
  return 0;
}
