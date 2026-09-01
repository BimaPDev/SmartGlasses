/* FUN_10119f16 @ 0x10119f16 */

void FUN_10119f16(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_1;
  iVar1 = FUN_10119e3a();
  uVar2 = FUN_10119e24(param_1,param_2 + iVar1,1,extraout_r3,uVar4);
  uVar3 = extraout_r3_00;
  if ((uVar2 & 1) == 0) {
    FUN_10119ee8(param_1,param_2 + iVar1);
    iVar1 = FUN_10119e3a(param_1,param_2);
    FUN_10119eaa(param_1,param_2,param_2 + iVar1);
    uVar3 = extraout_r3_01;
  }
  iVar1 = FUN_10119e24(param_1,param_2,0,uVar3,uVar4);
  uVar2 = FUN_10119e24(param_1,param_2 - iVar1,1);
  if ((uVar2 & 1) == 0) {
    FUN_10119ee8(param_1,param_2 - iVar1);
    iVar1 = FUN_10119e24(param_1,param_2,0);
    FUN_10119eaa(param_1,param_2 - iVar1,param_2);
    iVar1 = FUN_10119e24(param_1,param_2,0);
    param_2 = param_2 - iVar1;
  }
  FUN_10053dd4(param_1,param_2);
  return;
}

