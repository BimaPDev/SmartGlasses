/* FUN_2c48ec38 @ 0x2c48ec38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48ec38(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_2c;
  undefined1 auStack_28 [28];
  int iStack_c;
  
  iStack_c = *_LAB_2c48ec7c;
  uVar1 = FUN_2c48d068();
  uStack_2c = uVar1;
  FUN_2c6435c4(auStack_28,param_1);
  FUN_2c48d15c(0x4f,uVar1,&uStack_2c,0x20);
  if (*_LAB_2c48ec7c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

