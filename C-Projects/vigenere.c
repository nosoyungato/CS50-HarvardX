#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])  
{

    if (argc != 2)
    {
        printf ("Ingresar una clave \n");

        return 1;
    }else{
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if(!isalpha(argv[1][i]))
            {
                printf("Clave incorrecta\n");
                return 1;
            }

        }
        
    }
    

    string p = GetString();
    string k = argv[1];
    int n = strlen(k);
    //printf("%i", n);

    for (int i = 0, j = 0; i < strlen(p); i++)
    {       


        if(!isalpha(p[i]))
        {
            printf("%c", p[i]);
        }
        else if (isupper(p[i]))
        {
                if (isupper(k[j%n]))
            {
               
          
                p[i] = ((p[i] - 65) + (k[j%n]-65))% 26 + 65;
                j++;
                printf("%c",p[i]);
                
            }else{
                p[i] = ((p[i] - 65) + (k[j%n]-97))% 26 + 65;
                j++;
                printf("%c",p[i]);

            }
        
        }
        else if(islower(p[i]))
        {
            if (isupper(k[j%n]))
            {
               
          
                p[i] = ((p[i] - 97) + (k[j%n]-65))% 26 + 97;
                j++;
                printf("%c",p[i]);
                
            }else{
            
                p[i] = ((p[i] - 97) + (k[j%n]-97))% 26 + 97;
                
                
                int testn = n;
                
                //printf("%i",testn);
                printf("%c",p[i]);
                //printf("\n");
                j++;
            }
        }
    }

    printf("\n");

    return 0;
}