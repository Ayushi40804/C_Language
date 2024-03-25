#include <stdio.h>
int STRLEN(char[]);
int IS_PALINDROME (char[],int);
int main()
{
    int x,y,i,len;
    char str[200];
    printf("Ent er the string: ");
    gets(str);
    len=STRLEN(str);

    if (IS_PALINDROME(str, len)){
        printf("PALINDROME!!!");
    }
    else{
        printf("NOT PALINDROME!!!");
    }
    return 0;
}
int STRLEN (char s[])
{
    int i;
    for (i=0;s[i];i++);
    return i;
}
int IS_PALINDROME (char s[], int l)
{
    int i,j,flg;
    for (i=0,j=l-1;i<l/2;i++,j++){
        if (s[i]!=s[j]){
            flg=0;
            break;
        }
    }
    return flg;
}