#ifndef LINKLIST_H
#define LINKLIST_H

typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode *next; //指向后继结点
}LinkNode; //声明双链表结点类型

void CreateListF(LinkNode *&L, ElemType a[], int n); //头插法建双链表
void CreateListR(LinkNode *&L, ElemType a[], int n); //尾插法建双链表
void InitList(LinkNode *&L); //初始化线性表
void DestroyList(LinkNode *&L); //销毁线性表
bool ListEmpty(LinkNode *L); //判线性表是否为空表
int ListLength(LinkNode *L); //求线性表的长度
void DispList(LinkNode *L); //输出线性表
bool GetElem(LinkNode *L, int i, ElemType &e); //求线性表中第i个元素值
int LocateElem(LinkNode *L, ElemType e); //查找第一个值域为e的元素序号
bool ListInsert(LinkNode *&L, int i, ElemType e); //插入第i个元素
bool ListDelete(LinkNode *&L, int i, ElemType &e); //删除第i个元素

#endif
