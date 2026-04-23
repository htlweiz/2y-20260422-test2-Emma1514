/// \file program01
/// \author Emma Zahrnhofer
/// \date 23.04.2026

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
   // write your solution here
   int number = 0;
   printf("Geben Sie eine Zahl ein: ");
   scanf("%d", &number);
   if (number > 0)
   for (int i = 0; i <= number ; i++) {
      printf("%d ", i);
   }
   else
   {
      for (int i = 0; i >= number ; i--) {
      printf("%d ", i);
   }
   }
   printf("\n");

}
