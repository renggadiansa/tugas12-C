#include <stdio.h>
//1
int bilmaks(int bil1, int bil2);
//2
int permutasi(int n, int r);
//3
void increment(int *X);
//4
#include <math.h>

#define PI 3.142857f

float bc(float sudutBAC, float sisiAB);
float radian(float derajat);


int main() {
    //1
    int bil1,bil2,max;

    printf("Masukkan bilangan pertama = ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua = ");
    scanf("%d", &bil2);

    max = bilmaks(bil1,bil2);

    printf("Bilangan %d adalah bilangan yang lebih besar\n",max);

    //2
    int kombinasi(int n, int r);

    int n,r,resultPerm,resultKomb;

    printf("Masukkan nilai n = ");
    scanf("%d", &n);

    printf("Masukkan nilai r = ");
    scanf("%d", &r);

    resultPerm = permutasi(n,r);
    resultKomb = kombinasi(n,r);

    printf("Hasil permutasi antara %d dengan %d adalah %d\n",n,r,resultPerm);
    printf("Hasil kombinasi antara %d dengan %d adalah %d\n",n,r,resultKomb);

    //3
    int bilangan, bilangan1;
    printf("Masukkan bilangan bulat: ");
    scanf("%d",&bilangan);

    printf("Masukkan bilangan bulat: ");
    scanf("%d",&bilangan1);

    printf("Nilai awal = %d\n",bilangan);
    printf("Nilai awal = %d\n",bilangan1);


    increment(&bilangan);
    increment(&bilangan1);

    printf("Nilai akhir = %d\n",bilangan);
    printf("Nilai akhir = %d\n",bilangan1);


    //4
    float sudutBAC, sisiAB, sisiBC;

    printf("Masukkan sudut BAC : ");
    scanf("%f", &sudutBAC);

    printf("Masukkan panjang sisi AB : ");
    scanf("%f", &sisiAB);

    sisiBC = bc(sudutBAC, sisiAB);

    printf("Panjang sisi BC adalah %.2f meter\n", sisiBC);

    return 0;
}

//1
int bilmaks(int input1,int input2) {
    if(input1 < input2)
        return input2;
    else
        return input1;
}

//2
int faktorial(int bil) {
    int i,sum = 1;
    for(i=bil;i>0;i--)
        sum = sum * i;
    return sum;
}

int permutasi(int fn_n,int fn_r) {
    return faktorial(fn_n) / faktorial(fn_n-fn_r);
}

int kombinasi(int fn_n,int fn_r) {
    return faktorial(fn_n) / ( faktorial(fn_r) * faktorial(fn_n-fn_r) );
}

//3
void increment(int *X) {
    (*X)+=2;
    printf("Nilai di dalam fungsi = %d \n",*X);

}

//4
float bc(float sudutBAC, float sisiAB) {
    return tan(radian(sudutBAC)) * sisiAB;
}

float radian(float derajat) {
    return (derajat / 180.0f) * PI;
}


