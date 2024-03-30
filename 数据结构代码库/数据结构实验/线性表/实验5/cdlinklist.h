#ifndef CDLINKLIST_H
#define CDLINKLIST_H

typedef int ElemType;
typedef struct DNode		//定义双链表结点类型
{
	ElemType data;
	struct DNode *prior;	//指向前驱结点
	struct DNode *next;		//指向后继结点
} DLinkNode;

void CreateListF(DLinkNode *&L, ElemType a[], int n); //头插法建立循环双链表
void CreateListR(DLinkNode *&L, ElemType a[], int n); //尾插法建立循环双链表
void InitList(DLinkNode *&L);	//初始化线性表
void DestroyList(DLinkNode *&L);	//销毁线性表
bool ListEmpty(DLinkNode *L);	//判线性表是否为空表
int ListLength(DLinkNode *L);	//求线性表的长度
void DispList(DLinkNode *L);	//输出线性表
bool GetElem(DLinkNode *L, int i, ElemType &e);	//求线性表中第i个元素值
int LocateElem(DLinkNode *L, ElemType e);	//查找第一个值域为e的元素序号
bool ListInsert(DLinkNode *&L, int i, ElemType e);	//插入第i个元素
bool ListDelete(DLinkNode *&L, int i, ElemType &e); //删除第i个元素

#endif // !CDLINKLIST_H
