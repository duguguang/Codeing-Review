// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="ISP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>接口隔离原则(ISP,Interface Segregation Principle)</summary>
// ***********************************************************************

//接口隔离原则（英语：interface - segregation principles， 缩写：ISP）指明没有客户（client）应该被迫依赖于它不使用方法。
//接口隔离原则(ISP)拆分非常庞大臃肿的接口成为更小的和更具体的接口，这样客户将会只需要知道他们感兴趣的方法。
//这种缩小的接口也被称为角色接口（role interfaces）。
//接口隔离原则(ISP)的目的是系统解开耦合，从而容易重构，更改和重新部署。----WIKIPEDIA

#pragma once
#include <iostream>
#include "gtest/gtest.h"

// 最原始公共抽象
class Animal
{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
};

// 二级抽象
class carnivores : public Animal
{
public:
	virtual void run() = 0;
};

class Dog : public carnivores
{

public:
	void run() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	void eat() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	void sleep() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

};

class Bird : public Animal
{
public:
	virtual void fly() = 0;
};

class nightingale : public  Bird
{

public:
	void fly() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	void eat() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


	void sleep() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

};

TEST(DIP, test)
{


}