#include <stdio.h>
#include <stdlib.h>

// تعريف العقدة
typedef struct element {
    int val;
    struct element *suivant;
} element;

// إنشاء قائمة فارغة
element* creerListe() {
    return NULL;
}

// تحويل المصفوفة الى قائمة
element* chargerListe(int Tab[], int taille) {
    element *liste = NULL, *nouveau, *temp;
    for (int i = 0; i < taille; i++) {
        nouveau = (element*)malloc(sizeof(element));
        nouveau->val = Tab[i];
        nouveau->suivant = NULL;

        if (liste == NULL) {
            liste = nouveau;
        } else {
            temp = liste;
            while (temp->suivant != NULL)
                temp = temp->suivant;
            temp->suivant = nouveau;
        }
    }
    return liste;
}

// عرض القائمة
void afficherListe(element *liste) {
    if (liste == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    while (liste != NULL) {
        printf("%d -> ", liste->val);
        liste = liste->suivant;
    }
    printf("NULL\n");
}

// حذف آخر عنصر
element* supprimerEnFin(element *liste) {
    if (liste == NULL || liste->suivant == NULL) {
        free(liste);
        return NULL;
    }
    element *temp = liste;
    while (temp->suivant->suivant != NULL)
        temp = temp->suivant;

    free(temp->suivant);
    temp->suivant = NULL;
    return liste;
}

// إضافة عنصر في البداية
element* ajouterEnDebut(element *liste, int val) {
    element *nouveau = (element*)malloc(sizeof(element));
    nouveau->val = val;
    nouveau->suivant = liste;
    return nouveau;
}

// تفريغ القائمة
void viderListe(element *liste) {
    element *temp;
    while (liste != NULL) {
        temp = liste;
        liste = liste->suivant;
        free(temp);
    }
    printf("La liste est vide.\n");
}

// البرنامج الرئيسي
int main() {
    int Tab[10] = {1, 3, 5, 7, 8, 9, 10, 11, 13, 20};

    element *L1 = creerListe();
    L1 = chargerListe(Tab, 10);

    afficherListe(L1);

    L1 = supprimerEnFin(L1);
    afficherListe(L1);

    element *L2 = ajouterEnDebut(L1, 40);
    afficherListe(L2);

    viderListe(L2);
    afficherListe(L2);

    return 0;
}

