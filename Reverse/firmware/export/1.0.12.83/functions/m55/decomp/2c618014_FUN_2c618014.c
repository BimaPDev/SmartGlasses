/* FUN_2c618014 @ 0x2c618014 */

void FUN_2c618014(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = *DAT_2c6180d8;
  FUN_2c617f00(auStack_24,param_1,param_3,0);
  FUN_2c6078f0(param_1,auStack_24);
  iVar2 = FUN_2c6073ec(param_1);
  sVar1 = FUN_2c6033b4(param_1,0,0x50);
  bVar5 = *(byte *)(param_1 + 0x3c) & 3;
  iVar3 = iVar2 - sVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
  }
  if (bVar5 == 1) {
    bVar5 = *(byte *)(param_1 + 0x26);
  }
  else {
    if (bVar5 != 2) {
      sVar1 = *(short *)(param_1 + 0x24);
      goto LAB_2c618064;
    }
    bVar5 = *(byte *)(param_1 + 0x27);
  }
  sVar1 = (short)(uint)((ulonglong)DAT_2c6180dc * (ulonglong)((uint)bVar5 * 0x168) >> 0x25);
LAB_2c618064:
  iVar4 = FUN_2c62e208((int)sVar1);
  *(short *)(param_1 + 0x28) = (short)((iVar3 >> 1) * iVar4 >> 0xf);
  iVar4 = FUN_2c62e208((int)(short)(sVar1 + 0x5a));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  sVar1 = (short)((uint)(iVar2 << 0xf) >> 0x10);
  *(short *)(param_1 + 0x2a) = sVar1 + (short)((iVar3 >> 1) * iVar4 >> 0xf);
  *(short *)(param_1 + 0x28) = sVar1 + *(short *)(param_1 + 0x28);
  FUN_2c617f00(auStack_24,param_1);
  FUN_2c6078f0(param_1,auStack_24);
  if (*DAT_2c6180d8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

