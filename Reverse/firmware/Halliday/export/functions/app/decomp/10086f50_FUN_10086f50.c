/* FUN_10086f50 @ 0x10086f50 */

undefined4 FUN_10086f50(int param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int local_24;
  int iStack_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  byte local_c;
  
  piVar1 = DAT_10086f8c;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = 0;
    local_c = local_c & 0xf8;
    local_10 = *DAT_10086f8c;
    *DAT_10086f8c = (int)&local_24;
    local_24 = param_1;
    iStack_20 = param_1;
    local_1c = param_2;
    uStack_14 = param_3;
    uVar2 = FUN_10086dbc();
    *piVar1 = local_10;
  }
  return uVar2;
}

