#include <stdio.h>
#include <stdlib.h>

int main(void){
	char ** room;
	int N, row=0, column=0, tmp=0;

	scanf("%d", &N);

	room = (char **)calloc(sizeof(char *),N);
	for(int i=0;i<N;i++)
		room[i] = (char *)calloc(sizeof(char),N+1);

	for(int i=0;i<N;i++)
		scanf("%s", room[i]);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(room[i][j]=='X'||j==N-1){
				for(int k=tmp;k<j;k++){
					if(room[i][k]=='.'&&room[i][k+1]=='.'){
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

	for(int i=0;i<N;i++)
		free(room[i]);
	free(room);

	return 0;
}
