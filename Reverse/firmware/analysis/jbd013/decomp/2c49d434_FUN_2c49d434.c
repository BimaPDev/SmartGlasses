/* FUN_2c49d434 @ 0x2c49d434 */

void FUN_2c49d434(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 local_10;
  uint local_c;
  
  iVar1 = DAT_2c49d4a0;
  local_c = *DAT_2c49d49c;
  if (*(int *)(DAT_2c49d4a0 + 0x48) == 1) {
    iVar2 = *DAT_2c49d4a4;
    if (iVar2 < 0) {
      local_10 = 0;
      uVar4 = FUN_2c49c9e8(DAT_2c49d4a0,0xa4,&local_10);
      param_2 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 < 0) {
        iVar2 = *(int *)(iVar1 + 0x30);
      }
      else {
        param_2 = (uint)(byte)local_10;
        iVar3 = (uint)local_10._1_1_ + param_2 * 0x100;
        iVar2 = iVar3 >> 4;
        *DAT_2c49d4a8 = (short)iVar3;
        *(int *)(iVar1 + 0x30) = iVar2;
      }
    }
  }
  else {
    iVar2 = -1;
  }
  if ((*DAT_2c49d49c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar2,param_2,*DAT_2c49d49c ^ local_c,0);
}

