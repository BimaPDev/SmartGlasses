/* FUN_2c6515d4 @ 0x2c6515d4 */

void FUN_2c6515d4(int *param_1,int param_2,int param_3,int param_4)

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
    iVar1 = FUN_2c6514c8(uVar3,*(uint *)(iVar1 + -8),&iStack_2c);
    if (param_2 != 0) {
      FUN_2c6513e8(iVar1 + 0xc,*param_1,param_2);
    }
    if (iVar2 != 0) {
      FUN_2c6513e8(iVar1 + (param_4 + param_2) * 4 + 0xc,*param_1 + iVar4 * 4,iVar2);
    }
    FUN_2c6515a4(*param_1 + -0xc,&iStack_2c);
    *param_1 = iVar1 + 0xc;
  }
  else if ((iVar2 != 0) && (param_4 != param_3)) {
    FUN_2c651400(iVar1 + (param_4 + param_2) * 4,iVar1 + iVar4 * 4,iVar2,*(int *)(iVar1 + -4),
                 param_1);
  }
  FUN_2c6514b0(*param_1 + -0xc,uVar3);
  return;
}

