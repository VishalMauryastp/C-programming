#include <stdio.h>
#include<string.h>
int main()
{ 
    int i, vowels = 0, consonants = 0, spaces=0;
    char str[150];
    gets(str);
    // int strlen(str);
    // printf("Enter  the  string:  ");
    // scanf("%s", &str);

    for (i = 0; str[i]!='\0'; ++i)
        
    {
        // str[i] = to lower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
           ++vowels;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            ++consonants;
        }
        else if (str[i] ==' ')
        {
            ++spaces;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n",consonants );
    printf("Number of spaces: %d\n", spaces);
    return 0;
}