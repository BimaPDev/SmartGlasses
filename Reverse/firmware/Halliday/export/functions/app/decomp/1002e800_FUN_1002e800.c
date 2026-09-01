/* FUN_1002e800 @ 0x1002e800 */

void FUN_1002e800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1002e828;
  FUN_1012691c(param_1,0,0x59,0,param_1,iVar1,param_3);
  if (*DAT_1002e828 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

