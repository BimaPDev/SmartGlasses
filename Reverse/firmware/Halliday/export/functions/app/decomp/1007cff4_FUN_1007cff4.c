/* FUN_1007cff4 @ 0x1007cff4 */

void FUN_1007cff4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_1007d004;
  *DAT_1007d004 = 0;
  *(undefined4 *)((int)puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0xff;
  return;
}

