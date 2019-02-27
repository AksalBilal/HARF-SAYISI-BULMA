#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
   int main()
{
setlocale(LC_ALL, "Turkish");
typedef struct
{
   int harf;
   int adet;
}  struct_harf;
   struct_harf dizi[29];
  dizi[0].harf='A';dizi[0].adet=0;
  dizi[1].harf='B';dizi[1].adet=0;
  dizi[2].harf='C';dizi[2].adet=0;
  dizi[3].harf='Ç';dizi[3].adet=0;
  dizi[4].harf='D';dizi[4].adet=0;
  dizi[5].harf='E';dizi[5].adet=0;
  dizi[6].harf='F';dizi[6].adet=0;
  dizi[7].harf='G';dizi[7].adet=0;
  dizi[8].harf='Ð';dizi[8].adet=0;
  dizi[9].harf='H';dizi[9].adet=0;
dizi[10].harf='I';dizi[10].adet=0;
dizi[11].harf='Ý';dizi[11].adet=0;
dizi[12].harf='J';dizi[12].adet=0;
dizi[13].harf='K';dizi[13].adet=0;
dizi[14].harf='L';dizi[14].adet=0;
dizi[15].harf='M';dizi[15].adet=0;
dizi[16].harf='N';dizi[16].adet=0;
dizi[17].harf='O';dizi[17].adet=0;
dizi[18].harf='Ö';dizi[18].adet=0;
dizi[19].harf='P';dizi[19].adet=0;
dizi[20].harf='R';dizi[20].adet=0;
dizi[21].harf='S';dizi[21].adet=0;
dizi[22].harf='Þ';dizi[22].adet=0;
dizi[23].harf='T';dizi[23].adet=0;
dizi[24].harf='U';dizi[24].adet=0;
dizi[25].harf='Ü';dizi[25].adet=0;
dizi[26].harf='V';dizi[26].adet=0;
dizi[27].harf='Y';dizi[27].adet=0;
dizi[28].harf='Z';dizi[28].adet=0;
int a=0,b=0;
FILE *fp;
char ch,x;
int i,harfsayi=0;
fp=fopen("ödev.txt","r");
while (!feof(fp))
    {
    ch=fgetc(fp);
    if(ch=='i')
    {x='Ý';}
    else if (ch=='ý')
        {x='I';}
    else      {
          x=toupper(ch);      }
    for (i=0;i<29;i++)        {
        if(x==dizi[i].harf)
        { dizi[i].adet++;}    }    }
    for(i=0;i<29;i++)    {
    harfsayi+=dizi[i].adet;    }
printf("Toplam harf sayisi=%d\n",harfsayi);
     int c,j,gecici,temp;
 for(c=0;c<29;c++)    {
        for(j=0;j<29;j++)        {
            if(dizi[j].adet<dizi[j+1].adet)            {
                gecici=dizi[j+1].adet;
                dizi[j+1].adet=dizi[j].adet;
                dizi[j].adet=gecici;
                temp=dizi[j+1].harf;
                dizi[j+1].harf=dizi[j].harf;
                dizi[j].harf=temp;    }    }    }
    for(i=0;i<29;i++)    {
        printf("%c -> %d\n",dizi[i].harf,dizi[i].adet);    }
fclose(fp);
    return 0;}
