/* FUN_1000de78 @ 0x1000de78 */

undefined4 FUN_1000de78(void)

{
  int iVar1;
  
  iVar1 = *DAT_1000decc;
  FUN_100f04fc();
  FUN_100ee684();
  FUN_100efd4c(DAT_1000ded0,3);
  FUN_100e8da4(0x168);
  FUN_10138ef8(0);
  thunk_FUN_100e855c(DAT_1000ded4,3);
  FUN_100ea6b8();
  FUN_100ee9a0();
  if (*DAT_1000decc != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

