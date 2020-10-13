#include <stdio.h>
int main()
{
    float gpa;
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    if (gpa >= 3.5 && gpa <= 4.0)
    {
        printf("Cumlaude\n");
    }
    if (gpa >= 3.0 && gpa <= 3.4)
    {
        printf("Outstanding\n");
    }
    if (gpa >= 2.5 && gpa <= 2.9)
    {
        printf("Very Good\n");
    }
    if (gpa >= 2.0 && gpa <= 2.4)
    {
        printf("Good\n");
    }
    if (gpa < 2.0)
    {
        printf("Poor\n");
    }
    return 0;
}