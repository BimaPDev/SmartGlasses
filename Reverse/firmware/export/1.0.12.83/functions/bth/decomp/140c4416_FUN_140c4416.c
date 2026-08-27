/* FUN_140c4416 @ 0x140c4416 */

void FUN_140c4416(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  uVar1 = *(int *)(iVar2 + -0xc) + 1;
  piVar4 = param_1;
  if ((*(uint *)(iVar2 + -8) < uVar1) || (uVar5 = param_2, 0 < *(int *)(iVar2 + -4))) {
    FUN_140c427a(param_1);
    uVar5 = uVar1;
  }
  iVar3 = *param_1;
  iVar2 = *(int *)(iVar3 + -0xc);
  *(char *)(iVar3 + iVar2) = (char)param_2;
  FUN_140c3ed0(*param_1 + -0xc,uVar1,iVar2,iVar3,piVar4,uVar5,param_3);
  return;
}

