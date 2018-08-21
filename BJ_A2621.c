#include <stdio.h>

typedef struct {
	char color;
	int num;
}Card;

int main(void) {
	Card crd[5];
	int same_color = 0, same_num1 = 0, same_num2=1, tmp[5], contin_num=0, score=0, num_tmp;

	for (int i = 0; i < 5; i++) {
		scanf("%c", &(crd[i].color));
		getchar();
		scanf("%d", &(crd[i].num));
		getchar();
	}

	for (int i = 0; i < 5; i++) {
		if (crd[0].color == crd[i].color)
			same_color++;
		for (int j = i+1; j < 5; j++)
			if (crd[i].num > crd[j].num) {
				num_tmp = crd[i].num;
				crd[i].num = crd[j].num;
				crd[j].num = num_tmp;
			}
	}
	for (int i = 0; i < 5; i++)
		tmp[i] = crd[i].num;
	for (int i = 0; i < 4; i++) {
		if (tmp[i] + 1 == tmp[i + 1])
			contin_num++;
	}


	if (same_color == 5) {
		if (contin_num == 4)
			score = tmp[4] + 900;
		else
			score = tmp[4] + 600;
	}
	if (contin_num == 4)
		if (score < 500)
			score = tmp[4] + 500;


	for (int i = 0; i < 5; i++) {
		if (tmp[0] == tmp[i])
			same_num1++;
		else if (i == 4)
			continue;
		else if (tmp[i] == tmp[i + 1])
			same_num2++;
	}

	if (tmp[1] == tmp[2] && tmp[3] == tmp[4]) {
		if (tmp[1] != tmp[3]) {
			if (tmp[0] != tmp[1]) {
				same_num1 = 2;
				same_num2 = 2;
			}
		}
	}
	if (same_num1 == 4 || same_num2 == 4) {
		if (score < 800)
			score = tmp[2] + 800;
	}
	else if (same_num1 == 3 || same_num2 == 3) {
		if (same_num1 == 2 || same_num2 == 2) {
			if (score < 700)
				if (same_num1 == 2)
					score = tmp[0] + 10 * tmp[4] + 700;
				else
					score = tmp[4] + 10 * tmp[0] + 700;
		}
		else
			if (score < 400)
				if (same_num1 == 3)
					score = tmp[0] + 400;
				else
					score = tmp[2] + 400;
	}
	else if (same_num1 == 2 || same_num2 == 2) {
		if (same_num1 == 2 && same_num2 == 2) {
			if (score < 300)
				score = tmp[3] * 10 + tmp[1] + 300;
		}
		else {
			if (score < 200) {
				if (same_num1 == 2)
					score = tmp[0] + 200;
				else {
					if (tmp[1] == tmp[2])
						score = tmp[1] + 200;
					else if (tmp[2] == tmp[3])
						score = tmp[2] + 200;
					else
						score = tmp[3] + 200;
				}
			}
		}
	}
	else
		if (score < 100)
			score = tmp[4] + 100;
	printf("%d", score);
	return 0;
}
