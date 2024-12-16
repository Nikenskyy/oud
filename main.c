#include <stdio.h>
int policz(int a,int b) {
    return a+b;
}
int odejmij(int a,int b) {
    return a-b;
}
int mnoz(int a,int b) {
    return a*b;
}
int main(void)
{
    printf("Hello, World!\n");
    printf("peirwszy branch 2+3 = %d", policz(2,3));
    printf("commit2 2-3 = %d", odejmij(2,3));
    printf("mnoz(2,3) = %d", mnoz(2,3));
    return 0;

}
