#include <stdio.h>
int main(){
    int a, b, c;
    printf("Birinchi sonni kiriting:  ");
    scanf("%d", &a);
    printf("Ikkinchi sonni kiriting:  ");
    scanf("%d", &b);
    do{
        printf("%d\n", b);
        b--;
    }
    while(b >= a);




    return 0;
}
