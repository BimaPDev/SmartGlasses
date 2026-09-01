/* FUN_100bcb60 @ 0x100bcb60 */

undefined4 FUN_100bcb60(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*DAT_100bcb7c == '\0') ||
     (iVar2 = FUN_1011ea10(DAT_100bcb84), uVar1 = DAT_100bcb84, iVar2 == 0)) {
    uVar1 = DAT_100bcb80;
  }
  return uVar1;
}

