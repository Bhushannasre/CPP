/*Input character and check whether uppercase or lowercase*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:-");
    scanf("%c",&ch);

    if(ch<=65&&ch<=90)
    {
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
