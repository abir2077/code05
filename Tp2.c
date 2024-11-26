#include<stdio.h>
#include<string.h>
#include<stdlib.h>

  char *ChargerChaine(int N)  {

        char *chaine  =  (char *) malloc ((N+1) * sizeof(char))  ;

    if( chaine == NULL) {

        printf("erreur d'allocation mémoire \n") ;

                 return 1 ;
                                     }
                printf("veuillez entrer la chaine de caractères :\n")  ;

                           scanf("%s",chaine) ;

                               return chaine ;

                                                   }
  int longueur ( char *ch)
     {
     return strlen (ch) ;
     }

 void ChargerTab(char *p , char Tab[] )
     {

       strcpy (Tab , p) ;

    }

 void inverserTab( char Tab[] , char T[] , int m )
   {
           for ( int i = 0; i<m; i++)
               {
                    T[i] = Tab [m - 1 - i] ;
               }
        T[m] =  '\0' ;
    }

 void afficherTab(char Tab[] , int m )
    {
        printf("%s\n" , Tab) ;
    }

    int main()
{
    int n,m  ;  char * ch ;

        printf("veuillez saisir la taille maximale de la chaine :\n") ;
               scanf ("%d" ,&n) ;

                    ch  =  ChargerChaine(n)  ;

                     m = longueur (ch) ;

                        char Tab [ m + 1] , T[ m + 1] ;

                        charger Tab ( ch , Tab ) ;

                        afficher Tab ( Tab , m ) ;

                        inverser Tab ( Tab , T ,m );

                        afficher Tab ( T , m) ;


        free (ch);

    return 0 ;
}
