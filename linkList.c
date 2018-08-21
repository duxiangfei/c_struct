/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"

/**
 * 
 * @param 链表的头部指针
 * @return bool
 */
bool isSingleLinkEmpty(psList L)
{
    return L->next == NULL;
}

/**
 * 
 * @param L 链表的头部指针
 * @param P 要判断的元素 
 * @return 
 */
bool isSingleLinkLast(psList L, Position P)
{
    return NULL == P->next;
}

/**
 * 
 * @param 链表的头部指针
 * @param ele 要查找的元素的值
 * @return 
 * 返回要包含要查找的元素的节点
 */
Position singleListFind(psList L, elementType ele)
{
    Position P;
    // 遍历链表，找出等于ele的posttion，然后退出
    P = L->next;
    while(P != NULL) {
        if(P->val == ele) {
            break;
        }    
        P = P->next;
    }
    
    return P;      
}

/**
 * 
 * @param 链表的头部指针
 * @param ele 要查找的元素的值
 * @return 
 * 返回要包含要查找的元素的节点的前一个节点
 */
Position singleListFindPrevious(psList L, elementType ele)
{
    Position P;
    
    P = L;
    // 遍历链表，找出等于ele的posttion，如果未找到，正好返回空
    while(P->next != NULL) {
        if(P->next->val == ele) {
            break;
        }
        P = P->next;
    }
    return P;      
}

/**
 * 
 * @param 链表的头部指针
 * @param ele 要删除的元素的值
 * @return 
 * 返回要包含要查找的元素的节点的前一个节点
 */
bool singleLinkRemove(psList L, elementType ele)
{
    Position P = singleListFindPrevious(L, ele);
    if(NULL == P) {
        DBGprint("元素未找到");
        return false;
    }
    Position removed = P->next;
    P->next = removed->next;
    free(removed);
}

/** 
 * @param  L 链表的头部指针
 * @param P 
 * @param ele
 * @return 
 * 在 P 后买插入新元素
 */
bool singleLinkInsert(psList L, Position P, elementType ele)
{
    Position newP = (Position) malloc(sizeof(struct singleLink));
    if(NULL == newP) {
        fatalError("out of memery!");
    }
    newP->val = ele;
    newP->next = P->next;
    P->next = newP;
    return true;
}

testSingleLink()
{
    
}




