#include<stdio.h>

/* ��fahr= 0��20��..., 300ʱ���ֱ�
   ��ӡ�����¶Ⱥ������¶ȶ��ձ�  */
main(){
	int fahr,celsius;
	int low,high,step;

	low = 0;		/*  �¶ȱ������  */
	high = 300;		/*  �¶ȱ������  */
	step = 20;		/*  ����  */

	fahr = low;
	while(fahr <= high){
		celsius = 5 * (fahr-32) / 9;
		printf("%8d%8d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
