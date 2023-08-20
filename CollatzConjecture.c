#include <stdio.h>


//by putting the asterisk back in our pointer value and using it's appropriate referral type we can get the variable inside it,
//potentially reducing file size. C is extremely proficient at just that!

int main(){

    int x;

    printf("Enter a number that isn't too small: \n");
    scanf("%i", &x);
    printf("\n\n");

    int c = 0;
    const int xOrigin = x;

    do{
        if(x % 2 == 0){
            x = (x / 2);
            c++;
            printf("%i\n", x);
        } else {
            x = (x * 3) + 1;
            c++;
            printf("%i\n", x);
        }
    } while(x != 1);

    printf("\n\n%i took %i steps to go back to one\n\n", xOrigin, c);
    return 0;
}

