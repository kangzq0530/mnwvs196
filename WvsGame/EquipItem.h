#pragma once
#include <string>
#include "BasicItemStat.h"

struct EquipItem
{
	std::string sItemName;
	BasicAbilityStat abilityStat;
	BasicIncrementStat incStat;

	//��O�ݨD request
	int nItemID,
		nrSTR,
		nrINT,
		nrDEX,
		nrLUK,
		nrPOP,
		nrJob,
		nrLevel,
		nrMobLevel,
		nRUC,
		nSellPrice,
		nSwim,
		nTamingMob,
		nKnockBack,
		nIncRMAF,
		nIncRMAI,
		nIncRMAL,
		nElemDefault,
		nCuttable,
		//�ϥΦ��˳ƹ��d�����v�T
		dwPetAbilityFlag;
};

