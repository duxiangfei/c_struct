/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   linkList.h
 * Author: captain
 *
 * Created on 2018年8月19日, 下午9:28
 */

#ifndef LINKLIST_H
#define LINKLIST_H

#ifdef __cplusplus
extern "C" {
#endif
#include "main.h"
    
struct singleLink{
    elementType val;
    struct singleLink * next;
};
typedef struct singleLink * psList;
typedef struct singleLink * Position;
bool isSingleLinkEmpty(psList L);
bool isSingleLinkLast(psList L, Position P);
Position singleListFind(psList L, elementType ele);
Position singleListFindPrevious(psList L, elementType ele);
bool singleLinkInsert(psList L, Position P, elementType ele);
bool singleLinkRemove(psList L, elementType ele);




#ifdef __cplusplus
}
#endif

#endif /* LINKLIST_H */

