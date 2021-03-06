/*************************************************************************
	> File Name: class.h
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时28分46秒
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

typedef void demo;
typedef void inherit;

demo *demo_init(int i, int j);
int getA(demo *pthis);
int getB(demo *pthis);
int add(demo *pthis, int value);
void free_demo(demo *pthis);

inherit *inherit_init(int i, int j, int k);
int getC(inherit *pthis);
int add1(inherit *pthis, int value);
void free_inherit(inherit *pthis);

#endif
