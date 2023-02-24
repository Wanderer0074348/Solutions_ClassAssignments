#include<stdio.h>

// compare 3 numbers and print the larger number accordingly

void question1(){
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a==b && a==c)
        printf("The three numbers are equal");
    if (a > b && a > c)
        printf("%d\n", a);
    if (b > a && b > c)
        printf("%d\n", b);
    if (c > a && c > b)
        printf("%d\n", c);
}

int main()
{
    question1();
}