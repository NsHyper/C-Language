int sum(int n)
{
	int p;
	if (n==0) return 0;
	p=n+sum(n-1);
	return p;
}
