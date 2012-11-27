#include<stdio.h>
#include<stdlib.h>

void menu ()
{
  printf("__________\nMENU_____________\n");
  printf("1-calcul de la somme des notes saisies\n2-calcul de la moyenne\n3-affiche le minimum\n4-afiche le maximum\n5-quitter");
  printf("_________\n votre choix?");

}
 int main()
 {
 printf("\n_______________\n");
 int tab[10]={5,7,9,11,12,6,18,20,2,8};
 int i,min,max,som,moy,nb,rep;

    min=tab[0];
    max=tab[0];
    som=0;

do

{
    menu();
    printf("effectuer votre choix\n");
    scanf("%d",&rep);
    if (rep<5)
       {


    switch (rep)
    {
        case 1:
            for(i=0;i<=9;i++)
            {
                som=som+tab[i];
            }
            printf("somme des notes du tableau: %d \n",som);
            break;

        case 2:
            for(i=1;i<=9;i++)
            {
                som=som+tab[i];
            }
            moy=som/10;
            printf("calcul de la moyenne: %d \n",moy);
            break;

        case 3:
            for (i=0;i<=9;i++)
            {
            if (tab[i]<min)
              min=tab[i];
            }
              printf("valeur minimum: %d \n",min);
            break;

        case 4:
             for (i=0;i<=9;i++)
            {
            if (tab[i]>max)
             max=tab[i];
            }

             printf("valeur maximum: %d \n",max);
             break;
        default :
            break;
    }
       }
      else printf ("tchao\n");
 }while ( rep != 5 );

  system("pause");
  return 0;
 }
