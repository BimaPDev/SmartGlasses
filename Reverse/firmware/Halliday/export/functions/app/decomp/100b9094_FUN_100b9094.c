/* FUN_100b9094 @ 0x100b9094 */

undefined4 FUN_100b9094(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + 0x36 + iVar1 * 2) == param_2) {
      *(undefined1 *)(param_1 + iVar1 * 2 + 0x37) = param_3;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x36 + iVar1 * 2) == '\0') {
      param_1 = param_1 + iVar1 * 2;
      *(char *)(param_1 + 0x36) = (char)param_2;
      *(undefined1 *)(param_1 + 0x37) = param_3;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  FUN_100a5b78((DAT_100b90fc - DAT_100b90f8) * 0x20 & 0xff00U | 0x7f0031,DAT_100b9104,DAT_100b9100,
               param_2);
  return 0xffffffff;
}

