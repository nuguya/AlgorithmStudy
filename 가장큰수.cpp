#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(const int &a,const int &b){
    string s1=to_string(a)+to_string(b);
    string s2=to_string(b)+to_string(a);
    
    return s1>s2;
}

string solution(vector<int> numbers) {
    string answer="";
    sort(numbers.begin(),numbers.end(),cmp);
    
    for(auto &i:numbers){
        answer+=to_string(i);
    }
    if(answer[0]=='0'){
        return "0";
    }
    return answer;
}

int main(void)
{
	vector <int> v;
	int N;
	cin>>N;
	
	for(int i=0;i<N;++i){
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	
	cout<<solution(v)<<endl;
	
	return 0;
}
