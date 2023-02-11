/*
2.57 Writen procedures show_short, show_long, and show_double that print the byte representations of C objects
of types short, long, and double, respectively. Try thses out on several machines.
*/


#include <stdio.h>


typedef unsigned char *byte_poninter;

void show_bytes(byte_poninter start, size_t len){
    int i;
    for(i =0; i<len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_short(short x){
    show_bytes((byte_poninter) &x, sizeof(short ));
}

void show_long(long x){
    show_bytes((byte_poninter) &x, sizeof(long ) );
}

void show_doulbe(double x){
    show_bytes((byte_poninter) &x, sizeof(double ) );
}

int main(){
    short s;
    long l;
    double d;
    printf("short : ");
    scanf("%hd", &s);

    printf("long : ");
    scanf("%ld", &l);

    printf("double : ");
    scanf("%lf", &d);

    show_short(s);
    show_long(l);
    show_doulbe(d);
}