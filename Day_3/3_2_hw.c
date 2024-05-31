//WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user.
#include <stdio.h>
int main()
{
    int sub[10],i;
    float avg;
    avg=0;
    for (i=0;i<5;i++){
        printf("Enter the marks for subject %d ",i+1);
        scanf("%d",&sub[i]);
        avg+=sub[i];
    }
    printf("The average marks of al five subjects is %0.2f",avg/5);
    return 0;
}