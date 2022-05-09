#pragma once
float maxScaleX();
float maxScaleY();
enum AXIS_MODE { DRAW, NODRAW };
void axisMode(AXIS_MODE mode);
void mathAxis(float maxScaleX = 1.1f, float bright = 0);
void mathPoint(float x, float y);
void mathCircle(float x, float y, float r);
void mathRect(float x, float y, float w, float h, float angle = 0);
void mathLine(float sx, float sy, float ex, float ey);
void mathImage(int img, float x, float y, float angle = 0, float scale = 1);
void mathArrow(float sx, float sy, float ex, float ey, float size = 30.0f);
void mathText(class let l, float x, float y);
void mathArc(float startAngle, float centralAngle, float radius);
extern float mathMouseX;
extern float mathMouseY;
