#include<stdio.h>

int main(){
    int a,b,c;

    printf("3�̐����̍ő�l�����߂܂��B\n");
    printf("a�̒l�F");  scanf("%d" ,&a);
    printf("b�̒l�F");  scanf("%d" ,&b);
    printf("c�̒l�F");  scanf("%d" ,&c);

    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    printf("�ő�l��%d�ł��B\n" ,max);

    return 0;
}
