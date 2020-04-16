// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="DIP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>依赖倒置原则(DIP,Dependence Inversion Principle)</summary>
// ***********************************************************************

//在面向对象的程序设计中，依赖倒置原则是指解耦软件模块的特殊的形式。
//传统的依赖关系建立在高层次，而具体的策略设置应用在低层次上。
//使用依赖倒置原则，使得高层独立于底层的实现细节，依赖关系被倒置，使得低层次模块依赖于高层次模块的抽象。
#pragma once

#include <iostream>
#include "gtest/gtest.h"

//依赖倒置原则核心思想就是要我们面向接口编程。
//
//在实际的项目中，尽量做到的是：
//
//1. 低层模块尽量去依赖抽象类和接口
//
//2. 变量声明类型尽量使用抽象类或者接口类。
//
//3. 继承中遵循里氏替换原则。

// 高层抽象接口
class WeaponInterface;

class SoliderInterface
{
public:
	virtual void FireEnemy(WeaponInterface* gun) = 0;
};

class WeaponInterface
{
public:
	virtual void shoot() = 0;
};

// 低层实现
class FootSolider : public SoliderInterface
{

public:
	void FireEnemy(WeaponInterface* gun) override
	{
		
	}

};

class Gun : public WeaponInterface
{

public:
	void shoot() override
	{
		
	}

};

class Grenades : public WeaponInterface
{

public:
	void shoot() override
	{
		
	}

};

TEST(DIP, test)
{
	// 依赖关系
	SoliderInterface* solider = new FootSolider;
	WeaponInterface* weapon = new Gun;
	solider->FireEnemy(weapon);
}
