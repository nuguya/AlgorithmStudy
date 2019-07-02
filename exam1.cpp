#include <iostream>
#include <stack>

using namespace std;

char In[100001];


int main(void)
{
	cin>>In;
	int i=0;
	bool prev;
	int prevSize;
	int sum=0;
	stack <char> s;
	while(In[i]!='\0'){
		if(In[i]=='('){
			s.push('(');
			prev=false;
		}
		else if(In[i]==')'){
			s.pop();
			if(prev){
				sum+=prevSize-s.size();
				prev=true;
				prevSize=s.size(); 
			}
			else{
				sum+=s.size();
				prev=true;
				prevSize=s.size();
			}
		}
		
		++i;
	}
	
	cout<<sum<<endl;
}
