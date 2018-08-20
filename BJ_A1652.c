#include <stdio.h>
#include <stdlib.h>

int main(void){
	//char ** room;
	char room[101][101];
	int N, row=0, column=0, tmp=0;

	scanf("%d", &N);

	/*room = (char **)calloc(sizeof(char *),N);
	for(int i=0;i<N;i++)
		room[i] = (char *)calloc(sizeof(char),N);*/

	for(int i=0;i<N;i++)
		scanf("%s", room[i]);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			//printf("tmp = %d\n",tmp);
			if(room[i][j]=='X'||j==N-1){
				for(int k=tmp;k<j;k++){
						//printf("%d %d\n", i,k);
					if(room[i][k]=='.'&&room[i][k+1]=='.'){
						//printf("%d %d\n", i,k);
						row++;
						break;
					}
				}
				tmp = j+1;
			}
		}
		tmp=0;
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(room[j][i]=='X'||j==N-1){
				for(int k=tmp;k<j;k++){
					if(room[k][i]=='.'&&room[k+1][i]=='.'){
						//printf("%d %d\n", k,i);
						column++;
						break;
					}
				}
				tmp = j+1;
			}
		}
		tmp=0;
	}

	printf("%d %d", row, column);

	/*for(int i=0;i<N;i++)
		free(room[i]);
	free(room);*/

	return 0;
}
