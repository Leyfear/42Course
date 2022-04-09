#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	number;

	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number);
}

void	ft_sendbyte(unsigned char c, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c >= 128)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c << 1;
		i++;
		usleep(100);
		//sinyalleri hızlı göndermemek için karışmasın diye
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;
	int		i;

	if (argc != 3)
	{	
		write(1,"İki arguman girilmeli",23);
		write(1,"\n",1);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (str[i])
		ft_sendbyte(str[i++], pid);
	ft_sendbyte(str[i], pid);
	//yeni satır için. burda en son null gönderiyor ve null 0 oldugu için 8 bitte 0 gidiyor ve ordaki döngüdede 
	// if de (c =0) a eşit oldugu için en son "/n yazıyor. 
}
