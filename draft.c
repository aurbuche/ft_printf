int		ft_printf(const char *format, ...)
{
	va_list			ap;
	va_list			ap2;
	char			*tab;
	t_all			st[1];

	va_start(ap, format);
	va_copy(ap2, ap);
	if (ft_check_error(&tab, format) == 0)
		return (0);
	i = 0;
	while ((tab[i] = *format) != '\0')
	{
		if (tab[i] != '%' && tab[i] != 's' && tab[i] != 'c' && tab[i] != 'd')
			ft_putchar(tab[i]);
		if (tab[i] == 's' && tab[i - 1] == '%')
		{
			st->s = va_arg(ap, char *);
			if (st->s == '\0')
				ft_putstr("(null)");
			else
				ft_putstr(st->s);
		}
		if (tab[i] == 'd' && tab[i - 1] == '%')
		{
			st->d = va_arg(ap, int);
			ft_putnbr(st->d);
		}
		if (tab[i] == 'c' && tab[i - 1] == '%')
		{
			st->c = va_arg(ap, int);
			if (st->c == '\0')
				ft_putchar('\0');
			else
				ft_putchar(st->c);
		}
		format++;
		i++;
	}
	return (0);
}

/************************************************************************************/

if ((ft_strchr(format, '%') + 1) == 'c')
{
	printf("[%d]\n", 9);
	printf("char|%d|\n", (ft_strchr(format, '%') + 1));
	//ft_printf_4_c(format, &tab);
}

/*******************************************************************/

	char			*tab;
	t_all	all[1];

	va_start(all.ap, format);
	if (ft_check_error(&tab, format) == 0)
		return (0);
	while (*tab != '%')
	{
		ft_putchar(*tab);
		tab++;
	}
	tab++;
	while (*tab != '\0')
	{
		if (*tab != '%')
			ft_putchar(*tab);
		if (*tab == 'c')
			ft_printf_4_c(tab, all.ap);
		tab++;
	}