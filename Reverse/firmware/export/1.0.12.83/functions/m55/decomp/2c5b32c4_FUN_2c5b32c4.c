/* FUN_2c5b32c4 @ 0x2c5b32c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b32c4(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [68];
  int iStack_c;
  
  iStack_c = *_LAB_2c5b334c;
  if (*(char *)(param_1 + 4) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5b335c,0x134,_LAB_2c5b3358,_LAB_2c5b336c);
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar1 = FUN_2c606b94(*(int *)(param_1 + 0xc),1), iVar1 == 0)) {
    FUN_2c5b5db0(auStack_50,*(undefined4 *)(param_1 + 0xc),0xff,0,0,_LAB_2c5b3368,_LAB_2c5b3364,
                 _LAB_2c5b3360,0xfa);
    FUN_2c62e8ec(auStack_50);
    if (*_LAB_2c5b334c == iStack_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5b335c,0x138,_LAB_2c5b3358,_LAB_2c5b3350,_LAB_2c5b3354);
}

