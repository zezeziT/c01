
//#include <stdio.h>
////结构数组  这一秒的下一秒 
//struct time{
//	int hour;
//	int minutes;
//	int seconds;
//}; 
//struct time testTimesupdate(struct time *p);
//int main(void)
//{
//	struct time testTimes[]={
//		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27} 
//	};
//	int i; 
//	for(i=0;i<5;i++){
//		testTimesupdate(&testTimes[i]);	
//	} 
//	printf("{");
//	for(i=0;i<5;i++){
//		printf("{%d %d %d}",testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);	
//	} 
//	printf("}");
//	
//}
//
//struct time testTimesupdate(struct time *p)  // 数组好像可以直接传然后被改变 这里可以直接传数组？ 
//{
//	if(p->seconds!=59){
//			p->seconds++;
//		}else{
//			p->seconds=00;
//			p->minutes++;
//			if(p->minutes==60){
//				p->minutes=00;
//				p->hour++;
//				if(p->hour==24){
//					p->hour=00;	
//				}
//						
//			}		
//		}
//}

//{
//	if(testTimes[i].seconds!=59){
//			testTimesupdate[i].seconds=testTimes[i].seconds+1;
//		}else{
//			testTimesupdate[i].seconds=00;
//			testTimesupdate[i].minutes=testTimes[i].minutes+1;
//			if(testTimesupdate[i].minutes==60){
//				testTimesupdate[i].minutes=00;
//				testTimesupdate[i].hour=testTimes[i].hour+1;
//				if(testTimes[i].hour==24){
//					testTimesupdate[i].hour=00;	
//				}
//						
//			}		
//		}
//}



//老师的 两点 1 数组可以直接把传且被改变 2 printf可以算的时候顺便输出 就不用再循环遍历一次了  3. now++ 不用判断是否！=59s 看+完后结果就可以 
#include <stdio.h>
//结构数组  这一秒的下一秒 
struct time{
	int hour;
	int minutes;
	int seconds;
}; 
struct time testTimesupdate(struct time now);
int main(void)
{
	struct time testTimes[]={
		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27} 
	};
	int i; 
	
	for(i=0;i<5;i++){
		printf("nowtime is {%2i %2i %2i} ",testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
		testTimes[i]=testTimesupdate(testTimes[i]);	//可以直接传数组值被改变 不传指针   数组的值也相当于一个地址？ 
		printf("nexsecond is {%2i %2i %2i}}\n",testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
	} 
}

struct time testTimesupdate(struct time now)  // 数组好像可以直接传然后被改变 这里可以直接传数组？ 
{
	++now.seconds;
	if (now.seconds == 60) {
	    now.seconds = 0;
	    ++now.minutes;
	    if (now.minutes == 60) {
	        now.minutes = 0;
	        ++now.hour;
	        if (now.hour == 24) {
	            now.hour = 0;
	        }
	    }
	}
    
    
//	if(now.seconds!=59){
//			now.seconds++;
//		}
//		else{
//			now.seconds=00;
//			now.minutes++;
//			if(now.minutes==60){
//				now.minutes=00;
//				now.hour++;
//				if(now.hour==24){
//					now.hour=00;	
//				}
//						
//			}		
//		}
	return now;
}

















