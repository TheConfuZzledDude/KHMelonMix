/*
    Copyright 2016-2024 melonDS team

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef LOCALMP_H
#define LOCALMP_H

#include "types.h"

namespace LocalMP
{

using namespace melonDS;
bool Init();
void DeInit();

void SetRecvTimeout(int timeout);

void Begin(int inst);
void End(int inst);

int SendPacket(int inst, u8* data, int len, u64 timestamp);
int RecvPacket(int inst, u8* data, u64* timestamp);
int SendCmd(int inst, u8* data, int len, u64 timestamp);
int SendReply(int inst, u8* data, int len, u64 timestamp, u16 aid);
int SendAck(int inst, u8* data, int len, u64 timestamp);
int RecvHostPacket(int inst, u8* data, u64* timestamp);
u16 RecvReplies(int inst, u8* data, u64 timestamp, u16 aidmask);

}

#endif // LOCALMP_H
