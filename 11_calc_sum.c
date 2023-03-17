#include <stdio.h>

int main()
{
    int n, i;
    float s = 0;
    
    printf("Enter a natural number: ");
    scanf("%d", &n);
    
    for(i = 2; i <= n; i = i + 2)
        s = s + 1.0 / i;
    
    printf("Result is: %f", s);
    
    return 0;
}
