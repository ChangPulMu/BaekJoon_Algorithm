/*어떤 수와 그 수의 숫자 순서를 뒤집은 수가 일치하는 수를 팰린드롬이라 부른다. 예를 들어 79,197과 324,423 등이 팰린드롬 수이다.

어떤 수 N (1 ≤ N ≤ 1,000,000)이 주어졌을 때, N보다 크거나 같고, 소수이면서 팰린드롬인 수 중에서, 가장 작은 수를 구하는 프로그램을 작성하시오.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char num[8];
	
	int ans, correct=0,i;

	scanf("%s", num);

	while(1){
		
		for(int m=0;m<strlen(num)/2;m++)
			
			if(num[m]==num[strlen(num)-1-m])
				correct++;
		
		ans = atoi(num);

		if(correct==strlen(num)/2){
		
			for(i=2;i<ans;i++)
				if(ans%i==0)
					break;
		
			if(ans==i){
				printf("%d", ans);
				break;
			}
		}
	
		ans++;

		correct = 0;
	
		sprintf(num,"%d",ans);
	}
	return 0;
}
