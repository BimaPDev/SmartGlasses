/* FUN_10020488 @ 0x10020488 */

void FUN_10020488(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100204b0;
  *(undefined1 *)(DAT_100204b4 + 2) = param_1;
  if (*DAT_100204b0 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100201cc();
  return;
}

