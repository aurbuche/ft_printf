#include"libftprintf.h"
#include<limits.h>

int main()
{
    // ft_printf("ft_:\t|%01.0d|\n", 0);
    // printf("pf_:\t|%01.0d|\n", 0);
    // puts("");
    // ft_printf("ft_:\t|%046d|\n", INT_MIN);
    // printf("pf_:\t|%046d|\n", INT_MIN);
    // puts("");
    // ft_printf("ft_:\t%0*.*%\n", 5, -5);
    // printf("pf_:\t%0*.*%\n", 5, -5);
    // puts("");
    ft_printf("ft_:\t%020.*%\n", -45);
    printf("pf_:\t%020.*%\n", -45);
    //0*.*'percent'] : 5 -5
    //020.*'percent'] : -45
    //%046d INT_MIN
}