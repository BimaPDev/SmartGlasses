/* FUN_2c66fcc8 @ 0x2c66fcc8 */

undefined4 FUN_2c66fcc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_2c66fd04;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_2c668868(iVar2);
  }
  if (param_1 == DAT_2c66fd08) {
    param_1 = *(int *)(iVar2 + 4);
  }
  else if (param_1 == DAT_2c66fd0c) {
    param_1 = *(int *)(iVar2 + 8);
  }
  else if (param_1 == DAT_2c66fd10) {
    param_1 = *(int *)(iVar2 + 0xc);
  }
  if ((-1 < *(int *)(param_1 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0xc) << 0x16))) {
    FUN_2c6694a8(*(undefined4 *)(param_1 + 0x58));
  }
  uVar1 = FUN_2c66fc0c(iVar2,param_1);
  if ((-1 < *(int *)(param_1 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0xc) << 0x16))) {
    FUN_2c6694ac(*(undefined4 *)(param_1 + 0x58));
  }
  return uVar1;
}

