/* FUN_140db868 @ 0x140db868 */

uint FUN_140db868(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_140db8a4;
  if (*DAT_140db8a4 == 0) {
    iVar2 = FUN_140dc29c();
    *piVar1 = iVar2;
  }
  uVar3 = FUN_140dc29c(param_1,param_2);
  if ((uVar3 == 0xffffffff) ||
     ((uVar4 = uVar3 + 3 & 0xfffffffc, uVar3 != uVar4 &&
      (iVar2 = FUN_140dc29c(param_1,uVar4 - uVar3), iVar2 == -1)))) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

