/* FUN_2c613e5c @ 0x2c613e5c */

int FUN_2c613e5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = DAT_2c613e8c + iVar1 * 8;
    if (*(int *)(DAT_2c613e8c + iVar1 * 8) == 0) {
      *(undefined4 *)(DAT_2c613e8c + iVar1 * 8) = param_1;
      *(undefined4 *)(iVar2 + 4) = param_2;
      return (int)(short)((ushort)iVar1 & 0xff);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return -1;
}

