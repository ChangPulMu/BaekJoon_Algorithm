#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<string> answer;
	vector<long long> input(3);
	
	while(true)
	{
		cin >> input[0] >> input[1] >> input[2];
		
		if(input[0]==0 && input[1]==0 && input[2]==0)
			break;
		
		if(input[0]==0 || input[1]==0 || input[2]==0)
		{
			answer.push_back("wrong");
			continue;
		}
		
		sort(input.begin(), input.end());
		
		if(input[0]*input[0]+input[1]*input[1]==input[2]*input[2])
			answer.push_back("right");
		else
			answer.push_back("wrong");
	}
	
	for(int i=0;i<answer.size();i++)
		cout << answer[i] << endl;
}

