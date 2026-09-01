/* FUN_1006c83c @ 0x1006c83c */

undefined4 FUN_1006c83c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_1006b9c8(0xffffffff,0xffffffff,param_3,param_4,param_4);
  iVar2 = FUN_1006b990(param_1);
  iVar1 = DAT_1006c888;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
    iVar2 = 0;
    if (*(int *)(DAT_1006c888 + 4) != 0) {
      if (*(int *)(DAT_1006c888 + 0xc) != 0) {
        uVar3 = 0xffffffe4;
        goto LAB_1006c872;
      }
      iVar2 = 1;
    }
    *(undefined4 *)(DAT_1006c888 + iVar2 * 8) = param_1;
    uVar3 = 0;
    *(undefined4 *)(iVar1 + iVar2 * 8 + 4) = param_2;
  }
  else {
    uVar3 = 0xffffff88;
  }
LAB_1006c872:
  FUN_1006b9bc();
  return uVar3;
}

