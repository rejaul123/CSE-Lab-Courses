#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter an Alphabet: ");
    scanf("%c", &ch);
    if (ch=='k' || ch=='l' || ch=='m' || ch=='n' || ch=='o'||
        ch=='K' || ch=='L' || ch=='M' || ch=='N' || ch=='O')
    {
        printf("The Alphabet is between 'k' to 'o'.");
    }
    else if (('A'<=ch && ch<='Z')||('a'<=ch && ch<='z'))
    {
        printf("The Alphabet is not between 'k' to 'o'.");
    }
    else
    {
        printf("The input is not an Alphabet.");
    }
    return 0;
}
