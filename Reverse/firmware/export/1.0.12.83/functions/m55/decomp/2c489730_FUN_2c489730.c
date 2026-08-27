/* FUN_2c489730 @ 0x2c489730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c489730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c48977c;
  FUN_2c673bc8(_LAB_2c489780,1,param_3,0);
  FUN_2c4c0248(0x78,0,1);
  uStack_14 = 0x103;
  uStack_10 = _LAB_2c489784;
  FUN_2c4c0370(0x78,&uStack_14);
  if (*_LAB_2c48977c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

