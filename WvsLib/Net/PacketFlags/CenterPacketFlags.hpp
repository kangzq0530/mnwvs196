#pragma once
#include "PacketFlags.hpp"

#define MAKE_CENTER_SEND_PACKET_FLAG(flagName, value) namespace FlagInstances{ const static CenterSendPacketFlag flagName {value, #flagName}; } const static int flagName = value

MAKE_FLAG_COLLECTION_BODY(CenterSendPacketFlag)
//�H�U�}�l���U�ʥ]Opcode Flag

MAKE_CENTER_SEND_PACKET_FLAG(RegisterCenterAck, 1);
MAKE_CENTER_SEND_PACKET_FLAG(CenterStatChanged, 2);
MAKE_CENTER_SEND_PACKET_FLAG(CharacterListResponse, 3);
MAKE_CENTER_SEND_PACKET_FLAG(GameServerInfoResponse, 4);
MAKE_CENTER_SEND_PACKET_FLAG(CenterMigrateInResult, 5);
MAKE_CENTER_SEND_PACKET_FLAG(TransferChannelResult, 6);
MAKE_CENTER_SEND_PACKET_FLAG(MigrateCashShopResult, 7);

//Center To Shop
MAKE_CENTER_SEND_PACKET_FLAG(CashItemResult, 0x40);

//����Opcode Flag���U
FLAG_COLLECTION_BODY_END