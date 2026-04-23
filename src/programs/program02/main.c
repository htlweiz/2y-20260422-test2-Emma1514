/// \file program02
/// \author Emma Zahrnhofer
/// \date 23.04.2026

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int16_t count = 0;
  // write your solution here
  int number = 0;
  printf("Geben Sie eine Zahl ein: ");
  scanf("%d", &number);
  while (number <= 6)
  {
    printf("%d\n", number);
  }
  printf("Du hast %d Mal gültig gewürfelt.", count);
}
