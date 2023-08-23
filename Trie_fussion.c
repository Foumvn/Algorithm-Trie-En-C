#include <stdio.h>

void triFusion(int i, int j, int tab[], int tmp[]) 
{
    if(j <= i)
	{ 
	   return;
	}

    int m = (i + j) / 2;

    triFusion(i, m, tab, tmp);          //trier la moiti� gauche r�cursivement
    triFusion(m + 1, j, tab, tmp);      //trier la moiti� droite r�cursivement

    int pg = i;                         //pg pointe au d�but du sous-tableau de gauche
    int pd = m + 1;                     //pd pointe au d�but du sous-tableau de droite
    int c;                              //compteur

                                        // on boucle de i � j pour remplir chaque �l�ment du tableau final fusionn�
    for(c = i; c <= j; c++) 
	{
        if(pg == m + 1) 
		{                               //le pointeur du sous-tableau de gauche a atteint la limite
            tmp[c] = tab[pd];
            pd++;
        }
		    else if (pd == j + 1)       //le pointeur du sous-tableau de droite a atteint la limite
			 {                         
                tmp[c] = tab[pg];
                 pg++;
             }
		    else if (tab[pg] < tab[pd]) //le pointeur du sous-tableau de gauche pointe vers un �l�ment plus petit
			 { 
                tmp[c] = tab[pg];
                pg++;
             } 
	      	else                        //le pointeur du sous-tableau de droite pointe vers un �l�ment plus petit
			 {  
            tmp[c] = tab[pd];
            pd++;
        }
    }

    for(c = i; c <= j; c++)             //copier les �l�ments de tmp[] � tab[]
	 {      
        tab[c] = tmp[c];
     }
}


int main() 
{
  int  nbr, i, tab[100], tmp[100];
  printf("************TRI PAR FUSSION************\n");

  printf(" Entrez le nombre d'elements dans le tableau: ");
  scanf("%d", &nbr);

  printf(" Entrez %d entiers : ", nbr);

        for (i = 0; i < nbr; i++)
        scanf("%d", &tab[i]);

  triFusion(0, nbr-1, tab, tmp);

  printf("\n Tableau trie : ");
        for(i = 0; i < nbr; i++)  
         {
           printf(" %4d", tab[i]);
         }
  printf("\n");
  
  return 0;

 }
