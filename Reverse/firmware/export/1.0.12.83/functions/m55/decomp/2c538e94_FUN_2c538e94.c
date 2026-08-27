/* FUN_2c538e94 @ 0x2c538e94 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c538e94(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  undefined1 auStack_3c [40];
  int iStack_14;
  
  iStack_14 = *param_4;
  if (param_2 < 0x7e) {
    func_0x2c56332c(auStack_3c,param_2,param_3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(char *)(param_1 + 0xa0) == '\0') && (*_LAB_2c538f7c != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*_LAB_2c538f78 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

