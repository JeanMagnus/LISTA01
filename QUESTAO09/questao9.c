#include <stdio.h>

int main(int argc, char const *argv[])
{
   /*
        Para x declarado como char:
            x+1 = 4093, x+2 = 4094 e x+3 = 4095 (Para cada elemento, o endereço avançará 1 byte)
        Para x declarado como int
            x+1 = 4094, x+2 = 4096 e x+3 = 4098 (Para cada elemento, o endereço avançará 2 byte)
        Para x declarado como float:
            x+1 = 4096, x+2 = 4100 e x+3 = 4104 (Para cada elemento, o endereço avançará 4 byte)
        Para x declarado como double:
            x+1 = 4100, x+2 = 4108 e x+3 = 4116 (Para cada elemento, o endereço avançará 8 byte)
   */

    return 0;
}