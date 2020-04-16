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
// <summary>��������ԭ��(DIP,Dependence Inversion Principle)</summary>
// ***********************************************************************

//���������ĳ�������У���������ԭ����ָ�������ģ����������ʽ��
//��ͳ��������ϵ�����ڸ߲�Σ�������Ĳ�������Ӧ���ڵͲ���ϡ�
//ʹ����������ԭ��ʹ�ø߲�����ڵײ��ʵ��ϸ�ڣ�������ϵ�����ã�ʹ�õͲ��ģ�������ڸ߲��ģ��ĳ���
#pragma once

#include <iostream>
#include "gtest/gtest.h"

//��������ԭ�����˼�����Ҫ��������ӿڱ�̡�
//
//��ʵ�ʵ���Ŀ�У������������ǣ�
//
//1. �Ͳ�ģ�龡��ȥ����������ͽӿ�
//
//2. �����������;���ʹ�ó�������߽ӿ��ࡣ
//
//3. �̳�����ѭ�����滻ԭ��

// �߲����ӿ�
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

// �Ͳ�ʵ��
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
	// ������ϵ
	SoliderInterface* solider = new FootSolider;
	WeaponInterface* weapon = new Gun;
	solider->FireEnemy(weapon);
}
