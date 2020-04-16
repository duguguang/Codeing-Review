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
// <summary>�����滻ԭ��(LSP,Liskov Substitution Principle)</summary>
// ***********************************************************************

// �����滻ԭ������ݿ�������Ϊ�� �������ࣨ���ࣩ�����ܹ��滻����ࣨ���ࣩ����ʹ�á�

//1. ���಻Ҫ���Ǹ���ķǳ���ķ���������ʵ������󷽷���
//
//2. �������ʵ���Լ����еķ�����
//
//3. ����ķ�����д���෽����ʱ�򣬲������֣�Ҫ�ȸ���Ĳ�����ΧҪ����ߵ��ڣ����ɣ������壺�ٸ����� > ���˵����ķ������β���ArrayList, ��ô����������д���������ʱ���β�Ҫ��List.
//
//4. ������д���෽����ʱ�򣬷���ֵҪ�󣬸���ķ���ֵҪ������ķ���ֵҪС�ڻ��ߵ��ڡ�
#pragma once

#include <iostream>
#include "gtest/gtest.h"

class Animal
{
public:
	Animal(const std::string& name):_name(name)
	{

	}

	// ���󷽷�
	virtual void sleep() const
	{
		std::cout << "Animal Sleep" << std::endl;
	}

	// �ǳ��󷽷�
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

	// ��д������󷽷�
	virtual void sleep() const override
	{
		std::cout << "dog Sleep" << std::endl;
	}

	// �����������
	void Bark() const {
		std::cout << "dog Bark" << std::endl;
	}
};


TEST(LSP, AnimalTest)
{
	// �����滻Ϊ����ʱ��Ϊ�������仯
	Animal *animal = new Dog("kali");
	EXPECT_EQ(animal->getName(), "kali");
}