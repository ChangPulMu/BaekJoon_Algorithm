/*
<점수를 정하는 규칙>

 

카드 5장이 모두 같은 색이면서 숫자가 연속적일 때, 점수는 가장 높은 숫자에 900을 더한다. 예를 들어, 카드가 Y4, Y3, Y2, Y5, Y6 일 때 점수는 906(=6+900)점이다.

카드 5장 중 4장의 숫자가 같을 때 점수는 같은 숫자에 800을 더한다. 예를 들어, 카드가 B3, R3, B7, Y3, G3 일 때 점수는 803(=3+800)점이다.

카드 5장 중 3장의 숫자가 같고 나머지 2장도 숫자가 같을 때 점수는 3장이 같은 숫자에 10을 곱하고 2장이 같은 숫자를 더한 다음 700을 더한다. 예를 들어, 카드가 R5, Y5, G7, B5, Y7 일 때 점수는 757(=5x10+7+700)점이다.

5장의 카드 색깔이 모두 같을 때 점수는 가장 높은 숫자에 600을 더한다. 예를 들어, 카드가 Y3, Y4, Y8, Y6, Y7 일 때 점수는 608(=8+600)점이다.

카드 5장의 숫자가 연속적일 때 점수는 가장 높은 숫자에 500을 더한다. 예를 들어 R7, R8, G9, Y6, B5 일 때 점수는 509(=9+500)점이다.

카드 5장 중 3장의 숫자가 같을 때 점수는 같은 숫자에 400을 더한다. 예를 들어 R7, Y7, R2, G7, R5 일 때 점수는 407(=7+400)점이다.

카드 5장 중 2장의 숫자가 같고 또 다른 2장의 숫자가 같을 때 점수는 같은 숫자 중 큰 숫자에 10을 곱하고 같은 숫자 중 작은 숫자를 더한 다음 300을 더한다. 예를 들어, R5, Y5, Y4, G9, B4 일 때 점수는 354(=5X10+4+300)점이다.

카드 5장 중 2장의 숫자가 같을 때 점수는 같은 숫자에 200을 더한다. 예를 들어, R5, Y2, B5, B3, G4 일 때 점수는 205(=5+200)점이다.

위의 어떤 경우에도 해당하지 않을 때 점수는 가장 큰 숫자에 100을 더한다. 예를 들어, R1, R2, B4, B8, Y5 일 때 점수는 108(=8+100)점이다.

입력으로 카드 5장이 주어질 때, 카드 게임의 점수를 구하는 프로그램을 작성하시오. 두 가지 이상의 규칙을 적용할 수 있는 경우에는 가장 높은 점수가 카드 게임의 점수이다.*/

 

#include <stdio.h>

 

typedef struct {

		char color;

			int num;

}Card;

 

int main(void) {

		Card crd[5];

			int same_color = 0, same_num1 = 0, same_num2 = 1, tmp[5], contin_num = 0, score = 0, num_tmp;

			 

				for (int i = 0; i < 5; i++) {

							scanf("%c", &(crd[i].color));

									getchar();

											scanf("%d", &(crd[i].num));

													getchar();

														}

				 

					for (int i = 0; i < 5; i++) {

								if (crd[0].color == crd[i].color)

												same_color++;

										for (int j = i + 1; j < 5; j++)

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