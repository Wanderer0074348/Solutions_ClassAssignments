#include<stdio.h>
//Q)Write a C program to accept the marks obtained by a student in 5 courses and calculate the average and percentage. (Consider maximum marks in a course is 100).
void question1()
{
    int a,b,c,d,e;
    printf("Type in your grades with max marks as 100:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    printf("\nThe average score is %d: \nThe Percentage is %d%%\n",(a+b+c+d+e)/5,(a+b+c+d+e)*100/500);
}
//Q)Write a C program to accept the radius of the circle and find the area & perimeter of the circle
void question2()
{
    int rad;
    scanf("%d",&rad);
    float area = 3.14*rad*rad;
    float perimeter = 3.14*2*rad;

    printf("The area is %fm^2 and the perimeter is %fm\n",area,perimeter);

}

// Q)The total salary of any employee is a combination of basic, HRA, and allowance.
//  The HRA is 40% of Basic. The basic and allowance will be accepted by the user.
//  Write a C program to calculate the total salary and display it.
void question3(){
    int basic,allowance;
    scanf("%d",&basic);
    scanf("%d",&allowance);
    float hra = basic*0.4;
    printf("The Total Salary is %f",hra+basic+allowance);
}
// Q)Write a C program to accept 4 digit number from the input device and perform the
// sum of its digits.
// example: Input:
// 1234
// output: 4 + 3+ 2 + 1 = 10
void question4(){
    int num;
    scanf("%d",&num);
    int sum = 0;
    while (num>0)
    {
        int val = num % 10; 
        sum+=val;
        num = num / 10;

    }
    printf("%d\n",sum);
    
}

//Q) Write a c program to accept a coordinate point in a XY coordinate system and determine in which coordinate point lies

void question5()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&x);
    if (x>=0)
    {
        if (y>0)
        {
            printf("First Quadrant");
        }
        else if (y<0)
        {
            printf("fourth quadrant");
        }
    }
    if (x<0)
    {
        if (y>=0)
        {
            printf("second Quadrant");
        }
        else if (y<0)
        {
            printf("third quadrant");
        }
    }
}


// Q) Find the factorial of a number
void question6()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("Not possible to find the factorial of a negative number\n");
    }    
    else if (n == 0)
    {
        printf("The factorial of 0 is 1\n");
    }
    else
    {
        int fact = 1;
        for (int i = 1; i < n+1; i++)
        {
            fact *= i;
        }   
        printf("%d",fact);
    }
}


// Q) Find the number of prime numbers between two numbers 
void question7()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for (int i = 1; i < n+1; i++)
    {
        int count = 0;
        
        for (int num = 2; num <= i/2; num++)
        {
            if (i%num == 0){
                count++;
                break;
            }
        }
        if (count==0 && i!=1){
            printf("%d ",i);
        }
    } 
    
}

// Q) Find the sum of the even digits and odd digits in a given number
void question8()
{
    int n, reverse = 0, remainder, sumeven = 0, sumodd = 0, counteven = 0,countodd = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder%2==0){
            counteven++;
            sumeven+=remainder;
        }
        else{
            countodd++;
            sumodd+=remainder;
        }
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d\n", reverse);
    printf("Even Sum: %d, Odd Sum: %d\n", sumeven, sumodd);
    printf("Even Numbers: %d, Odd Numbers: %d\n", counteven,countodd);
} 

// Q) Create a Grid of numbers using nesting for loops
void Question9(){
    int count = 1;
    for (int r = 0; r <= 15; r++)
    {
        for (int c = 0; c <= 15; c++)
        {
            printf("(%d)\t",count);
            count++;    
        }
        printf("\n");
    }
    
}

// Q) Create a Half Diamond
void Question10(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    for (int i = x-1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    question1();
    printf("************************************************\n");
    question2();
    printf("************************************************\n");
    question3();
    printf("************************************************\n");
    question4();
    printf("************************************************\n");
    question5();
    printf("************************************************\n");
    question6();
    printf("************************************************\n");
    question7();
    printf("************************************************\n");
    question8();
    printf("************************************************\n");
    question9();
    printf("************************************************\n");
    question10();
    printf("************************************************\n");
    return 0;
}
