#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==========================================\n");
    printf("        --PROGRAM CETAK NAMA--\n");
    printf("==========================================\n");
//    printf("NAMA  : \n");
//    printf("KELAS : IT A\n");
//    printf("NRP   : \n");
    
    printf("=====soal pendahuluan no-4=====\n");
    int nilai, i, ulangan, minimal=100, maksimal=0;
    float rata=0;

    printf("Ada berapa ulangan : ");
    scanf("%d", &ulangan);

    for(i=1; i<=ulangan; i++)
    {
        printf("Masukkan nilai ulangan ke-%d : ", i);
        scanf("%d", &nilai);
        if(nilai > maksimal)
            maksimal=nilai;
        else if(minimal > nilai)
            minimal=nilai;
        rata+=nilai;
    }
    printf("\nNilai maksimal : %d\n", maksimal);
    printf("Nilai minimal : %d\n", minimal);
    printf("Nilai rata-rata : %.2f\n", rata/ulangan);

    return 0;
}
