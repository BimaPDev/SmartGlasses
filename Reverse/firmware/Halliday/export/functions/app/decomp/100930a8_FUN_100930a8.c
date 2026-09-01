/* FUN_100930a8 @ 0x100930a8 */

void FUN_100930a8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_100930d4;
  *DAT_100930d0 = 1;
  iVar2 = FUN_1012b06a(uVar1);
  if (iVar2 == 0) {
    FUN_1012b322(*DAT_100930d8);
    return;
  }
  FUN_1012b32c(*DAT_100930d8);
  return;
}

