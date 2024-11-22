#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter an Alphabet: ");
    scanf("%c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("The character is a vowel.");
    }
    else if (('A'<=ch && ch<='Z')||('a'<=ch && ch<='z'))
    {
        printf("The character is a consonant.");
    }
    else
    {
        printf("The input is invalid.");
    }
    return 0;
}
