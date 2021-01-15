#include <stdio.h> // Programda kullandıgımız fonksiyonların işlemsi için kütüphane ekleriz .

int main(void) { //Ana Fonk siyonlarımı bukısımın altına yazıyoruz .

int sıcaklık ; //sıcaklık kavramını hafızaya aldık.

printf("\n  LÜTFEN BULUNDUGUNUZ BÖLGENİN HAVA SICAKLIĞINI GİRİNİZ -----> ");// kişinin bulundugu ortamın sıcaklıgını girmesi için printf komutu ile keran yazı yazdırdık.

scanf("%d",&sıcaklık); //girilen sıcaklık degerini sıcaklık olarak tanımladık.

if (sıcaklık <=19 ) 
printf("\nISITICI ÇALIŞTIRILDI");//if komutunu kullanarak sıcaklık 19a eşit yada küçük ise printf komutu ile Isıtıcı çalıştırıldı yazdırdık.

else{ //else kullanmamızın sebebi bin önceki if komutunda degerler farklı olunca else komutuna geçiş yapar
  if (sıcaklık >= 20 && sıcaklık <=25 )
  printf("\nORTAM SICAKLIGI MUTEDİL");//if komutunu kullanarak sıcaklık 20den büyk ve 25 ten küçük ise printf komutu ile ORTAM SICAKLIGI MUTEDİL yazdırdık

  else{
    if (sıcaklık >= 26 )
printf("\n Soğuğtucu çalıştırıldı");//if komutunu kullanarak sıcaklık 26ya eşit yada büyük ise printf komutu ile Isıtıcı çalıştırıldı yazdırdık.
  }
}
  return 0; //bu kısmı yazmamızın nedeni ise sisteme programın bittigini anlatmak için yazılır.
}
