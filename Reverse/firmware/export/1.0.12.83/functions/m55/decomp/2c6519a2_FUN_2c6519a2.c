/* FUN_2c6519a2 @ 0x2c6519a2 */

void FUN_2c6519a2(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar3 = *param_1;
  uVar2 = *(int *)(iVar3 + -0xc) + 1;
  piVar5 = param_1;
  if ((*(uint *)(iVar3 + -8) < uVar2) || (uVar6 = param_2, 0 < *(int *)(iVar3 + -4))) {
    FUN_2c651802(param_1);
    iVar3 = extraout_r2;
    uVar6 = uVar2;
  }
  iVar1 = *param_1;
  iVar4 = *(int *)(iVar1 + -0xc);
  *(uint *)(iVar1 + iVar4 * 4) = param_2;
  FUN_2c6514b0(iVar1 + -0xc,uVar2,iVar3,iVar4,piVar5,uVar6,param_3);
  return;
}

