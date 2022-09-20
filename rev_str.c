#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()//int argc, char *argv[])
{
    char str[50];
    int loung_str;
    int count;


// affiche de message et on met ce que l'utilisateur ecrit dans str //

    printf("Bonjour\n Tapez votre mot sans espace et moi je ferai du verlan avec:\n\n\n");
    scanf("%s", str);

// boucle qui va compter le nbr de caractère dans la chaine et l'incrementer dans loung_str//

    for (loung_str = 0; str[loung_str] != 0; loung_str++)
        count = loung_str;

    printf("votre mot à %d lettres\n", count + 1);

// boucle qui va afficher la chaine de caratère a partir de la fin cad du nombre count //

    printf("et voici votre mot en verlan:  ");
    for (count; count >= 0; count--)
    printf("%c", str[count]);
    

    printf("\n");
     

    // ça c'etait des test que je faisait mdr //

    //int tab[250];
    //int i;
    //int str;

    //scanf("");
   
   // for (i = 0; i < 3; i++)
//   printf("mon nombre tab[%d] vaut %d\n", i, tab[i]);

//  printf("ma case 1 est %d\n", tab[0]);
    // printf("ma case 2 est %d\n", tab[1]);
   // printf("ma case 2 est %d\n", tab[2]);

return 0;
}