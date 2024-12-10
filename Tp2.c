#include <stdio.h>
#include <stdlib.h>

// دالة لقراءة سلسلة من الأحرف
char *ChargerChaine(int N) {
    char *chaine = (char *)malloc((N + 1) * sizeof(char));  // تخصيص الذاكرة
    if (chaine == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return(1);  // الخروج في حال فشل التخصيص
    }
    printf("Veuillez entrer la chaine de caractères:\n");
    scanf("%s", chaine);  // قراءة السلسلة 
    return chaine;
}

// دالة لحساب طول السلسلة باستخدام حلقة while
int Longueur(char *ch) {
    int length = 0;
    while (ch[length] != '\0') {  // ما دام السلسلة لم تنتهي
        length++;  // زيادة الطول عند كل حرف
    }
    return length;
}

// إجراء لنسخ السلسلة من مؤشر إلى مصفوفة باستخدام حلقة
void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (p[i] != '\0') {  // نسخ الأحرف حتى نهاية السلسلة
        Tab[i] = p[i];
        i++;
    }
    Tab[i] = '\0';  // إضافة الحرف null في النهاية
}

// إجراء لعكس ترتيب العناصر في مصفوفة ونسخها إلى مصفوفة أخرى باستخدام حلقة
void InverserTab(char Tab[], char T[], int m) {
    int i;
    for (i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i];  // نسخ الحروف بالعكس
    }
    T[m] = '\0';  // إضافة الحرف null في النهاية
}

// إجراء لعرض محتوى مصفوفة الأحرف
void AfficherTab(char Tab[]) {
    printf("%s\n", Tab);
}

// البرنامج الرئيسي
int main() {
    int n, m;
    char *ch;

    printf("Veuillez saisir la taille maximale de la chaine:\n");
    scanf("%d", &n);  // إدخال حجم السلسلة

    ch = ChargerChaine(n);  // قراءة السلسلة
    m = Longueur(ch);  // حساب طول السلسلة

    char Tab[m + 1], T[m + 1];
    ChargerTab(ch, Tab);  // نسخ السلسلة إلى مصفوفة
    AfficherTab(Tab);  // عرض السلسلة الأصلية

    InverserTab(Tab, T, m);  // عكس السلسلة ونسخها إلى مصفوفة جديدة
    AfficherTab(T);  // عرض السلسلة المعكوسة

    free(ch);  // تحرير الذاكرة المخصصة

    return 0;
}
