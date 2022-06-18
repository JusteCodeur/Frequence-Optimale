#include <stdio.h>
#include <stdlib.h>
#define MTP 3

int main(void)
{
    int N, *freqs=NULL, i, min=1000, mod;
    
/*------------------- Receuillir le nombre de fréquence et les fréquences en question ---------------------*/
    do
    {
        system("cls");

        printf("Entrer le nombre de frequence trouvee:   ");
        scanf("%d", &N);

        if(N<1 || N>1000)
            printf("Ce nombre doit être compris entre 1 et 1000 !\n");
    } while (N<1 || N>1000);
    

    freqs = malloc(N * sizeof(int));
    if(freqs == NULL)
        exit(-1);

    for(i=0; i<N; i++)
    {
        printf("Entrer la frequence:    ");
        scanf("%d", &freqs[i]);
    }

/*-------------- Receuillir les multiples de trois dans un freqsleau et Ressortir le plus petit ---------------*/
    for (i=0; i<N; i++)
    {
        mod = freqs[i] % MTP;
        if(mod == 0)
        {
            if(freqs[i] < min)
            {
                min = freqs[i];
            }
        }
    }
  
/*-------------------------------------- Afficher la fréquence optimale --------------------------------------*/
    if(min != 1000)
    {
        printf("La frequence optimale est %d", min);
    }
    else{
        printf("Aucune frequence n\'est optimale dans cette liste\n");
    }

    return 0;
}