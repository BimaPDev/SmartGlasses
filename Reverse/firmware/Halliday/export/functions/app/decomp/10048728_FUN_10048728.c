/* FUN_10048728 @ 0x10048728 */

void FUN_10048728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  iVar1 = *DAT_1004878c;
  local_1c = param_2;
  local_18 = (undefined1 *)param_3;
  local_14 = param_4;
  (**(code **)(*DAT_10048790 + 0x10))();
  while( true ) {
    local_1c = 0x402;
    local_18 = &stack0xfffffff0;
    local_14 = 2;
    FUN_100506fc(&local_1c);
    if (*DAT_1004878c == iVar1) break;
    FUN_1013cdc0();
  }
  return;
}

