#include<stdio.h>
#include<stdlib.h>

  char *ChargerChaine(int N) 
   {

        char *chaine  =  (char *) malloc ((N+1) * sizeof(char))  ;حجز مكان في ذاكرة//

         if( chaine == NULL) 
          {

            printf("erreur d'allocation mémoire \n") ;

             return 1 ;الخروج في حالة فشل الحجز//
          }
         printf("veuillez entrer la chaine de caractères :\n")  ;

         scanf("%s",chaine) ;قراءة السلسلة// 

         return chaine ;
    }

  int Longueur ( char *ch)
     {
        int length = 0;
        while (ch[length] != '\0') مادام السلسلة لم تنتهي//
          {
            length++ ; زيادة الطول عند كل حرف//
          }
         return length ;
     }

 void ChargerTab(char *p , char Tab[] ) اجراء لنسخ السلسلة من مؤشر الى مصفوفة باستخدام حلقة // 
   {

       int  i = 0 ;
       while ( p [i] != ' \0 ') نسخ الاحرف حتى نهاية السلسلة //
         { 
            Tab[i] = p[i]  ;
            i++ ;
         }
       Tab[i] = ' \0 ' ; اضافة الحرف في النهاية //
    }

 اجراء لعكس ترتيب العناصر في مصفوفة و نسخها الى مصفوفة اخرى باستخدام حلقة //
 void InverserTab( char Tab[] , char T[] , int m )
   {
           for ( int i = 0; i < m; i++)
               {
                 T[i] = Tab [m - 1 - i] ; نسخ الحروف بالعكس //
               }
        T[m] =  '\0' ; اضافة الحرف في النهاية //
    }

   اجراء لعرض محتوى مصفوفة الاحرف //
 void AfficherTab(char Tab[] )
    {
        printf("%s\n" , Tab) ;
    }

    int main()
{
    int n,m  ;  char * ch ;

     printf("veuillez saisir la taille maximale de la chaine :\n") ;
      scanf ("%d" ,&n) ; ادخال حجم السلسلة //

      ch  =  ChargerChaine(n)  ; قراءة السلسلة //

       m = Longueur (ch) ; حساب طول السلسلة //

       char Tab[ m + 1] , T[ m + 1] ;

       chargerTab ( ch , Tab ) ; نسخ السلسلة الى مصفوفة //

       AfficherTab ( Tab ) ; عرض السلسلة الاصلية //

      InverserTab ( Tab , T , m ); عكس السلسلة و نسخها الى مصفوفة جديدة //

       AfficherTab ( T ) ; عرض السلسلة المعكوسة //
       
       free (ch); تحرير الذاكرة //

    return 0 ;
}
