/* FUN_2c49c8c4 @ 0x2c49c8c4 */

void FUN_2c49c8c4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_18;
  undefined1 local_17;
  uint local_14;
  
  iVar1 = DAT_2c49c924;
  local_14 = *DAT_2c49c928;
  local_18 = (undefined1)param_1;
  local_17 = param_2;
  uVar2 = FUN_2c4bd438(*(undefined1 *)(DAT_2c49c924 + 4),*(undefined2 *)(DAT_2c49c924 + 8),&local_18
                       ,2);
  if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xf2,DAT_2c49c934,DAT_2c49c930,DAT_2c49c92c,param_1,(int)uVar2);
  }
  *(undefined4 *)(iVar1 + 0x44) = 0;
  if ((*DAT_2c49c928 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0,(int)((ulonglong)uVar2 >> 0x20),*DAT_2c49c928 ^ local_14,0);
}

