/* FUN_100112a8 @ 0x100112a8 */

void FUN_100112a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_100112d8;
  FUN_10061f54(DAT_100112dc,param_2,param_3,0,param_1);
  if (*DAT_100112d8 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1011efe4(param_1);
  return;
}

