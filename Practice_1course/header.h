#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {
	float x;
	float y;
};

void input_points(struct point* pa, struct point* pb, struct point* pc, struct point* pp);
void solution(struct point* pa, struct point* pb, struct point* pc, struct point* pp);
int show_result(float res1, float res2, float res3);