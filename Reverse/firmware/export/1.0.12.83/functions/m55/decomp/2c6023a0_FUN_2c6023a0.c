/* FUN_2c6023a0 @ 0x2c6023a0 */

void FUN_2c6023a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_2c;
  int local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 local_14;
  byte local_10;
  uint local_c;
  
  piVar1 = DAT_2c6023fc;
  local_c = *DAT_2c6023f8;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    local_24 = (undefined1)param_2;
    local_20 = 0;
    local_10 = local_10 & 0xf0;
    local_18 = *DAT_2c6023fc;
    *DAT_2c6023fc = (int)&local_2c;
    local_2c = param_1;
    local_28 = param_1;
    uStack_1c = param_3;
    local_14 = param_4;
    uVar3 = FUN_2c602140();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar2 = (undefined4)uVar3;
    *piVar1 = local_18;
  }
  if ((*DAT_2c6023f8 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,param_2,*DAT_2c6023f8 ^ local_c,0);
}

