/* FUN_2c5a93dc @ 0x2c5a93dc */

int FUN_2c5a93dc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_40 [3];
  undefined1 auStack_34 [32];
  int local_14;
  
  local_14 = *DAT_2c5a9448;
  local_40[1] = 0;
  local_40[0] = param_2;
  uVar1 = FUN_2c669224(local_40,param_2,0);
  uVar4 = DAT_2c5a944c;
  if (0xe0f < param_2) {
    uVar4 = DAT_2c5a9450;
  }
  thunk_FUN_2c66bb40(auStack_34,0x20,uVar4,uVar1);
  iVar2 = FUN_2c66c4ec(auStack_34);
  iVar3 = lv_mem_alloc(iVar2 + 1);
  if (iVar3 != 0) {
    FUN_2c674668(iVar3,auStack_34,iVar2 + 1);
  }
  if (*DAT_2c5a9448 == local_14) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

