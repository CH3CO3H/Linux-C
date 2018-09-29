unsigned int gcd(unsigned int x, unsigned int y)
{
	if (y>x)
		x^=y, y^=x, x^=y;
	if (x%y==0)
		return y;
	else
		return gcd(y, x%y);
}

unsigned int lcm(unsigned int x, unsigned int y)
{
	unsigned int g=gcd(x, y);
	return x*y/g;
}
