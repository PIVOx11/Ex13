#include <unistd.h>


void ft_putchar(char c){
    write(1,&c,1);
}

void ft_print_numbers(){

}


void ft_print_comb(void){
    char a,b,c;

    a = '0';
    while(a <= '7'){
        b = a + 1;
        while(b <= '8'){
            c = b + 1;
            while(c <= '9'){
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                c++;

                if(a < '7'){
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
            b++;
        }
        a++;
    }


}

int main(void){
    ft_print_comb();
}

