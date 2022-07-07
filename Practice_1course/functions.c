#include "header.h"

void solution(struct point* pa, struct point* pb, struct point* pc, struct point* pp) {
	float res1, res2, res3;

	res1 = (pa->x - pp->x) * (pb->y - pa->y) - (pb->x - pa->x) * (pa->y - pp->y);
	res2 = (pb->x - pp->x) * (pc->y - pb->y) - (pc->x - pb->x) * (pb->y - pp->y);
	res3 = (pc->x - pp->x) * (pa->y - pc->y) - (pa->x - pc->x) * (pc->y - pp->y);

	show_result(res1, res2, res3);
}
void input_points(struct point* pa, struct point* pb, struct point* pc, struct point* pp) {
	//Input A
	printf("\nInput A(x, y): \n");
	printf("x = ");
	if (scanf_s("%f", &pa->x) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-1);
	}
	printf("y = ");
	if (scanf_s("%f", &pa->y) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-2);
	}

	//Input B
	printf("\nInput B(x, y): \n");
	printf("x = ");
	if (scanf_s("%f", &pb->x) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-3);
	}
	printf("y = ");
	if (scanf_s("%f", &pb->y) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-4);
	}

	//Input C
	printf("\nInput C(x, y): \n");
	printf("x = ");
	if (scanf_s("%f", &pc->x) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-5);
	}
	printf("y = ");
	if (scanf_s("%f", &pc->y) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-6);
	}

	//Input POINT
	printf("\nInput POINT(x, y): \n");
	printf("x = ");
	if (scanf_s("%f", &pp->x) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-7);
	}
	printf("y = ");
	if (scanf_s("%f", &pp->y) == 0) {
		printf("\nError! You've inputted an incorrect value.\n");
		exit(-8);
	}
}
int show_result(float res1, float res2, float res3) {
	if ((res1 >= 0 && res2 >= 0 && res3 >= 0) || (res1 <= 0 && res2 <= 0 && res3 <= 0)) {

		if (res1 == 0 || res2 == 0 || res3 == 0) {
			printf("The point belongs to the triangle. It is on side or apex.\n");
			return 2;
		}
		printf("The point belongs to the triangle.\n");
		return 1;
	}
	else {
		printf("The point doesn't belong to the triangle.\n");
		return 0;
	}
}