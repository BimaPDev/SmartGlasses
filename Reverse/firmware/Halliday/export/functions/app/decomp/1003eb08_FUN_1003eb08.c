/* FUN_1003eb08 @ 0x1003eb08 */

void FUN_1003eb08(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1003eb34;
  iVar1 = FUN_100ba310();
  if (*DAT_1003eb34 != iVar2) {
    FUN_1013cdc0(iVar1 == 2);
  }
  return;
}

