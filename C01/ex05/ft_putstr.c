#include <unistd.h>



void ft_putstr(char *str){
  int i = 0;
  while(str[i] != 0){
    write(1,&str[i],1);
    i++;
  }


}

int main(){
    char *str2;

    str2 = "1337 is cool";

    ft_putstr(str2);
    
}