/* FUN_2c47b69a @ 0x2c47b69a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b69a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char in_ZR;
  
  puVar1 = _LAB_2c47b700;
  if (in_ZR == '\0') {
    if (param_1 != 0x69) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_2c6741f4)(0x712,_LAB_2c47b6f8,_LAB_2c47b6f4,param_1);
      return;
    }
    uVar3 = 0;
    uVar2 = *_LAB_2c47b700;
    *_LAB_2c47b704 = 0;
    FUN_2c644958(uVar2);
    *puVar1 = 0;
  }
  else if (*(char *)(_LAB_2c47b6fc + 0x592) == '\0') {
    FUN_2c479998();
    uVar3 = 1;
  }
  else {
    FUN_2c479998();
    uVar3 = 0;
  }
  if ((code *)*_LAB_2c479a8c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c479a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*_LAB_2c479a8c)(uVar3);
    return;
  }
  return;
}

