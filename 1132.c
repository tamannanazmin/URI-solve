#include<stdio.h>
int main(){
    int a, b, i;
    scanf("%d%d", &a,&b);
    if (a > b) {
        int s = 0;
        for (i = b; i <= a; i++) {
            if (i % 13 != 0) {
                s += i;
            }
        }
        printf("%d\n", s);
    }else if(a < b){
        int s1 = 0;
        for (i = a; i <= b; i++) {
            if (i % 13 != 0) {
                s1 +=i;
            }
        }

        printf("%d\n", s1);
    }

}
