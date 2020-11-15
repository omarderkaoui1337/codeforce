#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void ft_print_hex(int n)
{
    char hexaDeciNum[100]; 
    int i = 0; 
    int temp  = 0;
    while(n!=0) 
    {     
        temp = n % 16; 
        if(temp < 10) 
            hexaDeciNum[i++] = temp + '0'; 
        else
            hexaDeciNum[i++] = temp + 'a'-10; 
        n = n/16; 
    }
    while (i>=0)
        write(1,&hexaDeciNum[i--],1);
    
}

void	print_memory(const void *addr, size_t size)
{
    unsigned char *array;
    array  = (unsigned char *) addr;
    int i = 0;
    while (i < size)
    {
        ft_print_hex(array[i]);
        i++;
    }
}

int	main(void)
{
	int	tab[10] = {214748364, 23, 150, 255, 
					12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}