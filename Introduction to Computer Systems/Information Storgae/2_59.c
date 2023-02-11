/*
Write a C expression that will yield a word consisting of the least significant byte of x 
and the remaining bytes of y. For operands x = 0x89ABCDEF and y = 0x76543210, this would
give 0x765432EF.
*/

#include <stdio.h>

typedef unsigned char *byte_poninter;

//x : 89ABCDEF -> start : EF CD AB 89
void show_least_bytes(byte_poninter start){
    for(int i =0; i<1; i++){
        printf("%02X", start[i]);
    }
    printf("\n");
}

//y : 76543210 -> start : 10 23 45 67
// so it has to be flipped in order to print the same way in the problem
void show_most_bytes(byte_poninter start){
    size_t len = sizeof(int);
    for(int i =len-1; i>0; i--) {
        printf("%02X", start[i]);
    }
}


int main(){
    int x, y;

    printf("hexadecimal x: ");
    scanf("%x", &x);
    printf("hexadecimal y: ");
    scanf("%x", &y);

    printf("0x");
    show_most_bytes((byte_poninter) &y);
    show_least_bytes((byte_poninter) &x);

}
