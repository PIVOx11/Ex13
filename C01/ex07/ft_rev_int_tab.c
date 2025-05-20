#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putnbr(int n) {
    char c;
    
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
        ft_putnbr(n / 10);
    
   ft_putchar(n % 10 + '0');
}

void ft_rev_int_tab(int *tab, int size){
    int temp;
    int first = 0;
    int last = size - 1;
    
    while(first < last){
        temp = tab[first];
        tab[first] = tab[last];
        tab[last] = temp;

        first++;
        last--;
        
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    ft_rev_int_tab(arr , size);

    while(i < size){
        ft_putnbr(arr[i]);
        ft_putchar(' ');
        i++;

    }
    ft_putchar('\n');
    ft_putnbr(size);
}
