/* FUN_100485d8 @ 0x100485d8 */

void FUN_100485d8(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_38;
  undefined1 *local_34;
  uint3 local_30;
  undefined1 uStack_2d;
  int local_2c;
  
  local_2c = *(int *)PTR_DAT_100486b0;
  local_38 = 0;
  local_34 = (undefined1 *)0x0;
  _local_30 = 0;
  bVar1 = FUN_1011ea10();
  uVar4 = (uint)bVar1;
  if (0x13 < uVar4) {
    uVar4 = 0x14;
  }
  uVar2 = FUN_1011ea10(param_2);
  uVar5 = (uint)uVar2;
  if (0x1ff < uVar5) {
    uVar5 = 0x200;
  }
  iVar7 = uVar5 + uVar4 + 4;
  puVar3 = (undefined1 *)thunk_FUN_1009f30c(iVar7,PTR_s_ble_send_message_100486b4);
  uVar6 = ((int)PTR_DAT_100486b8 - (int)PTR_DAT_100486bc) * 0x20 & 0xff00;
  if (puVar3 != (undefined1 *)0x0) goto LAB_10048654;
  FUN_100a5b78(uVar6 | 0x1c60031,DAT_100486c4,DAT_100486c0);
  while( true ) {
    if (*(int *)PTR_DAT_100486b0 == local_2c) break;
    FUN_1013cdc0();
LAB_10048654:
    local_38 = CONCAT22(local_38._2_2_,0xc04);
    FUN_100a5b78(DAT_100486c8 | uVar6,DAT_100486c4,DAT_100486cc,param_1,param_2);
    *puVar3 = (char)uVar4;
    FUN_1011ea40(puVar3 + 1,param_1,uVar4);
    puVar3[uVar4 + 1] = (char)(uVar5 >> 8);
    puVar3[uVar4 + 2] = (char)uVar5;
    FUN_1011ea40(puVar3 + uVar4 + 3,param_2,uVar5);
    local_30 = (uint3)(ushort)iVar7;
    local_34 = puVar3;
    FUN_100506fc(&local_38);
    FUN_1012d1f4(puVar3);
  }
  return;
}

