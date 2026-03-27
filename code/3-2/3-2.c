#include <stdio.h>

void swap_endian(int *x) {
    char* addr = (char*)x;
    int temp0 = *addr ;
    int temp1 = *(addr+1);
    int temp2 = *(addr+2);
    int temp3 = *(addr+3);
    *addr = temp3;
    *(addr+1) = temp2;
    *(addr+2) = temp1;
    *(addr+3) = temp0;
    return;
}
int main() {
    int x = 0x12345678;

    printf("%x\n",x);
    swap_endian(&x);
    printf("%x\n",x);
    return 0;

}