#include <stdio.h>
int main()
{
    char n;
    printf("Enter an alphabtical character to check for vowel or consonant :");
    scanf("%c",&n);

    //checking the conditions
    if(n=='a' || n=='e'|| n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
    {
        printf("It is a Vowel \n");
    } 
    else
    {
        printf("It is a consonant\n");
    }
    return 0;
}