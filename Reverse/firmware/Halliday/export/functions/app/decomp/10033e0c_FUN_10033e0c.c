/* FUN_10033e0c @ 0x10033e0c */

void FUN_10033e0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10033e54;
  iVar2 = *DAT_10033e48;
  FUN_100a5b78(DAT_10033e58 | (DAT_10033e4c - DAT_10033e50) * 0x20 & 0xff00U,DAT_10033e60,
               DAT_10033e5c,*DAT_10033e54,param_1,iVar2,param_3);
  if (*DAT_10033e48 != iVar2) {
    FUN_1013cdc0(*puVar1);
  }
  return;
}

