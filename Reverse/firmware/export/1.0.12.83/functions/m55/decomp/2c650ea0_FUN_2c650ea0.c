/* FUN_2c650ea0 @ 0x2c650ea0 */

void FUN_2c650ea0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = *param_1;
  iVar4 = param_3 + param_2;
  uVar3 = (param_4 - param_3) + *(int *)(iVar1 + -0xc);
  iVar2 = *(int *)(iVar1 + -0xc) - iVar4;
  iStack_2c = param_2;
  iStack_28 = param_3;
  if ((*(uint *)(iVar1 + -8) < uVar3) || (0 < *(int *)(iVar1 + -4))) {
    iVar1 = FUN_2c650d64(uVar3,*(uint *)(iVar1 + -8),&iStack_2c);
    if (param_2 != 0) {
      FUN_2c650c6e(iVar1 + 0xc,*param_1,param_2);
    }
    if (iVar2 != 0) {
      FUN_2c650c6e(param_2 + 0xc + param_4 + iVar1,*param_1 + iVar4,iVar2);
    }
    FUN_2c650e44(*param_1 + -0xc,&iStack_2c);
    *param_1 = iVar1 + 0xc;
  }
  else if ((iVar2 != 0) && (param_4 != param_3)) {
    FUN_2c650c86(iVar1 + param_2 + param_4,iVar1 + iVar4,iVar2,*(int *)(iVar1 + -4),param_1);
  }
  FUN_2c650d4c(*param_1 + -0xc,uVar3);
  return;
}

