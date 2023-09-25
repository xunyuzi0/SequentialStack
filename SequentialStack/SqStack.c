#define STACK_INIT_SIZE 100//顺序栈初始化分配空间大小
#define STACK_INCREMENT 10//栈满时分配的空间增量

﻿#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

//！！基于顺序存储结构的栈！！
//本程序完成了顺序栈数据结构及部分算法

typedef struct SqStack {

	int* pBase;//存储首地址，作为栈底
	int* pTop;//存储下一个待存地址，作为栈顶
	int StackSize;//栈的最大空间

}Stack,*PStack;


bool InitStack(PStack);
bool ClearStack(PStack);
bool IsEmpty(PStack);
int StackLength(PStack);
bool GetTop(PStack);
bool pop(PStack, int*);
bool push(PStack, int);
bool StackTraverseShow(PStack);


int main() {


	return 0;
}