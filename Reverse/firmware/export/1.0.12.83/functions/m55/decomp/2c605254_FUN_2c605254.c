/* FUN_2c605254 @ 0x2c605254 */

void FUN_2c605254(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_20;
  undefined2 local_1e;
  int local_1c;
  
  local_1c = *DAT_2c6052b4;
  FUN_2c608c7c();
  local_20 = 0;
  local_1e = 0;
  iVar1 = FUN_2c6041d4(param_1);
  if (iVar1 != 0) {
    iVar3 = param_1;
    do {
      iVar2 = iVar1;
      FUN_2c604d1c(param_1 + 0x14,iVar3,&local_20,param_2);
      iVar1 = FUN_2c6041d4(iVar2);
      iVar3 = iVar2;
    } while (iVar1 != 0);
  }
  if (*DAT_2c6052b4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

