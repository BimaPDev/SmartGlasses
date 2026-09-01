/* FUN_10031574 @ 0x10031574 */

void FUN_10031574(void)

{
  int iVar1;
  
  iVar1 = *DAT_100315b4;
  *DAT_100315b8 = 1;
  *DAT_100315bc = 1;
  (**(code **)(DAT_100315c0 + 0x28))(0x1c2);
  FUN_10048308(1);
  if (*DAT_100315b4 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10048018(1);
  return;
}

