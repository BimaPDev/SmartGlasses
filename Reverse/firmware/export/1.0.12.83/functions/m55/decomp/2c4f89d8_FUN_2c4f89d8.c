/* FUN_2c4f89d8 @ 0x2c4f89d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f89d8(undefined2 *param_1)

{
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [124];
  int iStack_c;
  
  iStack_c = *_LAB_2c4f8a40;
  if (param_1 != (undefined2 *)0x0) {
    FUN_2c674268(auStack_8c,0,0x80,0);
    uStack_90 = *param_1;
    auStack_8c[0] = (undefined1)*(int *)(param_1 + 2);
    uStack_8e = 4;
    if (0x80 < *(int *)(param_1 + 2) + 4U) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f8a48,_LAB_2c4f8a44);
    }
    FUN_2c674668(auStack_88,param_1 + 4);
    FUN_2c4f895c(&uStack_90);
  }
  if (*_LAB_2c4f8a40 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

