#include <stdio.h>

// 

int main()
{
    int a,b;
    float c;

    a = 10; b = 3;
    c = (float) a/b; // Addict the "float" you'll get more presition about your result
    printf("%d/%d = %.2f\n",a,b,c);

    return(0);
}