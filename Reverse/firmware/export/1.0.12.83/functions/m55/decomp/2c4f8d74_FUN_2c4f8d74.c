/* FUN_2c4f8d74 @ 0x2c4f8d74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f8d74(undefined2 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  char acStack_9c [4];
  undefined1 uStack_98;
  undefined1 auStack_94 [120];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4f8de8;
  if (0x80 < param_4 + 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f8df0,_LAB_2c4f8dec,param_4);
  }
  FUN_2c674268(acStack_9c,0,0x80);
  uStack_9e = 3;
  acStack_9c[0] = (char)param_4 + '\x04';
  uStack_a0 = param_1;
  uStack_98 = param_2;
  if (param_4 != 0) {
    FUN_2c674668(auStack_94,param_3,param_4);
  }
  FUN_2c4f895c(&uStack_a0);
  if (*_LAB_2c4f8de8 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

