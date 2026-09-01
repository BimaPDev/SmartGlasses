/* FUN_100419d4 @ 0x100419d4 */

void FUN_100419d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100419f8;
  *DAT_100419fc = param_1;
  if (*DAT_100419f8 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

