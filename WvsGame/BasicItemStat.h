#pragma once

/*
�Ӫ��~�y������O�����ݩ� -- ���A�S���o��class
*/
struct BasicIncrementStat
{
	//�W�[ inc
	int	niSTR = 0,
		niDEX = 0,
		niINT = 0,
		niLUK = 0,
		niMaxHP = 0,
		niMaxMP = 0,
		niPAD = 0,
		niMAD = 0,
		niPDD = 0,
		niMDD = 0,
		niACC = 0,
		niEVA = 0,
		niCraft = 0,
		niSpeed = 0,
		niJump = 0,
		niSwim = 0,
		niFatigue = 0;
};

/*
�Ӫ��~�������ݩʡA�Ҧp�i�_����� -- ���A�S���o��class
*/
struct BasicAbilityStat
{
	int nAttribute = 0;

	bool bTimeLimited = false,
		bCash = false,
		bPartyQuest = false,
		bBigSize = false;
};