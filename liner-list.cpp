// liner-list 
// 零个或多个数据元素的有限序列。
#include<cstdlib>
#define MAXSIZE 20
#define OVERFLOW -1
typedef int ElemType;

//定义表结构
typedef struct liner_list
{
    ElemType *elem;//初始位置
    int Length;//个数
    int listsize;//容量大小
}SqList;

//初始化
void Init_SqList(SqList &L){
    L.elem = (ElemType *)malloc(MAXSIZE*sizeof(ElemType));//分配动态内存
    if(!L.elem){//若内存分配失败，退出程序
        exit(OVERFLOW);
    }
    L.Length = 0;//初始化表长度
    L.listsize = MAXSIZE;//初始化表容量
}

//销毁
void Destory_SqList(SqList &L){
    
}