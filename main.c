#include <stdio.h>
#include <math.h>



int main(){
    /*
    if (<>){
        // TRUE
    }else{
        // FALSE
    }
    */
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a,&b,&c);
    //int D = ; 
    int x1 = -b/2*a + pow(b*b - 4*a*c,0.5)/2*a;
    int x2 = -b/2*a - pow(b*b - 4*a*c,0.5)/2*a;
    printf("Введите коффиценты a b c\n");
    printf("%d %d",x1,x2);
    }



