/* FUN_2c57027c @ 0x2c57027c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57027c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5702f4;
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c57030c,0xda,_LAB_2c570308,_LAB_2c570304);
  }
  FUN_2c5924cc();
  iVar1 = func_0x2c572e3c(*(undefined4 *)(param_1 + 0x24),param_2,param_3);
  iVar2 = _LAB_2c5702f8;
  if ((iVar1 == 0) ||
     (FUN_2c571794(*(undefined4 *)(param_1 + 0x28),param_2), iVar2 = _LAB_2c570300, param_3 != 3)) {
    uStack_18 = *(undefined4 *)(iVar2 + 4);
    uStack_1c = _LAB_2c5702fc;
    FUN_2c593c2c(param_1,&uStack_1c,0);
  }
  if (*_LAB_2c5702f4 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

