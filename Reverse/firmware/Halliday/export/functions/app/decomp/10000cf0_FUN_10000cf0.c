/* FUN_10000cf0 @ 0x10000cf0 */

void FUN_10000cf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_10000d0c;
  *(undefined4 *)(DAT_10000d10 + 0x2dc) = *DAT_10000d0c;
  puVar2 = DAT_10000d14;
  *DAT_10000d14 = 0x100;
  *puVar1 = 0x1040;
  *puVar2 = 0x100;
  return;
}

