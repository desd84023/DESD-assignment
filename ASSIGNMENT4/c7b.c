#include <stdio.h>
int a=5, b=8,temp;
int solve(int *a, int *b){
    int temp = *a + *b;
    *b = (*a) * (*b);
    *a = temp;
}
int main(){
    solve(&a, &b);
    printf("a + b = %d and a * b = %d\n", a, b);
}
