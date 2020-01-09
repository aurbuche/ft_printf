		size_t n;

		n = i + 1;
		write(1, "%%", 2);
		i = (char*)ft_memchr((char*)fmt, '%', ft_strlen((char*)fmt)) - fmt;
		printf("__%c__", fmt[i + 2]);
		ft_write_til_percent(fmt, i, n);