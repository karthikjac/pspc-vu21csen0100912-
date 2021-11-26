1.#include <stdio.h>
2.int main() {
3.   int year;
4.   printf("Enter a year: ");
5.   scanf("%d", &year);
6.
7.   // leap year if perfectly divisible by 400
8.   if (year % 400 == 0) {
9.     printf("%d is a leap year.", year);
10.   }
11.   // not a leap year if divisible by 100
12.   // but not divisible by 400
13.   else if (year % 100 == 0) {
14.      printf("%d is not a leap year.", year);
15.   }
16.   // leap year if not divisible by 100
17.   // but divisible by 4
18.   else if (year % 4 == 0) {
19.      printf("%d is a leap year.", year);
20.   }
21.   // all other years are not leap years
22.   else {
23.    printf("%d is not a leap year.", year);
24.  }
25.
26.   return 0;
}
