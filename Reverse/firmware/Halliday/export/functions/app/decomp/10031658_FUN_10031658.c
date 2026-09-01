/* FUN_10031658 @ 0x10031658 */

void FUN_10031658(void)

{
  int iVar1;
  
  iVar1 = *DAT_10031698;
  *DAT_1003169c = 1;
  *DAT_100316a0 = 0;
  (**(code **)(DAT_100316a4 + 0x28))(0x1e);
  FUN_10048308(1);
  if (*DAT_10031698 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10048018(1);
  return;
}

