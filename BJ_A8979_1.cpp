#include <iostream>
using namespace std;

int main(void){
	int N, K, tmp_sil=0, tmp_bron=0, rank;
	int ** Medal, * tmp;

	cin>>N>>K;

	Medal = new int*[N];
	for(int i=0;i<N;i++)
		Medal[i] = new int[4];

	tmp = new int[4];

	for(int i=0;i<N;i++)
		for(int j=0;j<4;j++)
			cin>>Medal[i][j];

	for(int i=0;i<N-1;i++)
		for(int j=i+1;j<N;j++)
			if(Medal[i][1]<Medal[j][1]){
				tmp = Medal[i];
				Medal[i] = Medal[j];
				Medal[j] = tmp;
			}

	/*for(int i=0;i<N;i++){
		for(int j=0;j<4;j++)
			cout<<Medal[i][j];
		cout<<endl;
	}*/

	for(int k=0;k<N-1;k++){
		if(Medal[k][1]!=Medal[k+1][1]){
			for(int i=tmp_sil;i<k;i++)
				for(int j=i+1;j<k+1;j++)
					if(Medal[i][2]<Medal[j][2]){
						tmp = Medal[i];
						Medal[i] = Medal[j];
						Medal[j] = tmp;
					}
			tmp_sil = k+1;
		}
	}

	/*for(int i=0;i<N;i++){
		for(int j=0;j<4;j++)
			cout<<Medal[i][j];
		cout<<endl;
	}*/

	for(int k=0;k<N-1;k++){
		if(Medal[k][1]!=Medal[k+1][1])
			tmp_bron++;
		if(Medal[k][1]==Medal[k+1][1]){
			if(Medal[k][2]!=Medal[k+1][2]){
				for(int i=tmp_bron;i<k;i++)
					for(int j=i+1;j<k+1;j++)
						if(Medal[i][3]<Medal[j][3]){
							tmp = Medal[i];
							Medal[i] = Medal[j];
							Medal[j] = tmp;
						}
				tmp_bron = k+1;
			}
		}
	}

	/*for(int i=0;i<N;i++){
		for(int j=0;j<4;j++)
			cout<<Medal[i][j];
		cout<<endl;
	}*/

	for(int i=0;i<N;i++)
		if(Medal[i][0]==K){
			rank = i+1;
			tmp_sil = i;
			break;
		}

	tmp_bron = tmp_sil-1;

	while(1){
		if(rank==1)
			break;
		if(Medal[tmp_sil][1]!=Medal[tmp_bron][1])
			break;
		else if(Medal[tmp_sil][2]!=Medal[tmp_bron][2])
			break;
		else if(Medal[tmp_sil][3]!=Medal[tmp_bron][3])
			break;
		tmp_bron--;
		rank--;
	}

	cout<<rank;

	for(int i=0;i<N;i++)
		delete Medal[i];
	delete Medal;

	return 0;
}
