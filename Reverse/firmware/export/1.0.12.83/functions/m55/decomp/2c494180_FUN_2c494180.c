/* FUN_2c494180 @ 0x2c494180 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c494180(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 in_r3;
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_2c48c994(_LAB_2c494198);
  FUN_2c48ca34(_LAB_2c49419c);
  uVar1 = _LAB_2c4941a0;
  iStack_c = *_LAB_2c48cb10;
  *_LAB_2c48cb0c = _LAB_2c4941a0;
  uStack_14 = FUN_2c48d068(uVar1,extraout_r1,0);
  uStack_10 = 1;
  FUN_2c48d15c(0x5f,uStack_14,&uStack_14,8);
  if (*_LAB_2c48cb10 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

