/* FUN_2c4aab6c @ 0x2c4aab6c */

void FUN_2c4aab6c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  
  local_14 = *DAT_2c4aac38;
  local_18 = 0;
  if (param_4 == 0) {
    uVar2 = 2;
    local_18 = param_3 & 0xffff;
  }
  else {
    if (param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x298,DAT_2c4aac48,DAT_2c4aac44,DAT_2c4aac40,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aac3c,param_4);
    }
    uVar2 = 4;
    local_18 = param_3;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x1d8);
  iVar1 = param_2 * 2;
  if ((uint)(param_2 * 2) <= *(uint *)(param_1 + 0xc0)) {
    FUN_2c674668(*(int *)(param_1 + 0xc4) + iVar1,&local_18,uVar2);
    if ((*DAT_2c4aac38 ^ local_14) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(0,extraout_r1,*DAT_2c4aac38 ^ local_14,0);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x29e,DAT_2c4aac48,DAT_2c4aac44,DAT_2c4aac4c,*(undefined1 *)(param_1 + 0xa0),DAT_2c4aac3c,
        iVar1,*(uint *)(param_1 + 0xc0));
}

