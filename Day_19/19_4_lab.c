#include <stdio.h>
int main()
{
    int i,j,k,flg;
    char str[200];
    printf("Enter the string: \n");
    gets (str);
    for(i=0; str[i];i++){
        
    }
    k=i-1;
    printf("the length of the string is %d\n",i);
    for (i=j , j=k ; i<k/2 ; i++ , j--){
        if (str[i]!=str[j]){
            flg=1;
            break;
        }
    }
    if (flg==1){
        printf("It is not a PALINDROME!");
    }
    else{
        printf("It is a PALINDROME!");
    }
    return 0;
}