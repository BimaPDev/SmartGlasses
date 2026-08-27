/* FUN_2c49cb44 @ 0x2c49cb44 */

void FUN_2c49cb44(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 local_18;
  uint local_14;
  
  local_14 = *DAT_2c49cbe4;
  local_18 = 0;
  uVar5 = FUN_2c49c9e8(param_1,0xe,&local_18);
  iVar1 = (int)uVar5;
  if (iVar1 < 0) goto LAB_2c49cb9e;
  uVar3 = (uint)CONCAT11((undefined1)local_18,local_18._1_1_);
  if ((int)((uint)CONCAT11((undefined1)local_18,local_18._1_1_) << 0x10) < 0) {
    uVar4 = *(uint *)(param_1 + 0x38);
    uVar3 = -(-uVar3 & 0xffff);
    if ((uVar4 & 0xc0) == 0) goto LAB_2c49cbc4;
LAB_2c49cb86:
    iVar2 = 0x640;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x38);
    if ((uVar4 & 0xc0) != 0) goto LAB_2c49cb86;
LAB_2c49cbc4:
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2d2,DAT_2c49cbf4,DAT_2c49cbf0,DAT_2c49cbec);
    }
    iVar2 = 0xee7;
  }
  iVar1 = 0;
  *(int *)(param_1 + 0x2c) =
       (int)((longlong)DAT_2c49cbe8 * (longlong)(int)(iVar2 * uVar3) >> 0x2c) -
       ((int)(iVar2 * uVar3) >> 0x1f);
LAB_2c49cb9e:
  if ((*DAT_2c49cbe4 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1,(int)((ulonglong)uVar5 >> 0x20),*DAT_2c49cbe4 ^ local_14,0);
}

