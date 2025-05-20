#include <unistd.h>


void ft_putchar(char c){
    write(1,&c,1);
}


void ft_putnbr(int i){
    char c ;

    if(i >= 10){
        ft_putnbr(i / 10);
    }

    c = (i % 10) + '0';

    ft_putchar(c);

}

int ft_strlen(char *str){
  int i = 0;
  while(str[i] != ('\0')){
    i++;
  }
 
  return i ;
}

int main(){
    char *str2= "1337 is cool";

    int count = ft_strlen(str2);

    ft_putnbr(count);
    
}