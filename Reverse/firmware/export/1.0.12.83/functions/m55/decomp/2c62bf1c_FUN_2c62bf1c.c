/* FUN_2c62bf1c @ 0x2c62bf1c */

int FUN_2c62bf1c(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_2c62c01c;
  if (param_1 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar2 = -1;
  do {
    iVar6 = DAT_2c62c01c + iVar5 * 8;
    bVar1 = *(byte *)(iVar6 + 6);
    if (-1 < (int)((uint)bVar1 << 0x1f)) {
      uVar3 = (uint)*(ushort *)(DAT_2c62c01c + 4 + iVar5 * 8);
      if (param_1 <= uVar3) {
        if (uVar3 == param_1) {
          iVar4 = *(int *)(DAT_2c62c01c + iVar5 * 8);
          *(byte *)(iVar6 + 6) = bVar1 | 1;
          return iVar4;
        }
        if ((iVar2 == -1) || (uVar3 < *(ushort *)(DAT_2c62c01c + iVar2 * 8 + 4))) {
          iVar2 = (int)(char)iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x10);
  if (iVar2 == -1) {
    iVar2 = 0;
    do {
      iVar5 = DAT_2c62c01c + iVar2 * 8;
      if (-1 < (int)((uint)*(byte *)(iVar5 + 6) << 0x1f)) {
        iVar6 = FUN_2c62bebc(*(undefined4 *)(DAT_2c62c01c + iVar2 * 8),param_1);
        if (iVar6 != 0) {
          bVar1 = *(byte *)(iVar5 + 6);
          *(int *)(iVar4 + iVar2 * 8) = iVar6;
          *(short *)(iVar5 + 4) = (short)param_1;
          *(byte *)(iVar5 + 6) = bVar1 | 1;
          return iVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c62c028,0x17e,DAT_2c62c024,DAT_2c62c02c,DAT_2c62c03c,DAT_2c62c038);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62c028,0x189,DAT_2c62c024,DAT_2c62c020);
  }
  iVar4 = DAT_2c62c01c + iVar2 * 8;
  iVar2 = *(int *)(DAT_2c62c01c + iVar2 * 8);
  *(byte *)(iVar4 + 6) = *(byte *)(iVar4 + 6) | 1;
  return iVar2;
}

