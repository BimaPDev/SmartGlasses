/* FUN_100a7a40 @ 0x100a7a40 */

undefined4 FUN_100a7a40(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*DAT_100a7a4c != 0) {
    uVar1 = *(undefined4 *)(*DAT_100a7a4c + 0x14);
  }
  return uVar1;
}

