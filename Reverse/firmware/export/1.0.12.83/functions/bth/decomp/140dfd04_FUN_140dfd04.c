/* FUN_140dfd04 @ 0x140dfd04 */

undefined4 FUN_140dfd04(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_140dfd44;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_140dac50(iVar2);
  }
  if (param_2 == DAT_140dfd48) {
    param_2 = *(int *)(iVar2 + 4);
  }
  else if (param_2 == DAT_140dfd4c) {
    param_2 = *(int *)(iVar2 + 8);
  }
  else if (param_2 == DAT_140dfd50) {
    param_2 = *(int *)(iVar2 + 0xc);
  }
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    FUN_140db620(*(undefined4 *)(param_2 + 0x58));
  }
  uVar1 = FUN_140dfc44(iVar2,param_1,param_2);
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    FUN_140db624(*(undefined4 *)(param_2 + 0x58));
  }
  return uVar1;
}

