#include <stdio.h>
#include <stdlib.h>

int main()
{
    // KAMUS
    char FILE_NAME[100]="";
    char CC;
    FILE *myfile;
    int retval;

    // ALGORITMA
    printf("\n\nMasukkan nama file: \n");
    scanf("%s", FILE_NAME);
    myfile = fopen(FILE_NAME, "r");
    retval = fscanf(myfile, "%x", &CC);
    if (retval = "FFD8") {
        printf("Ini File JPG");
    }
    else if (retval = "25504446"){
        printf("Ini File PDF");
    }
    else{
        printf("File Tidak Diketahui");
    }
    return 0;
}
