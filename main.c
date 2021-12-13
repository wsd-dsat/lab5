#include <stdio.h>

int asdzxc(int n){

    if (n == 0)
       return 0;
    return (n % 10 + asdzxc(n / 10));

}

int main(){
    
    int num = 12368140;
    int result = asdzxc(num);
    printf("suma chysla %d = %d\n", num, result);
    return 0;

} 