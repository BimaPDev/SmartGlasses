/* FUN_2c658534 @ 0x2c658534 */

int FUN_2c658534(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 != -1) {
    iVar2 = *DAT_2c66fe14;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
      FUN_2c668868(iVar2);
    }
    if (iVar1 == DAT_2c66fe18) {
      iVar1 = *(int *)(iVar2 + 4);
    }
    else if (iVar1 == DAT_2c66fe1c) {
      iVar1 = *(int *)(iVar2 + 8);
    }
    else if (iVar1 == DAT_2c66fe20) {
      iVar1 = *(int *)(iVar2 + 0xc);
    }
    if ((-1 < *(int *)(iVar1 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(iVar1 + 0xc) << 0x16))
       ) {
      FUN_2c6694a8(*(undefined4 *)(iVar1 + 0x58));
    }
    iVar2 = FUN_2c66fd14(iVar2,param_2,iVar1);
    if ((-1 < *(int *)(iVar1 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(iVar1 + 0xc) << 0x16))
       ) {
      FUN_2c6694ac(*(undefined4 *)(iVar1 + 0x58));
    }
    return iVar2;
  }
  iVar1 = func_0x2c668794(iVar1);
  return -(uint)(iVar1 != 0);
}

