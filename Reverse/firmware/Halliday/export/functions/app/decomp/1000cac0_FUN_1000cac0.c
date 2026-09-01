/* FUN_1000cac0 @ 0x1000cac0 */

undefined4 FUN_1000cac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1000caec;
  FUN_100a1b60(DAT_1000caf0,0x2a,0,0,param_1,iVar1,param_3);
  if (*DAT_1000caec != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

