/* FUN_2c62c040 @ 0x2c62c040 */

void FUN_2c62c040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 8;
    iVar3 = DAT_2c62c080 + iVar2 * 8;
    iVar2 = iVar2 + 1;
    if (*(int *)(DAT_2c62c080 + iVar1) == param_1) {
      *(byte *)(iVar3 + 6) = *(byte *)(iVar3 + 6) & 0xfe;
      return;
    }
  } while (iVar2 != 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c62c08c,0x19d,DAT_2c62c088,DAT_2c62c084);
}

