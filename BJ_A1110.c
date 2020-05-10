#include <stdio.h>

int main(void){
	int N, tmp_N[2], tmp_r, tmp, cycle=0;

	scanf("%d", &N);

	tmp_N[1] = N%10;
	tmp_N[0] = N/10;

	while(1){
		tmp_r = tmp_N[0] + tmp_N[1];
		tmp = 10*tmp_N[1] + tmp_r%10;
		cycle++;

		if(N==tmp)
			break;

		tmp_N[1] = tmp%10;
		tmp_N[0] = tmp/10;
	}

	printf("%d", cycle);
	return 0;
}
