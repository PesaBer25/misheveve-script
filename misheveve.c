#include <stdio.h>
#include <windows.h>

int main(void){
    printf("<----------------------------------MISHEVEVE SCRIPT--------------------------------------->\n");
   char *lines[] = {"Kijana akauliza mama:","\"Umepika mboka gani?\"","Mama akasema:","\"Leo nimeunda misheveve\"","Akasema", "\"hapana! sikutaka hiso\"",
                    "\"Nilikuwa nataka SARATI!\"","Akaanza kwa kumzaba mama makofi Mingi","Msee akaamka kwa kitanda akasema",
                    "\"Hapana mwanamke wangu hawesi ku.. kunyengwa hifyo!\"","Akaanza kutafuna msee vidole!",
                    "Anatafuna mzee vidole ni kama anatafuna OMENA!","Kumbe anafanya hesabu ya minus kwa uhai wa msee"};
    for(int i = 0; i < 13; i++ ){
        int n = 0;
        while(1){
            char c = lines[i][n];
            n++;
            if(c != '\0'){
                printf("%c",c);
                Sleep(100);
            }else{
                printf("\n");
                if(i == 0 || i == 2 || i == 4 || i == 5 || i == 8){
                    printf("\t");
                }
                Sleep(400);
                break;
            }
            
        }
    };
    printf("\n_________________________________AUTHOR: Mark Emmanuel_____________________________________");
    return 0;
}