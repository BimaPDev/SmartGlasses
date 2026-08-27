/* FUN_2c5fee80 @ 0x2c5fee80 */

undefined4 FUN_2c5fee80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x20);
  }
  iVar1 = FUN_2c62a470();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
  }
  return uVar2;
}

