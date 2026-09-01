/* FUN_10053ea0 @ 0x10053ea0 */

void FUN_10053ea0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = *param_1;
  if (*(uint *)(iVar5 + 8) < 0x8000) {
    iVar3 = 4;
  }
  else {
    iVar3 = 8;
  }
  uVar4 = (uint)((param_2 - iVar3) - iVar5) >> 3;
  uVar6 = FUN_10119e24(iVar5,uVar4,1);
  iVar3 = (int)uVar6 << 0x1f;
  if (-1 < iVar3) {
    FUN_10119dc2(DAT_10053f44,DAT_10053f40,DAT_10053f3c,0x9a,uVar6);
    FUN_10119dc2(DAT_10053f48,param_2);
    FUN_1011a1f0(DAT_10053f3c,0x9a,extraout_r2,iVar3);
  }
  iVar3 = FUN_10119e3a(iVar5,uVar4);
  uVar6 = FUN_10119e24(iVar5,uVar4 + iVar3,0);
  uVar1 = (uVar4 + iVar3) - (int)uVar6;
  if (uVar4 != uVar1) {
    FUN_10119dc2(DAT_10053f44,DAT_10053f4c,DAT_10053f3c,0xa2,uVar1,(int)((ulonglong)uVar6 >> 0x20));
    FUN_10119dc2(DAT_10053f50,param_2);
    FUN_1011a1f0(DAT_10053f3c,0xa2,extraout_r2_00,extraout_r3);
  }
  uVar2 = FUN_10119e46(iVar5,uVar4,0);
  FUN_10119f16(uVar2,uVar4);
  return;
}

