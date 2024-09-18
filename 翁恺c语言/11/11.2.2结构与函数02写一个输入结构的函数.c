//自己写一个输入结构的函数
//不懂 感觉多此一举？？？直接输不久完了  
//#include <stdio.h>
//struct point {
//	int x;
//	int y;
//};
//
//struct point *getStruct(struct point *p);
//void output(const struct point *p);
//
//int main(int argc,char const *argv[])
//{
//	struct point y={0,0};
//	getStruct(&y);
//	output(&y);
//}
//struct point * getStruct(struct point *p)
//{
//	//scanf("%d",p);
//	//scanf("%d",(p+4));
//	//printf("%d %d\n",*p,*(p+4));
//	scanf("%d",&(p->x));
//	scanf("%d",&(p->y));
//	printf("%d %d\n",p->x,p->y);
//	return p;
//}
//void output(const struct point *p)
//{
//	printf("%d %d\n",p->x,p->y);
//}



//#include <stdio.h>
//struct point {
//	int x;
//	int y;
//};
//
//struct point  getStruct(struct point p);
//struct point output(struct point p);
//
//int main(int argc,char const *argv[])
//{
//	struct point y={0,0};
//	y=getStruct(y);
//	output(y);
//	return 0;
//
//}
//struct point getStruct(struct point p)
//{
//	scanf("%d",&p.x);
//	scanf("%d",&p.y);
//	printf("%d %d\n",p.x,p.y);
//	return  p;
//}
//struct point output(struct point p)
//{
//	printf("%d %d\n",p.x,p.y);
//}




#include <stdio.h>

struct point{
	int x;
	int y;
};

struct point *getStruct(struct point *p);
void output(struct point p);
void print(const struct point *p);

int main(int argc,char const *argv[])
{
	struct point y;
	getStruct(&y);
	output(y);
	output(*getStruct(&y)); //**P 指向右边指针所指的指 最终指向了y 即struct point 
	print(getStruct(&y));
	*getStruct(&y)=(struct point){1,2};
	printf("%d %d",y.x,y.y);	
	
}
struct point *getStruct(struct point *p)
{
	scanf("%d",&(p->x));
	scanf("%d",&(p->y));
	printf("%d %d\n",p->x,p->y);
	return p;
}
void output(struct point p)//结构本身 
{
	printf("%d %d\n",p.x,p.y);	
} 
void print(const struct point *p)//指针 
{
	printf("%d %d",p->x,p->y);
} 






























































