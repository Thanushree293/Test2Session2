#include <stdio.h>
#include <math.h>
struct _point
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  point p;
  printf("enter the point value\n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  line l;
  printf("enter the 1st point\n");
  l.p1=input_point();
  printf("enter the 2nd point\n");
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
 
  l->distance=sqrt((l->p1.x-l->p2.x)*(l->p1.x-l->p2.x)+(l->p1.y-l->p2.y)*(l->p1.y-l->p2.y));
}
void output(Line l)
{
  printf("length of line with two points (%f,%f) and (%f,%f) is %f\n",l.p1.x,l.p1,y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
line l;
l=input_line();
find_length(&l);
output(l);
return 0;
  }