#include <stdio.h>
#include <string.h>
int main() {
    char encrypted [8][11] , sybmol_table [10] [11] , reversed [9] ;
    int i = 0 , j = 0 ;
     /* git the whole password */
    for(i = 0 ; i < 8 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            scanf(" %c",&encrypted [i][j]) ;
        }
        /* segment the whole password */
        encrypted [i][j] = '\0' ;
    }
    /* git keys */
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%s",sybmol_table[i]);
    }
    /* search the real value for every segment */
    for(i = 0 ; i < 8 ; i++)
    {
        if(!strcmp(sybmol_table[0] ,encrypted [i] ))
        {
          reversed [i] = '0' ;
        } else if (!strcmp(sybmol_table[1] ,encrypted [i] ))
        {
            reversed [i] = '1' ;
        } else if (!strcmp(sybmol_table[2] ,encrypted [i] ))
        {
            reversed [i] = '2' ;
        } else if (!strcmp(sybmol_table[3] ,encrypted [i] ))
        {
            reversed [i] = '3' ;
        } else if (!strcmp(sybmol_table[4] ,encrypted [i] ))
        {
            reversed [i] = '4' ;
        } else if(!strcmp(sybmol_table[5] ,encrypted [i] ))
        {
            reversed [i] = '5' ;
        } else if(!strcmp(sybmol_table[6] ,encrypted [i] ))
        {
            reversed [i] = '6' ;
        } else if(!strcmp(sybmol_table[7] ,encrypted [i] ))
        {
            reversed [i] = '7' ;
        } else if(!strcmp(sybmol_table[8] ,encrypted [i] ))
        {
            reversed [i] = '8' ;
        } else if(!strcmp(sybmol_table[9] ,encrypted [i] ))
        {
            reversed [i] = '9' ;
        }
        else
        {
            /* should not be here */
        }
    }
    reversed [i] = '\0' ;
    printf("%s",reversed) ;
    return 0;
}
