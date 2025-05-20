#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}


void ft_putnbr(int n) {
    if (n < 0) {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}


void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod =  a % b;
}



int main(){
    int x, y, div, mod;

    x = 33; 
    y = 10;
   
    ft_div_mod(x,y,&div, &mod);

    ft_putnbr(div);
    ft_putchar('\n');
    ft_putnbr(mod);


}

