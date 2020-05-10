#include <iostream>
using namespace std;

int main(void){
	int N, K, tmp_it=0, rank;
	int ** Medal, * tmp;

	cin>>N>>K;

	Medal = new int*[N];
	for(int i=0;i<N;i++)
		Medal[i] = new int[4];

	tmp = new int[4];

	for(int i=0;i<N;i++)
		for(int j=0;j<4;j++)
			cin>>Medal[i][j];

	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(Medal[i][1]<Medal[j][1]){
				tmp = Medal[i];
				Medal[i] = Medal[j];
				Medal[j] = tmp;
			}
			else if(Medal[i][1]==Medal[j][1]){
				if(Medal[i][2]<Medal[j][2]){
					tmp = Medal[i];
					Medal[i] = Medal[j];
					Medal[j] = tmp;
				}
				else if(Medal[i][2]==Medal[j][2]){
					if(Medal[i][3]<Medal[j][3]){
						tmp = Medal[i];
						Medal[i] = Medal[j];
						Medal[j] = tmp;
					}
				}
			}
		}
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<4;j++)
			cout<<Medal[i][j];
		cout<<endl;
	}

	for(int i=0;i<N;i++)
		if(Medal[i][0]==K){
			rank = i+1;
			tmp_it = i-1;
			break;
		}

	while(1){
		if(rank==1)
			break;
		if(Medal[rank-1][1]!=Medal[tmp_it][1])
			break;
		else if(Medal[rank-1][2]!=Medal[tmp_it][2])
			break;
		else if(Medal[rank-1][3]!=Medal[tmp_it][3])
			break;
		tmp_it--;
		rank--;
	}

	cout<<rank;

	for(int i=0;i<N;i++)
		delete Medal[i];
	delete Medal;

	return 0;
}
