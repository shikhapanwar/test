
#include <iostream>
using namespace std;
#include<string.h>

string str[1000];
string str2[1000];
string strtemp;
int main()
{//string strtemp;
    int n,i,q, pos, k,j;
   unsigned int maxsize;
	cin>>n;
	for(i=0; i<n; i++)
	{
	
			cin>>str[i];
		
	}

	cin>>q;

	for(i=0;i<q;i++)
	{
		cin>>str2[i];
	}
	
	for(i=0;i<q;i++)
	{ maxsize=0;
		for(pos=0;pos<str2[i].length();pos++)
		{	for(k=1;k<=str2[i].length();k++)
			 strtemp=str2[i].substr(pos,k);
			
			for(j=0;j<n;j++)
			{
				 std::size_t found = str[j].find(strtemp);
				 if(found!=0){
				 	if(strtemp.length()>maxsize){
				 		maxsize=strtemp.length();
				 	}
				 
				 }
			}
		}
		cout<<maxsize<<endl;
	}
	
	
    return 0;
}
