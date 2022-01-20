#include <stdio.h>
#include <conio.h>

void shift(char *kelime, int anahtar){
     char c = kelime[0];
     int i = 0;
     while(c!='\0'){
       if(c>=65&&c<=90){
                        kelime[i]=(kelime[i]+anahtar);
                        if(kelime[i]>90)
                                       kelime[i]= (kelime[i]%90)+65;
       }
       if(c>=97&&c<=122){
                        kelime[i]=(kelime[i]+anahtar);
                        if(kelime[i]>122)
                                       kelime[i]= (kelime[i]%122)+97;
       }
       i++;
       c=kelime[i];
     }
}
int main(){
     char kelime[100];
     int key;
     
     printf("sifrelemek istediginiz metni giriniz [bosluk koymayin!]: ");
     scanf("%s",&kelime);
     printf("anahtar giriniz [0-26 arasinda deger girin]: ");
     scanf("%d",&key);
     
     shift(kelime,key);
     
     printf("sifreli mesaj: %s ",kelime);
     getch();
}
