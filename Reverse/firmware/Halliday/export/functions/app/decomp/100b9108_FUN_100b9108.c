/* FUN_100b9108 @ 0x100b9108 */

uint FUN_100b9108(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + 0x36 + iVar1 * 2) == param_2) {
      return (uint)*(byte *)(param_1 + iVar1 * 2 + 0x37);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  FUN_100a5b78((DAT_100b9150 - DAT_100b914c) * 0x20 & 0xff00U | 0x8e0031,DAT_100b9158,DAT_100b9154,
               param_2);
  return 0xffffffff;
}

