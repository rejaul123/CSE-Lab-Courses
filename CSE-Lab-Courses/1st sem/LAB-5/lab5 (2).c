#include<stdio.h>

int main() {
    char marital_status, gender;
    int age;

    printf("Enter marital status (M for Married, U for Unmarried): ");
    scanf(" %c", &marital_status);

    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);


    if (marital_status == 'M' || marital_status == 'm') {

        printf("Driver is insured.\n");
    } else if ((gender == 'M' || gender == 'm') && age > 30) {

        printf("Driver is insured.\n");
    } else if ((gender == 'F' || gender == 'f') && age > 25) {

        printf("Driver is insured.\n");
    } else {

        printf("Driver is not insured.\n");
    }

    return 0;
}
