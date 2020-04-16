// ***********************************************************************
// Assembly         : 
// Author           : VULCAN
// Created          : 04-16-2020
//
// Last Modified By : VULCAN
// Last Modified On : 04-15-2020
// ***********************************************************************
// <copyright file="LSP.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>里氏替换原则(LSP,Liskov Substitution Principle)</summary>
// ***********************************************************************

// 里氏替换原则的内容可以描述为： “派生类（子类）对象能够替换其基类（超类）对象被使用。

//1. 子类不要覆盖父类的非抽象的方法。可以实现其抽象方法。
//
//2. 子类可以实现自己独有的方法。
//
//3. 子类的方法重写父类方法的时候，参数部分，要比父类的参数范围要大或者等于（宽松）。释义：举个例子 > 如果说父类的方法中形参是ArrayList, 那么，其子类重写这个方法的时候，形参要是List.
//
//4. 子类重写父类方法的时候，返回值要求，父类的返回值要比子类的返回值要小于或者等于。
#pragma once

#include <iostream>
#include "gtest/gtest.h"

class Animal
{
public:
	Animal(const std::string& name):_name(name)
	{

	}

	// 抽象方法
	virtual void sleep() const
	{
		std::cout << "Animal Sleep" << std::endl;
	}

	// 非抽象方法
	const std::string& getName() const
	{
		return _name;
	}

private:
	std::string _name;
};

class Dog : public Animal
{
public: 
	Dog(const std::string& name) : Animal(name)
	{

	}

	// 重写父类抽象方法
	virtual void sleep() const override
	{
		std::cout << "dog Sleep" << std::endl;
	}

	// 子类独立方法
	void Bark() const {
		std::cout << "dog Bark" << std::endl;
	}
};


TEST(LSP, AnimalTest)
{
	// 父类替换为子类时行为不发生变化
	Animal *animal = new Dog("kali");
	EXPECT_EQ(animal->getName(), "kali");
}