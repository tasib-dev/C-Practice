#include <stdio.h>
int main() {
    int number = 1234;
    int guess;
  while(1){  
    printf("guess a 4 digit nymber:   ");
    scanf("%d", &guess);

    if (guess == number)
    {
        break;
    } else {printf("try again\n");}
  }

  printf("Correct!!!\n");
    return 0;
}