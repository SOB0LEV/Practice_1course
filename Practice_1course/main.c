#include "header.h"

int main() {
	struct point A, B, C, POINT;

	struct A* pa;
	pa = &A;
	struct B* pb;
	pb = &B;
	struct C* pc;
	pc = &C;
	struct POINT* pp;
	pp = &POINT;

	printf("Hello! This program checks if a point belongs to a triangle.");
	while (true) {
		input_points(pa, pb, pc, pp);
		solution(pa, pb, pc, pp);
	}

	return 0;
}