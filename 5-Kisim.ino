#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz .

int fcnKup(int a);//fcnKup fonksiyonunun tanimladık 

int main(void) { //Ana Fonk siyonlarımı bukısımın altına yazıyoruz .

 int a; //Main fonksiyonunun içinde ayı tanımladık.

printf("\nKüpü alınacak sayıyı giriniz ----> ");//küpü alınacak sayıyı girmek için printf komutu kullandık 
scanf("%d",&a); // küpü alınan sayıyı a olarak tanımladık
  printf("\n%d Sayısının Küpü = %d", a, fcnKup(a)); //alınan sayısı ve küpünü printf komutu ile yazdırdık

  return 0; 
}

int fcnKup(int a) //fonksiyonun yapacagı işi yazdık 
{
  return a*a*a; //fonksiyonun küp yapması için 3 tane a yı carptık.
}
