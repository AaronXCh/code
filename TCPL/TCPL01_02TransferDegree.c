#include<stdio.h>

/* 当fahr= 0，20，..., 300时，分别
   打印华氏温度和摄氏温度对照表  */
main(){
	int fahr,celsius;
	int low,high,step;

	low = 0;		/*  温度表的下限  */
	high = 300;		/*  温度表的上限  */
	step = 20;		/*  步长  */

	fahr = low;
	while(fahr <= high){
		celsius = 5 * (fahr-32) / 9;
		printf("%8d%8d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
