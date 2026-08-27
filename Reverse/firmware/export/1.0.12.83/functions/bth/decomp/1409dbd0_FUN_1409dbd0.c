/* FUN_1409dbd0 @ 0x1409dbd0 */

undefined1 FUN_1409dbd0(void)

{
  undefined1 uVar1;
  
  if (*(char *)(DAT_1409dbe0 + 2) == '\x02') {
    uVar1 = *(undefined1 *)(DAT_1409dbe0 + 3);
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}

