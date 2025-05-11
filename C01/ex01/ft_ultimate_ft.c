#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;   
}

int main(){
    
    int a ;
    int *pt1 = &a;
    int **pt2 = &pt1;
    int ***pt3 = &pt2;
    int ****pt4 = &pt3;
    int *****pt5 = &pt4;
    int ******pt6 = &pt5;
    int *******pt7 = &pt6;
    int ********pt8 = &pt7;
    int *********pt9 = &pt8;
    
    ft_ultimate_ft(pt9);
    printf("%d",a);

}


