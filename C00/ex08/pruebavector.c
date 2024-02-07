#include <unistd.h>

void	pruebascomb(int n)
{
	char v[n];
	
	v[0] = '0';
	if (n == 1)
	{
		while (v[0] <= '9')
		{
			if (v[0] < '9')
			{
				write(1, v, 1);
				write(1, ", ", 2);
			}
			else 
				write(1, v, 1);
			v[0]++;
		}
	}
	if (n == 2)
	{
		while (v[0] <= '9')
		{
			v[1] = v[0] + 1;
			while (v[1] <= '9')
			{
				if (v[0] == '8' && v[1] == '9')
				{
					write(1, &v, 1);	
				}
				else
				{
					write(1, &v, 1);
					write(1, ", ", 2);
				}
				v[1]++;
			}
			v[0]++;
		}
	}
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	pruebascomb(a);
	write(1, "\n", 1);
	pruebascomb(b);
	return (0);
}
