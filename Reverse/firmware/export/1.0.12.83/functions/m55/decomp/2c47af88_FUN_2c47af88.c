/* FUN_2c47af88 @ 0x2c47af88 */

void FUN_2c47af88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = *DAT_2c47afcc;
  if (*DAT_2c47afc8 == 0) {
    uVar1 = 0;
  }
  else {
    local_24 = param_1;
    uStack_20 = param_2;
    local_1c = param_3;
    uStack_18 = param_4;
    uVar2 = FUN_2c47ab40(&local_24);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar1 = (undefined4)uVar2;
  }
  if ((*DAT_2c47afcc ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,param_2,*DAT_2c47afcc ^ local_14,0);
}

