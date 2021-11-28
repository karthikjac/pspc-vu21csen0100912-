/* program to find a person is eligible to vote (or) not
#include<stdio.h>
main()
{
    int age;
    printf("Enter the age of the person :  \n");
    scanf("%d",&age);
    (age>=18)? printf("this person is eligible to vote") : printf("this person is not able to vote");
}
