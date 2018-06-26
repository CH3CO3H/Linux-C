int howmany9(void)
{
	int i=0;
	int c=0;
	while (i<100) {
		if (i%10==9)
			c++;
		if (i/10%10==9)
			c++;
		i++;
	}
	return c;
}

