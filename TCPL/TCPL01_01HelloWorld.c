/*
#include<stdio.h>  //告诉编译器本程序包含标准输入/输出库的信息
main(){
	printf("hello, world\n");
}
*/


/*
#include<stdio.h>
main(){
	printf("hello, world
	");  //常量中有换行符
}
*/


/*
#include<stdio.h>
main(){
	printf("hello, ");
	printf("world");
	printf("\n");
}
*/


#include<stdio.h>
main(){
	printf("hello, ");
	printf("\tworld\\");
	printf("\n");
	printf("\\\\");
	printf("\n");
	printf("abc\b");     //输出abc
	printf("\n");
	printf("abc\bdef");  //输出abdef
	printf("\n");
	printf("\"");
	printf("\n");
}

