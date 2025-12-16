#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aracTuru, tabanUcret , kiralamaSuresi;
    float toplamKm, ekUcretOrani, toplamUcret, araToplam;

    printf("Arac turunu seciniz.\n");
    printf("1-Ekonomi 800 TL/gun\n");
    printf("2-Sedan 1200 TL/gun\n");
    printf("3-SUV 1800 TL/gun\n");

    scanf("%d",&aracTuru);

    switch(aracTuru){
    case 1: printf("Seciminiz: %d-Ekonomi\n\n",aracTuru);
    tabanUcret=800;
    break;
    case 2: printf("Seciminiz: %d-Sedan\n\n",aracTuru);
    tabanUcret=1200;
    break;
    case 3: printf("Seciminiz: %d-SUV\n\n",aracTuru);
    tabanUcret=1800;
    break;
    default: printf("Gecerli secim yapin!\n\n");
    return 0;
    }

    printf("Kiralama suresi girin.\n");
    scanf("%d",&kiralamaSuresi);
    if(kiralamaSuresi<0){
        printf("Gecerli deger girin!");
        return 0;
    }
    printf("Kiralama suresi: %d gun\n\n",kiralamaSuresi);

    printf("Toplam kilometre miktarini girin.\n");
    scanf("%f",&toplamKm);
    if(toplamKm<0){
        printf("Gecerli deger girin!");
        return 0;
    }
    printf("Toplam kilometre: %f km\n\n",toplamKm);

    araToplam=kiralamaSuresi*tabanUcret;
    printf("Ara toplam: %f TL\n",araToplam);

    if(toplamKm<=1000){
        ekUcretOrani=0;
    }else if(toplamKm<=2000){
        ekUcretOrani=10;
    }else{
        ekUcretOrani=20;
    }
    printf("Ek ucret orani: %f%%\n",ekUcretOrani);

    toplamUcret=araToplam*(1+ekUcretOrani/100);
    printf("Toplam ucret: %f TL\n\n",toplamUcret);




    return 0;
}
