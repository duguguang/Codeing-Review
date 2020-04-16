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
// <summary>�ӿڸ���ԭ��(ISP,Interface Segregation Principle)</summary>
// ***********************************************************************

//�ӿڸ���ԭ��Ӣ�interface - segregation principles�� ��д��ISP��ָ��û�пͻ���client��Ӧ�ñ�������������ʹ�÷�����
//�ӿڸ���ԭ��(ISP)��ַǳ��Ӵ�ӷ�׵Ľӿڳ�Ϊ��С�ĺ͸�����Ľӿڣ������ͻ�����ֻ��Ҫ֪�����Ǹ���Ȥ�ķ�����
//������С�Ľӿ�Ҳ����Ϊ��ɫ�ӿڣ�role interfaces����
//�ӿڸ���ԭ��(ISP)��Ŀ����ϵͳ�⿪��ϣ��Ӷ������ع������ĺ����²���----WIKIPEDIA

#pragma once
#include <iostream>
#include "gtest/gtest.h"

// ��ԭʼ��������
class Animal
{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
};

// ��������
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