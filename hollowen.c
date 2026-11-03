#include <stdio.h>
int main() {
    int number;
    printf("Enter any number");
    scanf("%d",&number);
    if(number % 2 == 0){
        print("%dEven Number!", number);
    } else {
       print("%d odd number!",number);
    }
    return 0;
}