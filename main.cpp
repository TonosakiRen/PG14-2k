#include"main.h"
#include "Vector2.h"
int main() {
	Vector2 a(4.0f, 8.0f);
	Vector2 b(-2.0f, 3.0f);
	printf("a(x,y) : %f,%f\n", a.x, a.y);
	printf("b(x,y) : %f,%f\n", b.x, b.y);
	printf("a + b =  : %f,%f\n", (a + b).x, (a + b).y);
	printf("a - b = : %f,%f\n", (a - b).x, (a - b).y);
	END();
	return 0;
}

