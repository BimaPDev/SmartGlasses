/* FUN_2c5a3980 @ 0x2c5a3980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a3980(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_50 [17];
  int iStack_c;
  
  iStack_c = *_LAB_2c5a39e4;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a39f4,400,_LAB_2c5a39f0,_LAB_2c5a39ec);
  }
  if (param_2 != 1) {
    *_LAB_2c5a39e8 = 0;
  }
  *(char *)(iVar1 + 0xd) = (char)param_2;
  FUN_2c5a2398();
  iVar1 = func_0x2c5a2418();
  if (iVar1 != 0) {
    FUN_2c62c3b0(auStack_50,0x44);
    auStack_50[0] = 10;
    FUN_2c6419a8(auStack_50);
  }
  if (*_LAB_2c5a39e4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

