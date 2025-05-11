#include <unistd.h>


void ft_putchar(char c){
    write(1,&c,1);

}


void ft_print_comb2(void){
    char i,j;

    for(i = 0; i <= 98; i++){
        for(j = i + 1; j <= 99; j++){

            ft_putchar('0' + i/10);
            ft_putchar('0' + i%10);
            ft_putchar(' ');
            ft_putchar('0' + j/10);
            ft_putchar('0' + j%10);
            if(i <= 98){
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }

}

int main(void){

    ft_print_comb2();
}
