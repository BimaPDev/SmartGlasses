/* FUN_2c541768 @ 0x2c541768 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c541768(int param_1)

{
  int iVar1;
  undefined4 uStack_14;
  int *piStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c5417c8;
  FUN_2c547edc(&uStack_14,*(undefined4 *)(param_1 + 4),0);
  FUN_2c55e6d4(uStack_14,1);
  if ((piStack_10 != (int *)0x0) &&
     (iVar1 = piStack_10[1], piStack_10[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piStack_10 + 8))(piStack_10);
    iVar1 = piStack_10[2];
    piStack_10[2] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piStack_10 + 0xc))(piStack_10);
    }
  }
  if (*_LAB_2c5417c8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

