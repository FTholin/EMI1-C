```c
#include <stdio.h>

int main(void) {
  int num1 = -5;
  int num2 = 42;
  printf("The two numbers are %d and %d.", num1, num2);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int nomAleatoire = rand() % 20 + 1;
  printf("%d\n", nomAleatoire);
}


#include <stdio.h>

void printMyFavoriteAnimal(void) {
  printf("My favorite animal is a giraffe.");
}

int main(void) {
  printMyFavoriteAnimal();
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int obtenirAleatoire1000() {
  int nombreAleatoire1000 = rand() % 1000 + 1;
  return random1000;

}

int main(void) {
  srand(time(NULL));
  int nombreAleatoire = obtenirAleatoire1000();
  printf("Mon nombre aléatoire est: %d", nombreAleatoire);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void obtenirAleatoire(int nombreMax) {
  int nombreAleatoire = rand() % nombreMax + 1;
  return nombreAleatoire;
}

int main(void) {
  srand(time(NULL));
  int nombreAleatoire = obtenirAleatoire(1000);
  printf("Mon nombre aléatoire est: %d", nombreAleatoire);
}


#include <stdio.h>

void incrementAge(int* agePointer) {
  *agePointer += 1;
}

int main(void) {
  int age = 42;
  incrementAge(&age);
  printf("%d\n", age);
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void repetitionDigit(int);
int obtenirAleatoire(int);

void repetitionDigit(int repetitions) {
  int digit = obtenirAleatoire(9);
  for(int i = 0; i < repetitions; i++) {
    printf("%d ", digit);
  }
  printf("\n");
}

int obtenirAleatoire(int nombreMax) {
  int nombreAleatoire = rand() % nombreMax + 1;
  return nombreAleatoire;
}


int main(void) {
  srand(time(NULL));
  int repetitions = obtenirAleatoire(10);
  repetitionDigit(repetitions);
}

```