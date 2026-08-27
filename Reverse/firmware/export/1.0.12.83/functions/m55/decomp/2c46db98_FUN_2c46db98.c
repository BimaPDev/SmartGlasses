/* FUN_2c46db98 @ 0x2c46db98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46db98(char param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((byte)(param_1 + 0xcU) < 0xb) {
    iVar1 = FUN_2c4969c8();
    if (iVar1 != 0) {
      FUN_2c4967a0(1);
    }
    switch(param_1) {
    case -7:
      UNRECOVERED_JUMPTABLE = (code *)*_LAB_2c46dc10;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = 3;
LAB_2c46dbd8:
                    /* WARNING: Could not recover jumptable at 0x2c46dbe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3,uVar2);
        return;
      }
      break;
    case -6:
      UNRECOVERED_JUMPTABLE = (code *)*_LAB_2c46dc10;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = 2;
        goto LAB_2c46dbd8;
      }
      break;
    case -5:
      UNRECOVERED_JUMPTABLE = (code *)*_LAB_2c46dc10;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = 0;
        goto LAB_2c46dbd8;
      }
      break;
    case -4:
      UNRECOVERED_JUMPTABLE = (code *)*_LAB_2c46dc10;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = 4;
        goto LAB_2c46dbd8;
      }
    }
  }
  return;
}

