#include<iostream>
using namespace std;
void homework1()
{
	for(int i=1;i<=9;i++)
	{
	    int a=i*10+5;
		for(int j=1;j<=i;j++)
		{
			int b=j*10+5;
			cout<<b<<"*"<<a<<" "; 
		}
	    cout<<endl;	
	}
}



void homework2(int n)
{ 
    if(n>=128)
	{
		cout<<"��Ů����ѧ��Ϊ "<<n-128<<"("; 
	}
	else
	{
		cout<<"��������ѧ��Ϊ "<<n<<"(";
	}
    int j=0;
	int num[8]; 
    while (j<8)
    {
    	num[j]=0;
    	j++;
	}
    int m=0; 
    while(n>1)
    {
        num[m++]=n%2;
        n/=2; 
    }
    num[m]=n;
    int start=0;
	int end=sizeof(num)/sizeof(num[0])-1;
	while(start<end)
	{int temp=num[start];
	num[start]=num[end];
	num[end]=temp;
	start++;
	end--;	
	}
	for(int j;j<8;j++)
	{
		cout<<num[j];
	}
    cout<<")";
}

void homework3(int *num,int b)
{
	int start=0;
	int end=sizeof(num)/sizeof(num[0])-1;
	while(start<end)
	{int temp=num[start];
	num[start]=num[end];
	num[end]=temp;
	start++;
	end--;	
	}
	for(int j;j<10;j++)
	{
		cout<<num[j];
	}
}

int main()
{
	cout<<"��ѡ���������ݣ�"<<endl;
	cout<<"���Ҫѡ����ҵһ������ 1 "<<endl;
	cout<<"���Ҫѡ����ҵ�������� 2 "<<endl; 
	cout<<"���Ҫѡ����ҵ�������� 3 "<<endl;
	int chose;
	cin>>chose;
	switch(chose)
	{
		case 1:
			homework1();
			break;
		case 2:
			cout<<"������һ��0-255������"<<endl;
			int a;
	        cin>>a;
	        homework2(a);
	        break;
	    case 3:
	    	int num[10];
	        for(int i=0;i<10;i++)
	        {
		        cout<<"num["<<i<<"]"<<endl;
		        cin>>num[i];
	        }
	        int b=10;
	        homework3(num,a);
	        break;
	}
	
	return 0;
}
