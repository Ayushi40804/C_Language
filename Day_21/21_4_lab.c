#include <stdio.h>
void REVERSE_STRING (char[]);

int main()
{
    char str [100];
    printf ("Enter the string : \n");
    gets(str);
    REVERSE_STRING(str);
    printf("After reverse the string is %s : \n" , str);   
    return 0;
}


void REVERSE_STRING (str)
{
    char *p=str , *q=str , t;
    for (; *q;q--);
    q--;
    for (; p<q;p++,q--){
        t=*p;
        *p = *q;
        *q=t;
    }
}

