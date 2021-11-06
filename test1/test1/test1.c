//#include<string.h>//引入strlen
//#include <stdio.h>
//
////'\0'的重要性
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//数a,b,c一共三个
//	printf("%d\n", strlen(arr2));//得到的长度应该是随机值，因为直到找到\0
//	return 0;
//}


//int main()
//{
//	char arr1[]="abc";//数组
//	//"abc" -- 'a','b','c','\0'('\0'--是字符串的结束标志）'\0'的值是0，隐藏在字符串末尾的
//	//两者的比较，找出问题所在
//	char arr2[] = { 'a','b','c',0};//也可以放'\0',作为结束标志
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}