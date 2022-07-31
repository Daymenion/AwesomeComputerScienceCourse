#include <stdio.h>
#include <stdbool.h>

void meow(int n);
int addition(int a, int b);

int main() {
    // int 32 bit   8 bit = 1 byte  4 byte  
    //int value = 5;       %d  %i     
    //int value = 0xFA12  %x %X  hexadecimal
    //int value = 010;    %o
    // char 8 bit  1 byte 
    //char value = 'a';      %c      %s string gosterme
    //float value = 0.2314; //32 bit                %f   %E  %e 
    //double value = 13213.2314512315; //64 bit
    //long value = 454434324213; //64 bit      %ld
    //short value =5  2 byte 16 bit
    //printf("girdinin degeri: %c\n", value);
    //bool value = true; 1 bit 
    //if(value)
        //printf("true");
    //unsigned int value = 2314513;
    //signed int value = -2314513;

    //  + - * / 
    // value += ahmet;   -= *=  /=

    // &&  ||  !  ==  !=  <  >  <=  >= 

    //  kosullar  if(....){ ...} else if(....) {.....} else{....}
    /*int value;
    scanf("%d",&value);

    switch(value) {
        case 1:
            ;
        case 2:
            ;

        case 3:
            ;
        default:
            ;
    }  */ 
    /*while(counter < 5) {
        counter++;
        ;
        ;
        ;

    }

    do {
            ;
    }while (// condition );
   /*
    for (int i=10;i<5;i--) {
            ;
    } */



    //meow(5);
    int x=  addition(5,2);
    printf("%i",x);
    return 0;
}

void meow(int n) {
    while(n>0) {
        printf("meow\n");
        n--;
    }

}

int addition(int a, int b) {
    return a + b;
}