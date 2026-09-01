/* FUN_100358f0 @ 0x100358f0 */

void FUN_100358f0(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte local_80 [6];
  undefined1 local_7a;
  undefined1 auStack_79 [93];
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_100359e0;
  uVar6 = ((int)PTR_DAT_100359e4 - (int)PTR_DAT_100359e8) * 0x20 & 0xff00;
  FUN_100a5b78(uVar6 | 0x4e0032,PTR_s_ring_send_data_100359ec,
               PTR_s_ring_send_data_cmd_0x_x__len__d__100359f0,param_1,param_3);
  iVar1 = (**(code **)(PTR_DAT_100359f4 + 8))();
  if (iVar1 == 0) goto LAB_100359ca;
  FUN_1011ea48(local_80 + 4,0,0x60);
  local_80[0] = 0xaa;
  local_80[1] = 0x55;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = (char)param_3 + '\x01';
  local_7a = (char)param_1;
  if (param_2 == 0) goto LAB_100359d8;
  if (param_3 == 0) goto LAB_100359d8;
  if (0x5c < param_3) {
    param_3 = 0x5d;
  }
  FUN_1013d03e(auStack_79,param_2,param_3,0x5d);
  uVar4 = param_3 + 7 & 0xff;
  while( true ) {
    bVar5 = 0;
    uVar3 = 0;
    pbVar2 = local_80 + 2;
    do {
      uVar3 = uVar3 + 1;
      bVar5 = bVar5 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 < uVar4 - 2);
    local_80[uVar4] = bVar5;
    local_80[uVar4 + 1 & 0xff] = 0xd;
    uVar3 = uVar4 + 3 & 0xff;
    local_80[uVar4 + 2 & 0xff] = 10;
    FUN_100a5b78(uVar6 | 0x6e0032,PTR_s_ring_send_data_100359ec,
                 PTR_s_ring_send_data_data__d__len__d__100359f8,0xaa,uVar3);
    FUN_10051b78(local_80,uVar3);
LAB_100359ca:
    if (*(int *)PTR_DAT_100359e0 == local_1c) break;
    FUN_1013cdc0();
LAB_100359d8:
    uVar4 = 7;
  }
  return;
}

