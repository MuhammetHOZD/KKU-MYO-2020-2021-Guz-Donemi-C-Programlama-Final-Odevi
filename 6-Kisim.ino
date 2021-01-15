#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz 

int main(void) { //Ana Fonk siyonlarımı bukısımın altına yazıyoruz .

int Parola;//Parola Degişkeninin tanımlıyoruz
parolasorgula: //başa dön etiketini kullanıyoruz aşagı kısımda goto komutunu kullandıgımız için.
  printf("\n!! LÜTFEN BİR PAROLA GİRİNİZ !!---> "); //kişiden parolasını girmesini istiyoruz.
  scanf("%d",&Parola); //degişkenimizi parola olarak işlemsi ni yazıyoruz.
  if( Parola == 200706014 ) //if komutu ile parola degişkenimiz parolamız ile aynımı kontrol ediyoruz . 
  printf("\nTebrikler Parolanız Dogrudur"); // parolanın dogru girildigini ekrana yazdırıyoruz.


   else{ //if komutu kabul retmez ise else komutuna atlar.
     printf("\n     !!! PAROLANIZ YANLIŞTIR !!!\n     !!! TEKRARDENEYİNİZ !!!\n\n"); // print f komutu ile parolamız yanlıştır diye ekrana yazı yazdırıyoruz.
     goto parolasorgula; //ekrana yanlıştır yazısını yazdırdıktan sonra tekrar parolamızı sorgumasaı için basadön etiketine gönderiyoruz.
   }
  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
