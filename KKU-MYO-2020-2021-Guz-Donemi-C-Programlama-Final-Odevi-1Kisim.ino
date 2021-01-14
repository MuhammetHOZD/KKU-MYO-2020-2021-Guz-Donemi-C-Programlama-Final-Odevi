#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz

int main(void){
  printf("\n\n\n\n                       **** HOŞGELDİNİZ ****\n\n"); //Giriş mesajını yapıyoruz  ( \n yazmamızın nedeni ise bir alt satıra yazdır yada geç anlamındadır ).

  printf("\n**** ÖĞRENCİ BİLGİLERİ ****\n\n"
    "AD: ADINIZI YAZINIZ\n"
    "SOYADI: SOYADINIZI YAZINIZ\n"
    "OKUL NO : OKUL NUMARANIZI YAZINIZ\n"
    "OKULU: KKÜ\n"
    "BÖLÜMÜ: ELEKTRONİK TEKNOLOJİSİ\n"
    "YAŞADIGI ŞEHİR: YAŞADIGIN ŞEHİRİ YAZINIZ\n"
    "YAŞI: YAŞINIZI YAZINIZ\n"
    "DOĞGUM TARİHİ: DOGUM TARİHİNİZİ YAZINIZ\n"); // ögrenci bilgilerimizi ekran yazdırdık 

  printf("\n                  DEVAM ETMEK İÇİN ENTER tuşuna basınız: "); //getchar kullana bilmek için bir uyarı mesajı yazdırdık ekrana.

 getchar(); // getchar komutunu kullandık (getchar() fonksiyonunu kullanarak klavyeden karakter girmemiz gerekirken, karakter girmek yerine ENTER tuşuna basarsak, getchar() fonksiyonu \n karakterini geri verir).

  printf("\nMerhabalar ben ADINIZI YAZINIZ\n" 
         "bu dersimizin adı C programlama \n"
         "bu kodlamada ise hocamızın dedigi şekilde kodlarımızı yazdık\n"
         "Final ödevi" );// getchar komutunu kullandıktan sonra hocamızın dedigi gibi ekran nitelik yazdırdık

  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
