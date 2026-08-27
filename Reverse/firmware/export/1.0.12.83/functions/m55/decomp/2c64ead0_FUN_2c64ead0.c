/* FUN_2c64ead0 @ 0x2c64ead0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c64ead0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar5 = _LAB_2c64eb30;
  iStack_18 = param_6;
  iStack_14 = param_7;
  iStack_20 = param_3;
  iStack_1c = param_4;
  do {
    iVar1 = iStack_20;
    if ((iStack_1c == iStack_20) || (iStack_14 == iStack_18)) {
      uVar5 = 0;
      goto LAB_2c64eb1a;
    }
    uVar3 = FUN_2c64e81e(&iStack_20,uVar5);
    iVar2 = iStack_20;
    if (uVar3 == 0xfffffffe) break;
    if (0x10ffff < uVar3) {
      uVar5 = 2;
      goto LAB_2c64eb1a;
    }
    iVar4 = func_0x2c64ea34(&iStack_18,uVar3,1);
    iVar2 = iVar1;
  } while (iVar4 != 0);
  iStack_20 = iVar2;
  uVar5 = 1;
LAB_2c64eb1a:
  *param_5 = iStack_20;
  *param_8 = iStack_18;
  return uVar5;
}

