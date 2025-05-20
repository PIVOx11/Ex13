#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}


void ft_putnbr(int n){
    if(n < 0){
        ft_putchar('-');
    }
    if(n >= 10){
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');

}


void ft_ultimate_div_mod(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;


}


int main(){
    int x , y;
    x = 10;
    y = 2;

    ft_ultimate_div_mod(&x , & y);

    ft_putnbr(x);
    ft_putchar('\n');
    ft_putnbr(y);
}