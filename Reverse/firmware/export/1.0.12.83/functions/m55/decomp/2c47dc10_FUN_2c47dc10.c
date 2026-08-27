/* FUN_2c47dc10 @ 0x2c47dc10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47dc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_stack_0000007c;
  int in_stack_00000114;
  
  if (param_1 == 0) {
    in_stack_0000007c = param_4;
                    /* WARNING: Subroutine does not return */
    TRACE(0,param_2,uRam2c47deac,uRam2c47dea8,param_4);
  }
  iVar1 = *_LAB_2c47de9c;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe4,uRam2c47deac,uRam2c47dea8,_LAB_2c47dea0,_FUN_2c47dea4,
          *(undefined4 *)(iVar1 + 0x1d0),*(undefined4 *)(iVar1 + 0xd8));
  }
  FUN_2c473f40(&stack0x00000060);
  if (*DAT_2c47dbd0 == in_stack_00000114) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

