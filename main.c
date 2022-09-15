#include <stdio.h>
#include <stdbool.h>
//Ohjelma kysyy käyttäjältä salasanan, jos vastaus ei ole 17
//se kysytään uudestaan. Jos vastaus on oikein ohjelma onnittelee

int password=17;
int passwordInput;

int main()
{
    while(password != passwordInput){
        printf("Salasana: ");
        scanf("%d",&passwordInput);
        printf("\n");
    }
    printf("Onneksi olkoon! Arvasit salasanan.\n");
    return 0;
}
