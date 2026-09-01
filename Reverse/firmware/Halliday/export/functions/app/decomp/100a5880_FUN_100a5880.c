/* FUN_100a5880 @ 0x100a5880 */

int FUN_100a5880(byte param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_100a58a8;
  if (param_2 == 0) {
    iVar2 = -0x16;
  }
  else if ((param_1 & *(byte *)(DAT_100a58a8 + 2)) == 0) {
    iVar2 = FUN_100a6108();
    if (iVar2 == 0) {
      *(byte *)(iVar1 + 2) = param_1 | *(byte *)(iVar1 + 2);
    }
  }
  else {
    iVar2 = -0x78;
  }
  return iVar2;
}

