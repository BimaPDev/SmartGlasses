/* FUN_2c602340 @ 0x2c602340 */

void FUN_2c602340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_34;
  int iStack_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  byte local_18;
  uint local_14;
  
  piVar1 = DAT_2c60239c;
  local_14 = *DAT_2c602398;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = local_18 & 0xf0;
    local_20 = *DAT_2c60239c;
    local_2c = (undefined1)param_2;
    local_28 = 0;
    local_1c = 0;
    *DAT_2c60239c = (int)&local_34;
    local_34 = param_1;
    iStack_30 = param_1;
    local_24 = param_3;
    uVar3 = FUN_2c602140();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar2 = (undefined4)uVar3;
    *piVar1 = local_20;
  }
  if ((*DAT_2c602398 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,param_2,*DAT_2c602398 ^ local_14,0);
}

