#include <stdio.h>
#include <stdlib.h>
int main(){
    int h=0,m=0,s=0;
    system("cls");
    printf("Enter the time format in HH:MM;SS\n");
    scanf("%d%d%d",&h,&m,&s);
    start:
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("cls");
                printf("\n\n\n\t\t\t\t%d:%d:%d",h,m,s);
                if(h<12){
                    printf("\t\tAM");

                }
                else{
                    printf("\t\tPM");
                }
                printf("\n\n\n\t\t\t\tFriday 26 Nov");
                for(long int i=0;i<3619999;i++){
                    i++;
                    i--;
                }
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
}

