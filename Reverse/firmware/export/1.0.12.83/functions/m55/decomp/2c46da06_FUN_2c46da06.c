/* FUN_2c46da06 @ 0x2c46da06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46da06(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  undefined1 auStack_70 [40];
  undefined1 uStack_48;
  undefined1 auStack_47 [40];
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  int iStack_1c;
  
  puVar1 = _LAB_2c46da84;
  iStack_1c = *_LAB_2c46da88;
  *_LAB_2c46da84 = param_2;
  param_5 = param_3;
  param_6 = param_4;
  FUN_2c674268(auStack_70,0,0x51,0);
  FUN_2c674668(auStack_70,param_8,param_9);
  FUN_2c674668(auStack_47,param_10,param_11);
  uStack_48 = (undefined1)param_9;
  uStack_1f = (undefined1)param_11;
  uStack_1e = param_7;
  func_0x2c46de10(auStack_70,0x53);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)(1);
  }
  if (*_LAB_2c46da88 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

