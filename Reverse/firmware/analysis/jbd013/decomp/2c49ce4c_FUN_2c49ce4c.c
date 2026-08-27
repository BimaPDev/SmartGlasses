/* FUN_2c49ce4c @ 0x2c49ce4c */

void FUN_2c49ce4c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  longlong lVar3;
  undefined2 local_18;
  uint local_14;
  
  local_14 = *DAT_2c49ceb8;
  local_18 = 0;
  lVar3 = FUN_2c49c9e8(param_1,2,&local_18,0);
  if (-1 < (int)lVar3) {
    uVar1 = ((uint)local_18._1_1_ + (uint)(byte)local_18 * 0x100) * 5;
    uVar2 = uVar1 >> 4;
    *(uint *)(param_1 + 0x14) = uVar2;
    if (uVar1 < 0xc950) {
      lVar3 = (ulonglong)uVar2 << 0x20;
      if (1 < *(int *)(DAT_2c49cebc + 0x20)) {
        FUN_2c49cd50(0);
        lVar3 = (ulonglong)extraout_r1 << 0x20;
      }
    }
    else {
      lVar3 = (ulonglong)uVar2 << 0x20;
    }
  }
  if ((*DAT_2c49ceb8 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),*DAT_2c49ceb8 ^ local_14,0);
}

