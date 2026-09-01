/* FUN_100ba05c @ 0x100ba05c */

int FUN_100ba05c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_100ba090;
  while ((-1 < (int)((uint)*(byte *)(DAT_100ba090 + iVar2 * 0x48 + 0x10) << 0x1f) ||
         (*(ushort *)(iVar1 + 0xe) != param_1))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x48;
    if (iVar2 == 5) {
      return 0;
    }
  }
  return iVar2 * 0x48 + 8 + DAT_100ba090;
}

