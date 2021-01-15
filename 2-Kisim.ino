#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz .
#include <math.h>//Programlda Pow fonksiyonunun kullana bilmek için math

int a,b,r ; //bu kısmda a,b ve r harflerini hafızaya alıyoruz .

int main(void){ //Ana fonk siyonlarımızı yazdıgımız kısım 
 printf("\nBirinci Sayınızı Giriniz------> "); //ekrana kişinin birinci sayıyı girmesi için yazı gönderdik.
 scanf("%d",&a);//ekran girilen sayıyı degişken olarak tanımladık o degişkenide a rakamı olarak hafızaya aldık.

 printf("\nİkinci Sayınızı Giriniz------> ");//ekrana kişinin ikinci sayıyı girmesi için yazı gönderdik.
 scanf("%d",&b);//ekran girilen sayıyı degişken olarak tanımladık o degişkenide b rakamı olarak hafızaya aldık.

 r=pow(a,b); //r harfimizi pow fonksiyonu olarak tanımladık (C'de üs almak için 'pow' fonksiyonu kullanılır).
 
printf("\n Sayıların Toplamı  =  %d + %d = %d",a,b,a+b); //printf komutu ile sayıların toplamını yazdırdık .
printf("\n Sayıların Farkı    =  %d - %d = %d",a,b,a-b); //printf komutu ile sayıların Farkını yazdırdık .
printf("\n Sayıların Çarpımı  =  %d * %d = %d",a,b,a*b); //printf komutu ile sayıların çarpımını yazdırdık .
printf("\n Sayıların Bölümü   =  %d / %d = %d",a,b,a/b); //printf komutu ile sayıların Bölümünü yazdırdık .
printf("\n    a üssü b        =  %d ^ %d = %d",a,b,r);   //printf komutu ile sayıların a üssüb sini yazdırdık .

  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
