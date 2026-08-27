/* FUN_2c66fdd4 @ 0x2c66fdd4 */

undefined4 FUN_2c66fdd4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_2c66fe14;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_2c668868(iVar2);
  }
  if (param_2 == DAT_2c66fe18) {
    param_2 = *(int *)(iVar2 + 4);
  }
  else if (param_2 == DAT_2c66fe1c) {
    param_2 = *(int *)(iVar2 + 8);
  }
  else if (param_2 == DAT_2c66fe20) {
    param_2 = *(int *)(iVar2 + 0xc);
  }
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    FUN_2c6694a8(*(undefined4 *)(param_2 + 0x58));
  }
  uVar1 = FUN_2c66fd14(iVar2,param_1,param_2);
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
     (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
    FUN_2c6694ac(*(undefined4 *)(param_2 + 0x58));
  }
  return uVar1;
}

