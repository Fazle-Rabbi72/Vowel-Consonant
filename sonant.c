#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter:\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Vowel");

    }
    else
    {
        printf("consonant");
    }
    return 0;
}
