/* FUN_100a1c48 @ 0x100a1c48 */

undefined4 FUN_100a1c48(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_100a1c90;
  do {
    if (*(int *)(iVar1 + 4) == 0) {
      *(undefined4 *)(DAT_100a1c90 + iVar2 * 4 + 4) = param_1;
      return 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 != 5);
  FUN_100a5b78((DAT_100a1c98 - DAT_100a1c94) * 0x20 & 0xff00U | 0x800011,DAT_100a1ca0,DAT_100a1c9c,
               0xfffffffd);
  return 0xfffffffd;
}

