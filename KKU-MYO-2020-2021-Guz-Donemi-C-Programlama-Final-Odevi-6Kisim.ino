#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz 

int main(void) { //Ana Fonk siyonlarımı bukısımın altına yazıyoruz .

int Parola;//Parola Degişkeninin tanımlıyoruz
BasaDön: //başa dön etiketini kullanıyoruz aşagı kısımda goto komutunu kullandıgımız için.
  printf("\n!! LÜTFEN BİR PAROLA GİRİNİZ !!---> "); //kişiden parolasını girmesini istiyoruz.
  scanf("%d",&Parola); //degişkenimizi parola olarak işlemsi ni yazıyoruz.
  if( Parola == PAROLANIZI BURAYA YAZINIZ ) //if komutu ile parola degişkenimiz parolamız ile aynımı kontrol ediyoruz . 
  printf("\nTebrikler Parolanız Dogrudur"); // parolanın dogru girildigini ekrana yazdırıyoruz.


   else{ //if komutu kabul retmez ise else komutuna atlar.
     if( Parola != PAROLANIZI BURAYA YAZINIZ ) //parola degişkenimiz parolamıza eşit degil ise diye bir komut yazıyoruz .
     printf("\n     !!! PAROLANIZ YANLIŞTIR !!!\n     !!! TEKRARDENEYİNİZ !!!\n\n"); // print f komutu ile parolamız yanlıştır diye ekrana yazı yazdırıyoruz.
     goto BasaDön; //ekrana yanlıştır yazısını yazdırdıktan sonra tekrar parolamızı sorgumasaı için basadön etiketine gönderiyoruz.
   }
  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
