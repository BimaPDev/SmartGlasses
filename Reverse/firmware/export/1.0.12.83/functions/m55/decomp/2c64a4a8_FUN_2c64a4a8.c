/* FUN_2c64a4a8 @ 0x2c64a4a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64a4a8(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  FUN_2c648600(_LAB_2c64a4b8);
  iVar2 = _LAB_2c64a418;
  iStack_c = *_LAB_2c64a414;
  uStack_14 = 0;
  uStack_10 = 0;
  func_0x2c6741a8(&uStack_14,extraout_r1,0);
  iVar1 = ((uStack_10 & 0xff) - 1) * 3;
  iVar3 = iVar2 + iVar1;
  FUN_2c648600(_LAB_2c64a41c,uStack_14 & 0xffff,uStack_14._2_1_,uStack_14._3_1_,
               (int)*(char *)(iVar2 + iVar1),(int)*(char *)(iVar3 + 1),(int)*(char *)(iVar3 + 2));
  FUN_2c648600(_LAB_2c64a420,uStack_10._1_1_,uStack_10._2_1_,uStack_10._3_1_);
  if (*_LAB_2c64a414 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

