#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz .
#include <math.h>

int main(void) { //Ana Fonk siyonlarımı bukısımın altına yazıyoruz .

int a,b; //a ve b harflerini hafızaya aldık (a = sayı  b = sayının karesi).

for(a=1; a<51; a++){ // a = 1den başlayıp a = 50 ye kadar 1er 1er arttır.
  b=pow(a,2); // pow fonksiyonu ile sayının karesini aldırdık.
  printf("\na = %d   a ^ 2 = %d", a,b); // sayıyı ve sayının karesini ekrana yazdırdık.
}

  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
