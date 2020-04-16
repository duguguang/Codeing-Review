// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="LKP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>最少知道原则(Least Knowledge Principle)</summary>
// ***********************************************************************

//得墨忒耳(迪米特)定律（Law of Demeter，缩写LoD）亦称为“最少知识原则（Principle of Least Knowledge）”，是一种软件开发的设计指导原则，特别是面向对象的程序设计。得墨忒耳(迪米特)定律是松耦合的一种具体案例。该原则是美国东北大学在1987年末在发明的，可以简单地以下面任一种方式总结:
//
//1. 每个单元对于其他的单元只能拥有有限的知识：只是与当前单元紧密联系的单元；
//
//2. 每个单元只能和它的朋友交谈：不能和陌生单元交谈；
//
//3. 只和自己直接的朋友交谈。
//
//这个原理的名称来源于希腊神话中的农业女神，孤独的得墨忒耳。

#pragma once
#include <iostream>
#include <vector>
#include "gtest/gtest.h"

class Maid
{
public:
	void cook()
	{

	}
};

using MaidList = std::vector<Maid>;

class Butler
{

public:
	void cook()
	{
		auto maids = getMaids(10);
		for (auto maid : maids)
		{
			maid.cook();
		}
	}

private:
	MaidList getMaids(int n)
	{
		MaidList maids;
		for (int i = 0; i < n; ++i)
		{
			maids.push_back(Maid());
		}
		return maids;
	}
};

class Master
{
public:
	void cookCommand(Butler butler)
	{
		butler.cook();
	}
};


TEST(LKP, test)
{

}