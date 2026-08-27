/* FUN_2c56d5a8 @ 0x2c56d5a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56d5a8(int param_1)

{
  undefined4 uStack_54;
  undefined1 auStack_50 [60];
  int iStack_14;
  
  iStack_14 = *_LAB_2c56d610;
  uStack_54 = _LAB_2c56d60c;
  FUN_2c674268(auStack_50,0,0x3c);
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_2c66b4b8(&uStack_54,_LAB_2c56d614,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x30));
  }
  FUN_2c638730(*(undefined4 *)(param_1 + 0xc),&uStack_54);
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))();
  }
  if (*_LAB_2c56d610 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

