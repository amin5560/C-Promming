#include <stdio.h>

int main()
{
    printf("Hello World\n");

    return 0;
}


// variable and DataTypes

int main()
{
    int jersey_number = 10;

    printf("My jersey number is %d\n", jersey_number);

    return 0;
}

int main()
{
    int gpa = 3.82;

    printf("My GPA is %d\n", gpa);

    return 0;
}

int main()
{
    double gpa = 3.82;

    printf("My GPA is %.3lf\n", gpa);

    return 0;
}

//Basic Arithmetic

int main()
{
    double gpa = 3.82;

    printf("My GPA is %.2lf\n", gpa-1);

    return 0;
}

int main()
{
    double gpa1 = 3.82;
    double gpa2 = 2.99;
    double gpa3 = 3.65;

    double avg = (gpa1 + gpa2 + gpa3) / 3.0;

    printf("Average GPA is %.2lf\n", avg);

    return 0;
}

// conditional logic

int main(){
    int num = 30;

    if (num % 2 ==0){
        printf("%d is even number\n", num);
    }else{
        printf("%d is odd number\n", num);
    }
}
