#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3, sayi4, sayi5;
    int en_kucuk, en_buyuk;

    printf("Lutfen bes farkli pozitif tam sayi giriniz:\n");
    scanf("%d %d %d %d %d", &sayi1, &sayi2, &sayi3, &sayi4, &sayi5);

    en_kucuk = sayi1;
    en_buyuk = sayi1;

    if (sayi2 < en_kucuk) {
        en_kucuk = sayi2;
    }
    if (sayi3 < en_kucuk) {
        en_kucuk = sayi3;
    }
    if (sayi4 < en_kucuk) {
        en_kucuk = sayi4;
    }
    if (sayi5 < en_kucuk) {
        en_kucuk = sayi5;
    }

    if (sayi2 > en_buyuk) {
        en_buyuk = sayi2;
    }
    if (sayi3 > en_buyuk) {
        en_buyuk = sayi3;
    }
    if (sayi4 > en_buyuk) {
        en_buyuk = sayi4;
    }
    if (sayi5 > en_buyuk) {
        en_buyuk = sayi5;
    }

    printf("En kucuk sayi: %d\n", en_kucuk);
    printf("En buyuk sayi: %d\n", en_buyuk);

    return 0;
}
