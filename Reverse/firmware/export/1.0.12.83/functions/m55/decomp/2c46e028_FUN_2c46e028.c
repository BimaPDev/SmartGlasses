/* FUN_2c46e028 @ 0x2c46e028 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46e028(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined1 auStack_e [2];
  int iStack_c;
  
  puVar1 = auStack_e;
  iStack_c = *_LAB_2c46e084;
  uStack_14 = 0;
  uStack_10 = 0;
  puVar2 = (undefined1 *)(param_1 + -1);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar2;
  } while (puVar2 != (undefined1 *)(param_1 + 5));
  FUN_2c4f7174(0x3c,&uStack_14,6);
  if (*_LAB_2c46e084 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

