/* FUN_2c64a31c @ 0x2c64a31c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64a31c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iVar2 = _LAB_2c64a394;
  iStack_c = *_LAB_2c64a390;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c673c58(&uStack_14,param_2,0);
  iVar1 = ((uStack_10 & 0xff) - 1) * 3;
  iVar3 = iVar2 + iVar1;
  FUN_2c648600(_LAB_2c64a398,uStack_14 & 0xffff,uStack_14._2_1_,uStack_14._3_1_,
               (int)*(char *)(iVar2 + iVar1),(int)*(char *)(iVar3 + 1),(int)*(char *)(iVar3 + 2));
  FUN_2c648600(_LAB_2c64a39c,uStack_10._1_1_,uStack_10._2_1_,uStack_10._3_1_);
  if (*_LAB_2c64a390 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

