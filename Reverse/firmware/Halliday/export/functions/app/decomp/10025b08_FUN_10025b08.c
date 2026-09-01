/* FUN_10025b08 @ 0x10025b08 */

void FUN_10025b08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10025b44;
  FUN_1011ea48(*DAT_10025b48,0,0x102c,DAT_10025b48,param_1,iVar1,param_3);
  FUN_1006c2a0(DAT_10025b4c);
  if (*DAT_10025b44 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1006c2a0(DAT_10025b50);
  return;
}

