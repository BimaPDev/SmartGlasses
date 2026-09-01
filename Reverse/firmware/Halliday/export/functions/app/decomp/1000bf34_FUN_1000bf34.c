/* FUN_1000bf34 @ 0x1000bf34 */

void FUN_1000bf34(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_1000bf70;
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  cVar1 = FUN_1000bab0(param_1,&iStack_18,0xc,0);
  if (cVar1 == '\f') {
    cVar1 = (**(code **)(param_1 + 0x1c))(&iStack_18,0);
  }
  if (*DAT_1000bf70 != local_c) {
    FUN_1013cdc0(cVar1);
  }
  return;
}

