#include <stdio.h>
#define KMS_PER_MILE 1.60934

int main(){

    double miles, kms ;
    printf("ENTER DISTANCE IN MILES> ");
    scanf("%lf", &miles);
    kms = KMS_PER_MILE * miles ;
    printf("that equals %f kilometers.\n", kms);
    return 0;

}
