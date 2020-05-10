<<<<<<< HEAD
=======
/*코레스코 콘도에 있는 방은 NxN의 정사각형모양으로 생겼다. 방 안에는 옮길 수 없는 짐들이 이것저것 많이 있어서 영식이의 누울 자리를 차지하고 있었다. 영식이는 이 열악한 환경에서 누울 수 있는 자리를 찾아야 한다. 영식이가 누울 수 있는 자리에는 조건이 있다. 똑바로 연속해서 2칸 이상의 빈 칸이 존재하면 그 곳에 몸을 양 옆으로 쭉 뻗으면서 누울 수 있다. 가로로 누울 수도 있고 세로로 누울 수도 있다. 누울 때는 무조건 몸을 쭉 뻗기 때문에 반드시 벽이나 짐에 닿게 된다. (중간에 어정쩡하게 눕는 경우가 없다.)첫째 줄에 방의 크기 N이 주어진다. N은 1이상 100이하의 정수이다. 그 다음 N줄에 걸쳐 N개의 문자가 들어오는데 '.'은 아무것도 없는 곳을 의미하고, 'X'는 짐이 있는 곳을 의미한다.첫째 줄에 가로로 누울 수 있는 자리와 세로로 누울 수 있는 자리의 개수를 출력한다.*/
>>>>>>> BaekJoon_Algorithm_Linux/master
#include <stdio.h>
#include <stdlib.h>

int main(void){
<<<<<<< HEAD
	//char ** room;
	char room[101][101];
=======
	char ** room;
>>>>>>> BaekJoon_Algorithm_Linux/master
	int N, row=0, column=0, tmp=0;

	scanf("%d", &N);

<<<<<<< HEAD
	/*room = (char **)calloc(sizeof(char *),N);
	for(int i=0;i<N;i++)
		room[i] = (char *)calloc(sizeof(char),N);*/
=======
	room = (char **)calloc(sizeof(char *),N);
	for(int i=0;i<N;i++)
		room[i] = (char *)calloc(sizeof(char),N+1);
>>>>>>> BaekJoon_Algorithm_Linux/master

	for(int i=0;i<N;i++)
		scanf("%s", room[i]);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
<<<<<<< HEAD
			//printf("tmp = %d\n",tmp);
			if(room[i][j]=='X'||j==N-1){
				for(int k=tmp;k<j;k++){
						//printf("%d %d\n", i,k);
					if(room[i][k]=='.'&&room[i][k+1]=='.'){
						//printf("%d %d\n", i,k);
=======
			if(room[i][j]=='X'||j==N-1){
				for(int k=tmp;k<j;k++){
					if(room[i][k]=='.'&&room[i][k+1]=='.'){
>>>>>>> BaekJoon_Algorithm_Linux/master
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
<<<<<<< HEAD
						//printf("%d %d\n", k,i);
=======
>>>>>>> BaekJoon_Algorithm_Linux/master
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

<<<<<<< HEAD
	/*for(int i=0;i<N;i++)
		free(room[i]);
	free(room);*/
=======
	for(int i=0;i<N;i++)
		free(room[i]);
	free(room);
>>>>>>> BaekJoon_Algorithm_Linux/master

	return 0;
}
