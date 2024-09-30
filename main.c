#include <stdio.h>

int main(void) {
    int g1,m1,a1,g2,m2,a2,diff;
    printf("inserisci la prima data");
    scanf("%d %d %d",&g1,&m1,&a1);
    printf("inserisci la seconda data");
    scanf("%d %d %d",&g2, &m2, &a2);
    diff=(g1-g2) + (m1-m2)*30 + (a1-a2)*360;
    if(diff<0){
        printf("la seconda data e' la piu' recente %d %d %d", g2,m2,a2);
    } else if(diff>0) {
        printf("la prima data e' la piu' recente %d %d %d", g1,m1,a1);
    }else if (diff==0){
        printf("le due date sono uguali");
    }
}