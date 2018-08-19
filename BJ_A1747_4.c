/*어떤 수와 그 수의 숫자 순서를 뒤집은 수가 일치하는 수를 팰린드롬이라 부른다. 예를 들어 79,197과 324,423 등이 팰린드롬 수이다.

어떤 수 N (1 ≤ N ≤ 1,000,000)이 주어졌을 때, N보다 크거나 같고, 소수이면서 팰린드롬인 수 중에서, 가장 작은 수를 구하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main(void){
	int ans, tmp, len=1, correct=0, turn;

	scanf("%d", &ans);

	while(1){
		while(1){
			if(tmp<10*(len+1))
				break;
			len += 1;
		}
		turn = len/2;
		tmp = len;
		for(int I = 1;I<=turn;I++,tmp--){
			if(turn == 1){
				if((ans/(tmp*10))==(ans%((I+1)*10))/(I*10))
					correct++;
			}
			else if((ans/(tmp*10))%(I*10)==(ans%((I+1)*10))/(I*10))
				correct++;
		}
		if(correct==turn){
			for(tmp=2;tmp<ans;tmp++){
				if(ans%tmp==0)
					break;
			}
			if(ans==tmp){
				printf("%d\n", ans);
				break;
			}
		}
		ans++;
		correct = 0;
	}
	return 0;
}
