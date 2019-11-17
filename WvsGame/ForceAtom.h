#pragma once

#include <vector>
#include "FieldRect.h"
#include "FieldPoint.h"

class OutPacket;
class User;
class Field;

struct ForceAtom
{
	enum ForceAtomType
	{
		e_DemonFury = 0x00, //�c�]���O
		e_PhantomCard = 0x01, //�ۼv�d�P
		e_TempestBlade = 0x02, //�N�Ӥ��C
		e_NetherShield = 0x03, //�޵P�l��
		e_AegisSystem = 0x05, //���ިt��
		e_PinpointSalvo = 0x06, //�l�a���b
		e_TriflingWind = 0x07, //�����뤧�b
		e_StormBringer = 0x08, //���ɨϪ�

		e_QuiverCartridge = 0x0A, //�]�۽b��
		e_AssassinsMark = 0x0B, //��Ȩ�L
		e_MesoExplosion = 0x0C, //�������u
		e_FoxSpirits = 0x0D, //�p���P

		e_ShadowBat = 0x0F, //�t�v����
		e_OrbitalFlame = 0x10, //�������K

		e_HomingBeacon = 0x14, //35101002, �l�ܭ��u
		e_LightningFusion = 0x1B, //���p�X�@
		e_FireUmpire = 0x1C, //400021001, ��������
		e_EnergeticExplosion = 0x1D, //400051011, ��q�z��
	};

	struct ForceAtomInfo
	{
		int dwKey = 0, 
			nInc = 0, 
			nFirstImpact = 0, 
			nSecondImpact = 0,
			nAngle = 0,
			nStartDelay = 0,
			dwCreateTime = 0,
			nMaxHitCount = 0,
			nEffectIdx = 0;

		FieldPoint ptStart;
	};

	FieldRect rcStart;
	bool m_bByMob = false, m_bToMob = false;

	int m_dwUserOwner = 0,
		m_dwTargetID = 0,
		m_nSkillID = 0,
		m_nForceAtomType = 0,
		m_dwFirstMobID = 0,
		m_nBulletItemID = 0,
		m_nArriveDir = 0,
		m_nArriveRange = 0;

	FieldPoint m_ptForcedTarget;
	std::vector<int> m_adwTargetMob;
	std::vector<ForceAtomInfo> m_aForceAtomInfo;

	void AddForceAtomInfo(ForceAtomType nType, int nInc, Field* pField, const FieldPoint& pt);
	void CreateForceAtom(int dwUserOwner, int nSkillID, bool bByMob, bool bToMob, int dwTargetID, ForceAtomType nType, int nInc, int nCount, Field* pField, const FieldPoint& pt);
	void OnForceAtomCreated(Field *pField);
};

