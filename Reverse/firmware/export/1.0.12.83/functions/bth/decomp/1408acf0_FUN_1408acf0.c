/* FUN_1408acf0 @ 0x1408acf0 */

undefined4 FUN_1408acf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_1408a7dc();
    uVar2 = 0;
    if (((iVar1 != 0) && (uVar2 = 0, *(int *)(iVar1 + 8) != 0)) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 8) + (param_2 + 0x12) * 4), uVar2 = 0, iVar1 != 0)) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
    }
    return uVar2;
  }
  return 0;
}

