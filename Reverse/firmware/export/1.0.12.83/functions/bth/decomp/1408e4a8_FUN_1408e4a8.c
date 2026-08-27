/* FUN_1408e4a8 @ 0x1408e4a8 */

undefined4 FUN_1408e4a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_1408a7dc();
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x96) != '\0')) {
    if (*(int *)(iVar1 + 8) != 0) {
      uVar2 = FUN_1408c5a4(*(undefined1 *)(*(int *)(iVar1 + 8) + 0x11),iVar1,param_2);
      return uVar2;
    }
    uVar2 = FUN_1408c5a4(0xff,iVar1,param_2);
    return uVar2;
  }
  return 1;
}

