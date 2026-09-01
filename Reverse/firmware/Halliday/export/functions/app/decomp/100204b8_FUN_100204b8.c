/* FUN_100204b8 @ 0x100204b8 */

void FUN_100204b8(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100204e8;
  *(char *)(DAT_100204ec + 3) = (char)param_1;
  if (param_1 == 0) {
    FUN_1001fd40();
  }
  if (*DAT_100204e8 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100201cc();
  return;
}

