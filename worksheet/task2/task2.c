/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Kieran Cahill
 * ID: 201944641
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];
    
    printf("Enter a hexadecimal:");

    scanf("%8s", hex); //read up to 8 characters

    int length = strlen(hex);

    for (int i = 0; i < length; i++) {
        char c = hex[i];
        int value;

        // heck what kin of character it is
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            //invalid char
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

         
        decimal = decimal * 16 + value;
    }

 
    printf("decimal:%ld\n", decimal);
    
    return 0;
}