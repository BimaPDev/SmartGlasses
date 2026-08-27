/* FUN_2c60d588 @ 0x2c60d588 */

void FUN_2c60d588(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = *DAT_2c60d5d8;
  if ((2 < *(byte *)(param_2 + 6)) &&
     (iVar1 = FUN_2c62a6b4(auStack_1c,*param_2,*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    if (*(code **)(param_1 + 0x34) != (code *)0x0) {
      (**(code **)(param_1 + 0x34))(param_1);
    }
    (**(code **)(param_1 + 0x54))(param_1,param_2);
  }
  if (*DAT_2c60d5d8 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

