/* FUN_140c4024 @ 0x140c4024 */

void FUN_140c4024(int *param_1,int param_2,int param_3,int param_4)

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
    iVar1 = FUN_140c3ee8(uVar3,*(uint *)(iVar1 + -8),&iStack_2c);
    if (param_2 != 0) {
      FUN_140c3df2(iVar1 + 0xc,*param_1,param_2);
    }
    if (iVar2 != 0) {
      FUN_140c3df2(param_2 + 0xc + param_4 + iVar1,*param_1 + iVar4,iVar2);
    }
    FUN_140c3fc8(*param_1 + -0xc,&iStack_2c);
    *param_1 = iVar1 + 0xc;
  }
  else if ((iVar2 != 0) && (param_4 != param_3)) {
    FUN_140c3e0a(iVar1 + param_2 + param_4,iVar1 + iVar4,iVar2,*(int *)(iVar1 + -4),param_1);
  }
  FUN_140c3ed0(*param_1 + -0xc,uVar3);
  return;
}

