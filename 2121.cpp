#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string st1;
	char ch;
	int n=0,i,j,t=1,s=1,a[10]={0};
	while(cin>>st1)
	{
		cin.get(ch);
		if(ch==32)
		{
			if(st1=="negative")t=-1;
			if(st1=="one")a[s]++;
			if(st1=="two")a[s]+=2;
			if(st1=="three")a[s]+=3;
			if(st1=="four")a[s]+=4;
			if(st1=="five")a[s]+=5;
			if(st1=="six")a[s]+=6;
			if(st1=="seven")a[s]+=7;
			if(st1=="eight")a[s]+=8;
			if(st1=="nine")a[s]+=9;
			if(st1=="ten")a[s]+=10;
			if(st1=="eleven")a[s]+=11;
			if(st1=="twelve")a[s]+=12;
			if(st1=="thirteen")a[s]+=13;
			if(st1=="fourteen")a[s]+=14;
			if(st1=="fifteen")a[s]+=15;
			if(st1=="sixteen")a[s]+=16;
			if(st1=="seventeen")a[s]+=17;
			if(st1=="eighteen")a[s]+=18;
			if(st1=="nineteen")a[s]+=19;
			if(st1=="twenty")a[s]+=20;
			if(st1=="thirty")a[s]+=30;
			if(st1=="forty")a[s]+=40;
			if(st1=="fifty")a[s]+=50;
			if(st1=="sixty")a[s]+=60;
			if(st1=="seventy")a[s]+=70;
			if(st1=="eighty")a[s]+=80;
			if(st1=="ninety")a[s]+=90;
			if(st1=="hundred")a[s]*=100;
			if(st1=="thousand")
			{
				a[s]*=1000;
				s++;
			}
			if(st1=="million")
			{
				a[s]*=1000000;
				s++;
			}
		}
		else
		{
			if(st1=="negative")t=-1;
			if(st1=="one")a[s]++;
			if(st1=="two")a[s]+=2;
			if(st1=="three")a[s]+=3;
			if(st1=="four")a[s]+=4;
			if(st1=="five")a[s]+=5;
			if(st1=="six")a[s]+=6;
			if(st1=="seven")a[s]+=7;
			if(st1=="eight")a[s]+=8;
			if(st1=="nine")a[s]+=9;
			if(st1=="ten")a[s]+=10;
			if(st1=="eleven")a[s]+=11;
			if(st1=="twelve")a[s]+=12;
			if(st1=="thirteen")a[s]+=13;
			if(st1=="fourteen")a[s]+=14;
			if(st1=="fifteen")a[s]+=15;
			if(st1=="sixteen")a[s]+=16;
			if(st1=="seventeen")a[s]+=17;
			if(st1=="eighteen")a[s]+=18;
			if(st1=="nineteen")a[s]+=19;
			if(st1=="twenty")a[s]+=20;
			if(st1=="thirty")a[s]+=30;
			if(st1=="forty")a[s]+=40;
			if(st1=="fifty")a[s]+=50;
			if(st1=="sixty")a[s]+=60;
			if(st1=="seventy")a[s]+=70;
			if(st1=="eighty")a[s]+=80;
			if(st1=="ninety")a[s]+=90;
			if(st1=="hundred")a[s]*=100;
			if(st1=="thousand")
			{
				a[s]*=1000;
				s++;
			}
			if(st1=="million")
			{
				a[s]*=1000000;
				s++;
			}
			for(i=1;i<=s;i++)
				n+=a[i];
			n*=t;
			cout<<n<<endl;
			t=1;
			n=0;
			for(i=1;i<=s;i++)
				a[i]=0;
			s=1;
		}
	}
	return 0;
}

