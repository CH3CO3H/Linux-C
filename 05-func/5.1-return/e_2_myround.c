double myround(double x)
{
	int y=x*10;
	y%=10;
	if (y<5 && y>-5)
		return floor(x);
	else
		return ceil(x);
}

