/* FUN_2c5fb8f8 @ 0x2c5fb8f8 */

char FUN_2c5fb8f8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  *(char *)(param_1 + 8) = cVar1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (-1 < (DAT_2c5fb980 >> (*(ushort *)(iVar2 + 0x34) & 0xff)) << 0x1f)) {
      if (*(int *)(iVar2 + 0x10) == 0) {
        *(undefined1 *)(param_1 + 0x10) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 0x10) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
      }
    }
    else {
      if (*(int *)(param_1 + 4) == iVar2) {
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(undefined4 *)(param_1 + 0x14) = 0;
        return cVar1;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        if (*(int *)(iVar2 + 0xc) != 0) {
          *(undefined1 *)(param_1 + 0x10) = 3;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
          return cVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5fb98c,0x4b,DAT_2c5fb990,DAT_2c5fb988,DAT_2c5fb984);
      }
      *(undefined1 *)(param_1 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 4);
    }
  }
  return cVar1;
}

