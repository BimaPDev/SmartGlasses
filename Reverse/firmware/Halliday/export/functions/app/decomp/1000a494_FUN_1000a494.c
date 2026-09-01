/* FUN_1000a494 @ 0x1000a494 */

void FUN_1000a494(void)

{
  int iVar1;
  
  iVar1 = *DAT_1000a4c0;
  *DAT_1000a4c4 = 0;
  *DAT_1000a4c8 = 0;
  if (*DAT_1000a4c0 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

