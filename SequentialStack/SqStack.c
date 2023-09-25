#define STACK_INIT_SIZE 100//顺序栈初始化分配空间大小
#define STACK_INCREMENT 10//栈满时分配的空间增量

#include<stdio.h>
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
bool IsFully(PStack);
int StackLength(PStack);
bool GetTop(PStack);
bool pop(PStack, int*);
bool push(PStack, int);
bool StackTraverseShow(PStack);


int main() {

	Stack S;
	InitStack(&S);



	return 0;
}

//初始化顺序栈
bool InitStack(PStack ps) {

	ps->pBase = (int*)malloc(sizeof(int) * STACK_INIT_SIZE);
	if (ps->pBase == NULL) {
		printf("动态内存分配失败！");
		exit(-1);
	}
	ps->pTop = ps->pBase;
	ps->StackSize = STACK_INIT_SIZE;

	return true;
}

//将栈置空
bool ClearStack(PStack ps) {

}

//判空，空返回true，满返回false
bool IsEmpty(PStack ps) {

}

//判满，满返回true，空返回false
bool IsFully(PStack ps) {
	return(ps->pTop - ps->pBase >= ps->StackSize);
}

//获得栈的有效长度
int StackLength(PStack ps) {

}

//获得栈顶值而不出栈
bool GetTop(PStack ps) {

}

//出栈
bool pop(PStack ps, int* val) {

}

//压栈
bool push(PStack ps, int val) {

	//若顺序栈已满则追加储存空间
	if (IsFully(ps)) {
		ps->pBase = (int*)realloc(ps->pBase,
			sizeof(int) * (ps->StackSize + STACK_INCREMENT));

		//检验分配是否成功
		if (ps->pBase == NULL) {
			printf("动态内存分配失败！");
			exit(-1);
		}
		//更新ps结构体的各个值
		ps->pTop = ps->pBase + ps->StackSize;//注意！！指针+数字
		ps->StackSize += STACK_INCREMENT;
	}
	
	*ps->pTop = val;//压栈
	ps->pTop++;//更新pTop指针

	return true;
}

//遍历输出栈
bool StackTraverseShow(PStack ps) {

}