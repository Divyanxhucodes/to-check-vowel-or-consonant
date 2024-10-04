#include<stdio.h>
int main()
{
    char ch;
    printf ("enter a character to check vowel or consonant");
    scanf ("%c",&ch);
    if ((ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'))
    {
        printf("%c,it is a vowel \n",ch);
    }
    else
    {printf ("%c, it is a consonant");
      }
      return 0;
}