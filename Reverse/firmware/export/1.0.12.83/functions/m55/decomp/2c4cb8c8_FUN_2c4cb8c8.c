/* FUN_2c4cb8c8 @ 0x2c4cb8c8 */

void FUN_2c4cb8c8(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x14d8) != 0) && (*(byte *)(param_1 + 0x14dc) != param_2)) {
    uVar1 = DAT_2c4cb914;
    if (param_2 == 0) {
      uVar1 = DAT_2c4cb918;
    }
    if (param_3 == 0) {
      param_3 = DAT_2c4cb924;
    }
    FUN_2c6741e8(0x43,DAT_2c4cb920,DAT_2c4cb91c,uVar1,param_3);
    *(char *)(param_1 + 0x14dc) = (char)param_2;
                    /* WARNING: Could not recover jumptable at 0x2c4cb90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14d8))(param_2);
    return;
  }
  return;
}

