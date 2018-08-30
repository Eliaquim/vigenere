#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

char checa_letra (char l);

int main(void)
{
    bool espaco = 1;
    string nome = get_string();

    // attempt to work only if a string has been entered
    if(nome != NULL)
    {
        for (int i = 0, n = strlen(nome); i < n; i++)
        {
            // works the first time or after a space
            if(espaco == 1 && nome[i] != ' ')
            {
                printf("%c", checa_letra(nome[i]));
                // espaco == 0 means the next letter is not an initial because it does not come after a space
                espaco = 0;
            }
            // if the current character is indeed a space, swapp espaco to 1 so that we know that the next character is an initial
            if(nome[i] == ' ')
           {
               espaco = 1;
           }
        }
    }
    printf("\n");
}

// verifies if the character is a lower case one. If so, turns it to an upper case one. If not returns the character unchanged
char checa_letra (char l)
{
    char r = l;
    if(l >= 'a' && l <= 'z')
    {
        r = toupper(l);
    }
    return r;
}
