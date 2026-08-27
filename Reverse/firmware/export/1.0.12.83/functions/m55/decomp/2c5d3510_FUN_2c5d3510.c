/* FUN_2c5d3510 @ 0x2c5d3510 */

void FUN_2c5d3510(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    FUN_2c5d3494(iVar2,*(undefined4 *)(iVar2 + 0x6c));
    FUN_2c5c685c();
    iVar1 = FUN_2c5c6d5c();
    if (iVar1 == 0) {
      FUN_2c606abc(*(undefined4 *)(iVar2 + 0x6c),1);
      return;
    }
  }
  return;
}

