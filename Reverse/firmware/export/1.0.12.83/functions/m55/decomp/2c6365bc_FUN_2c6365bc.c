/* FUN_2c6365bc @ 0x2c6365bc */

void FUN_2c6365bc(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_2a;
  short local_28;
  short local_26;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = *DAT_2c63666c;
  if (0x168 < param_2) {
    param_2 = param_2 - 0x168 & 0xffff;
  }
  if (0x168 < param_3) {
    param_3 = param_3 - 0x168 & 0xffff;
  }
  uVar3 = *(ushort *)(param_1 + 0x24) + param_2 & 0xffff;
  uVar4 = *(ushort *)(param_1 + 0x24) + param_3 & 0xffff;
  if (0x168 < uVar3) {
    uVar3 = uVar3 - 0x168 & 0xffff;
  }
  if (0x168 < uVar4) {
    uVar4 = uVar4 - 0x168 & 0xffff;
  }
  FUN_2c6363e0(param_1,&local_28,&local_2a);
  sVar1 = FUN_2c6033b4(param_1,param_4,0x50);
  iVar2 = FUN_2c6033b4(param_1,param_4,0x51);
  FUN_2c614fc0((int)local_28,(int)local_26,local_2a,uVar3,uVar4,(int)sVar1,iVar2 != 0,auStack_24);
  FUN_2c6078f0(param_1,auStack_24);
  if (*DAT_2c63666c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

