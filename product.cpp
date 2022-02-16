int main()
{
    int n,r,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	p*=r;
    	n/=10;
    }
    print("%d",p);
}
	}
