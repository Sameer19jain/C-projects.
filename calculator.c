#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    float a;
    float b;
    char operator;
    float c;
    printf(" enter the calculation: \n\n");
    scanf("%f%c%f", a,operator,b);

    switch(operator)
    {
        case '/' : c= a/b;
        break;
        case '*' : c=a*b;
        break;
        case '-' : c=a-b;
        break;
        case '+' : c=a+b;
        break;
        case '^' : c= pow(a,b);
        break;
        case ' ' : c=sqrt(b);
        break;
        default: goto fail;
    }
    printf("%f%c%f%f", a,operator,b,c);
    goto exit;
    fail:
     printf("Fail\n");
    exit:
     return 0;
}
