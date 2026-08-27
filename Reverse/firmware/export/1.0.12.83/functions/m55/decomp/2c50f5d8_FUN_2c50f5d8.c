/* FUN_2c50f5d8 @ 0x2c50f5d8 */

void FUN_2c50f5d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_1c [2];
  short local_1a;
  short local_16;
  int local_14;
  
  local_14 = *DAT_2c50f63c;
  FUN_2c60747c(param_1,auStack_1c,param_3,0);
  iVar1 = (*(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x274)) -
          (int)(short)((local_16 + 1) - local_1a);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  else {
    if (param_2 <= iVar1) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x27c) = iVar1;
  }
  FUN_2c607df0(param_1);
  if (*DAT_2c50f63c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

