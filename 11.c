/*
题目：
编写一个程序，输入一个字符串（长度不超过20），然后把这个字符串内的每一个字符进行大小写变换，即将大写字母变成小写，小写字母变成大写，然后把这个新的字符串输出。
*/
/*
思路：
遍历所有的字符，之后实现大小写转换
*/
#include<stdio.h>
#include<string.h>
int f(int a,int b,int c)
{
	static i=0;
	if(a>0)f(a-1,b,c);
	if(b>0)f(a,b-1,c);
	if(c>0)f(a,b,c-1);
	if(a==0&&b==0&&c==0)
		i++;
	return i;
}
void main()
{
	printf("%d",f(3,4,5)/12);
	return;
}