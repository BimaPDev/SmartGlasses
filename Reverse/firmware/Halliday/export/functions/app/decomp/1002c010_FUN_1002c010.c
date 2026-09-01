/* FUN_1002c010 @ 0x1002c010 */

void FUN_1002c010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1002c040;
  FUN_1002bc80(*(undefined4 *)(*DAT_1002c044 + 0x10),param_1,param_3,*DAT_1002c044,param_1,iVar1,
               param_3);
  if (*DAT_1002c040 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1002bf54();
  return;
}

