#include <unistd.h>

int     ft_atoi(char *str) // watch out this is a modified atoi that won't account for negative numbers or weird spaces
{
    unsigned int     res;
    unsigned int     i;
    
    i = 0;
    res = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

void    ft_putnbr(unsigned int n) // watch out this is a modified putnbr that does not account for negative numbers
{
    char    c;
    
    if (n < 10)
    {
        c = n + '0'; 
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int     main(int argc, char **argv)
{
    int     param;
    int     i;
    
    if (argc == 2)
    {
        i = 1;
        param = ft_atoi(argv[1]);
        while (i <= 9)        
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(param);
            write(1, " = ", 3);
            ft_putnbr(i * param);
            write(1, "\n", 1); 
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
