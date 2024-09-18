#include <stdio.h>
struct point {
	int x;
	int y;
};
struct rectangle{
	struct point p1;
	struct point p2;
};
void printRect(struct rectangle p)
{
	printf("<%d %d>to<%d %d>\n",p.p1.x,p.p1.y,p.p2.x,p.p2.y);
}
int main(int argc,char const *argv[])
{
	struct rectangle rects[]={
		{{1,2},{3,4}},
		{{5,6},{7,8}},
	};// 2 rectangles
	int i;
	for(i=0;i<2;i++){
		printRect(rects[i]);
	}
}
