/* FUN_10045490 @ 0x10045490 */

void FUN_10045490(undefined4 param_1,uint3 param_2)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  iVar1 = *DAT_100454d8;
  local_18 = 0x1002;
  local_14 = (int)&uStack_1c + 3;
  uStack_1c = (uint)param_2;
  FUN_100506fc(&local_18);
  if (*DAT_100454d8 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

