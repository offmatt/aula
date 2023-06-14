#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <locale.h>

int strlen(char *s);

int main()
{
    char str1[50] = "Linguagem C 2023";
    char str2[50] = "Teste de string na linguagem C 12345";
    char com[50];

    printf("Contando caracteres - TOTAL: %d. \n", strvowel(str1));
    printf("Contando caracteres - TOTAL: %d. \n\n", strvowel(str2));

}

int strlen(char *s)
{
    register int i = 0;

    while (s[i] != '\0')
        i++;

    return i;
}

int strvowel(char *s)
{
    register int i = 0, vowel = 0;

    while (s[i] != '\0')
    {
        switch(s[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowel++;
        }
        i++;
    }

    return vowel;
}


char *strcpy(char *dest, char)
{
    register int i = 0, vowel = 0;

    while (s[i] != '\0')
    {
        switch(s[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowel++;
        }
        i++;
    }

    return vowel;
}
*/
