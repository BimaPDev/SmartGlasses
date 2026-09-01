/* FUN_100eae68 @ 0x100eae68 */

void FUN_100eae68(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = FUN_100ed6b8(2,0x40,DAT_100eae94,DAT_100eae90,in_r3);
  *DAT_100eae98 = iVar1;
  if (iVar1 != 0) {
    *DAT_100eae9c = DAT_100eaea0;
    *DAT_100eaea4 = 2;
    *DAT_100eaea8 = 0;
  }
  return;
}

