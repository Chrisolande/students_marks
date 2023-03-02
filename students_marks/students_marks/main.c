#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[50];
    int mark_1, mark_2, mark_3, mark_4, mark_5,total_marks;
    double percentage;

    printf("Please input your name:\t");
    fgets(name, 50, stdin);


    printf("Hi %s please input your marks in the first unit:\t", name);
    scanf("%d", &mark_1);

    printf("Please input the marks you got in the second unit:\t ");\
    scanf("%d", &mark_2);

    printf("Please input the marks you got in the third unit:\t ");

    scanf("%d", &mark_3);

    printf("Please input the marks you got in the fourth unit:\t ");
    scanf("%d", &mark_4);

    printf("Please input the marks you got in the fifth unit:\t ");
    scanf("%d", &mark_5);

    total_marks = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
    printf("Totals:\t%d",total_marks);

    percentage =   (total_marks*100) / 500;
    printf("\nPercentage:\t%.2f%%", percentage);

    if(percentage >= 80 && percentage <= 100)
    {
        printf("\nYou have a mean grade of A");
    }
    else if (percentage >=70 && percentage <= 80)
    {
        printf("\nYou got a mean grade of B");
    }
      else if (percentage >=60&& percentage <= 70)
    {
        printf("\nYou got a mean grade of C");
    }
      else if (percentage >=50 && percentage <= 60)
    {
        printf("\nYou got a mean grade of D");
    }
      else if (percentage >=40 && percentage <= 50)
    {
        printf("\nYou got a mean grade of E");
    }
      else if (percentage >=30 && percentage <= 40)
    {
        printf("\nYou got a mean grade of F");
    }
      else
        {
            printf("\nYou FAILED!!!");
        }


    return 0;
}
