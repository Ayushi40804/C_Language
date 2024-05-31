//WAP to add two times in hour, minute & second format entered through the keyboard in the format hh:mm:ss
//[Input must be taken in such a way so that sum should not exceed 24 hours]
#include <stdio.h>
int main()
{
    int hh1,mm1,ss1,hh2,mm2,ss2,hh,mm,ss;
    int total_hh,total_mm,total_ss;
    printf("Enter any time(hh:mm:ss) : ");
    scanf("%d:%d:%d",&hh1,&mm1,&ss1);
    printf("Enter any time(hh:mm:ss) : ");
    scanf("%d:%d:%d",&hh2,&mm2,&ss2);

    total_ss = ss1+ss2;
    ss = total_ss%60;

    total_mm = mm1+mm2;
    mm = total_mm%60 + total_ss/60;

    total_hh = hh1 + hh2;
    hh = total_hh + total_mm/60;
    hh=hh%24;
    printf("The total time is (hh:mm:ss) %d:%d:%d",hh,mm,ss);
    return 0;
}