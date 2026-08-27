/* FUN_2c49d1a8 @ 0x2c49d1a8 */

undefined4 FUN_2c49d1a8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_2c49d1e4;
  if (*(int *)(DAT_2c49d1e4 + 0x48) == 1) {
    iVar2 = *LAB_2c49d1e8;
    if (iVar2 < DAT_2c49d1ec) {
      iVar2 = FUN_2c4baafc();
      if (iVar2 == 2) {
        iVar2 = 0xfa;
        *(undefined4 *)(iVar1 + 0x24) = 0xfa;
      }
      else {
        FUN_2c49c6fc();
        iVar2 = *(int *)(iVar1 + 0x24);
      }
    }
    *param_1 = iVar2;
    return 0;
  }
  return 0xffffffff;
}

