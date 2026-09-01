/* FUN_10037184 @ 0x10037184 */

void FUN_10037184(void)

{
  int iVar1;
  
  iVar1 = *DAT_100371ac;
  FUN_1003711c();
  if (*DAT_100371ac != iVar1) {
    FUN_1013cdc0();
  }
  iVar1 = DAT_100c1484;
  *(undefined4 *)(DAT_100c1484 + 0x17) = 0;
  *(undefined2 *)(iVar1 + 0x1b) = 0;
  return;
}

