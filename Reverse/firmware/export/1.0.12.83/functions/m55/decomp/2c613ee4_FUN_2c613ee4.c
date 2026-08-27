/* FUN_2c613ee4 @ 0x2c613ee4 */

undefined4 FUN_2c613ee4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != -1) {
    iVar2 = DAT_2c613f04 + param_1 * 8;
    uVar1 = *(undefined4 *)(DAT_2c613f04 + param_1 * 8);
    *(undefined4 *)(DAT_2c613f04 + param_1 * 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    return uVar1;
  }
  return 0;
}

