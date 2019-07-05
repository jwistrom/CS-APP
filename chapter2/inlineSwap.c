# include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main(){

    int a = 123;
    int b = 456;

    printf("%d\n", a);
    printf("%d\n\n", b);

    inplace_swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);
}
