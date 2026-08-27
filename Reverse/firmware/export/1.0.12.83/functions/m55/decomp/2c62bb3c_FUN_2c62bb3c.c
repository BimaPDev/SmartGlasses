/* FUN_2c62bb3c @ 0x2c62bb3c */

int FUN_2c62bb3c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *DAT_2c62bb94;
  uVar5 = param_2;
  iVar1 = FUN_2c62dc24(0,0,param_1,param_2);
  iVar3 = iVar1 + 1;
  iVar2 = lv_mem_alloc(iVar3);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + iVar1) = 0;
    FUN_2c62dc24(iVar2,iVar3,param_1,param_2,iVar3,param_1,uVar5);
  }
  if (*DAT_2c62bb94 == iVar4) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

