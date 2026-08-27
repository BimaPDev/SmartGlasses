/* FUN_14035530 @ 0x14035530 */

int FUN_14035530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_14035590;
  iVar3 = *DAT_14035590;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  iVar2 = *DAT_14035594;
  *piVar1 = iVar3 + 1;
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + param_1 * 4), iVar2 == 0)) {
    FUN_1402a6e8(4,0xf14,DAT_140355a0,DAT_1403559c,DAT_14035598,param_1);
    iVar2 = 0;
    iVar3 = *piVar1 + -1;
    *piVar1 = iVar3;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xa4);
    *piVar1 = iVar3;
    iVar2 = (iVar2 << 4) >> 4;
  }
  if (iVar3 != 0) {
    return iVar2;
  }
  FUN_1402e5f8();
  return iVar2;
}

