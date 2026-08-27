/* FUN_2c5dcb80 @ 0x2c5dcb80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dcb80(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uStack_14 = *_LAB_2c5dcbf4;
  uStack_18 = *(undefined4 *)(iVar1 + 0x10);
  if (*(int *)(iVar1 + 8) != 0) {
    (**(code **)(iVar1 + 0xc))(iVar1,&uStack_18);
    if (*(code **)(iVar1 + 8) != (code *)0x0) {
      (**(code **)(iVar1 + 8))(iVar1,iVar1,3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  func_0x2c6586ca();
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

