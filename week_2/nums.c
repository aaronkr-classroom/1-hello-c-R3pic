#include <stdio.h>
#include <limits.h> // 최대 값/최소 값 볼때 사용하는 라이브러리

int main() {
    // char                 1바이트 (문자)
    char ch = 'A';
    printf("char:\n");
    printf("Value: %c\n", ch);
    printf("Max: %d\n", CHAR_MAX);
    printf("Min: %d\n", CHAR_MIN);
    
    // signed short int     2바이트 (정수)
    signed short int sshort = 1234;
    printf("\nsigned short int:\n");
    printf("Value: %d\n", sshort);
    printf("Max: %d\n", SHRT_MAX);
    printf("Min: %d\n", SHRT_MIN);

    // unsigned short int   2바이트 (정수)
    unsigned short int ushort = 1234U;
    printf("\nunsigned short int:\n");
    printf("Value: %d\n", ushort);
    printf("Max: %d\n", USHRT_MAX);

    // signed int           4바이트 (정수)
    signed int sint = 12345;
    printf("\nsigned int:\n");
    printf("Value: %d\n", sint);
    printf("Max: %d\n", INT_MAX);
    printf("Min: %d\n", INT_MIN);

    // unsigned int         4바이트 (정수)
    unsigned int uint = 12345U;
    printf("\nunsigned int:\n");
    printf("Value: %d\n", uint);
    printf("Max: %d\n", UINT_MAX);

    // long은 운영체제마다 다른 크기
    // 기본 4바이트 Linux/Unix/Mac
    // 윈도우에서 long long하면 8바이트

    // signed long int      4바이트 (정수)
    signed long int slong = 123456789L;
    printf("\nsigned long int:\n");
    printf("Value: %ld\n", slong);
    printf("Max: %ld\n", LONG_MAX);
    printf("Min: %ld\n", LONG_MIN);

    // unsigned long int    4바이트 (정수)
    unsigned long int ulong = 123456789LU;
    printf("\nunsigned long int:\n");
    printf("Value: %lu\n", ulong);
    printf("Max: %lu\n", ULONG_MAX);

    // float                4바이트 (실수)
    float f = 123.4;
    printf("\nfloat:\n");
    printf("Value: %f\n", f);
    // printf("Max: %d\n", FLT_MAX);
    // printf("Min: %d\n", FLT_MIN);

    // double               4바이트 (실수)
    double d = 123456.7890123f;
    printf("\ndouble:\n");
    printf("Value: %.3f\n", d);
    // printf("Max: %d\n", DBL_MAX);
    // printf("Min: %d\n", DBL_MIN);
}