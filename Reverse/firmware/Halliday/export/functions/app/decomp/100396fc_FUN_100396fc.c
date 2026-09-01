/* FUN_100396fc @ 0x100396fc */

void FUN_100396fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10039734;
  FUN_100454dc(0,param_2,param_3,0,param_1,iVar1,param_3);
  thunk_FUN_1009efe8(DAT_1003973c,DAT_10039738,0xc);
  if (*DAT_10039734 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003973c);
  return;
}

