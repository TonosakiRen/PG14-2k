#include "Vector2.h"
Vector2::Vector2() {

}
Vector2::Vector2(float x, float y) {
	this->x = x;
	this->y = y;
}
Vector2 Vector2::operator+(const Vector2& obj) {
	return { x + obj.x ,y + obj.y };
}
Vector2 Vector2::operator-(const Vector2& obj) {
	return { x - obj.x ,y - obj.y };
}