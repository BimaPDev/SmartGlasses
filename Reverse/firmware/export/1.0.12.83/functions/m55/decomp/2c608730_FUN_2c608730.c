/* FUN_2c608730 @ 0x2c608730 */

undefined4 FUN_2c608730(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x23) & 6) != 6) {
    uVar1 = FUN_2c60802c();
    return uVar1;
  }
  return 0;
}

