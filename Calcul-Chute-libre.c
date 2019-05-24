#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    float hauteur=0, temps=0, g = 9.81;
    short choix=0;

    do{
        printf("\t1 - Calculer la hauteur\n");
        printf("\t2 - Calculer le temps\n");
        printf("Votre choix : ");
        fflush(stdin);
        scanf("%hd",&choix);

        switch(choix){
            case 1:
                printf("\nEncodez le temps(secondes) de la chute de la bille en plomb : ");
                scanf("%f",&temps);

                hauteur = 1.0/2 * g * (temps * temps);
                printf("\n-> La hauteur est de : %.2f\n",hauteur);

                break;
            case 2:
                printf("\nEncodez la hauteur de la chute de la bille : ");
                scanf("%f",&hauteur);

                temps = sqrt((hauteur/(1.0/2 * g)));
                printf("\n-> Le temps de la chute de la bille : %.2f", temps);

                break;
            default:
                system("cls");
                printf("Mauvais choix !\n\n");

                break;
        }
    }while(choix != 1 && choix != 2);

    return 0;
}
