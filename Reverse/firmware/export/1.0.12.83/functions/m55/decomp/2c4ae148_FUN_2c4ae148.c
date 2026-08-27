/* FUN_2c4ae148 @ 0x2c4ae148 */

void FUN_2c4ae148(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_24 [4];
  uint local_14;
  
  local_14 = *DAT_2c4ae200;
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x6bc) < 2)) {
    iVar3 = param_1 + *(uint *)(param_1 + 0x6bc) * 4;
    iVar2 = *(int *)(iVar3 + 0x6a8);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar3 + 0x6b4);
      if (*(uint *)(param_1 + 0x6b0) <= uVar1 + 0x10) {
        uVar4 = FUN_2c4adb40();
        iVar3 = (int)uVar4;
        uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
        if (iVar3 != 0) goto LAB_2c4ae1b2;
        local_24[2] = 0xffffffff;
        local_24[1] = 0xffffffff;
        local_24[0] = param_1;
        local_24[3] = iVar3;
        uVar4 = FUN_2c4b4674(5,local_24);
        iVar3 = (int)uVar4;
        uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
        if (iVar3 != 0) goto LAB_2c4ae1b2;
        iVar2 = param_1 + *(int *)(param_1 + 0x6bc) * 4;
        *DAT_2c4ae208 = 0;
        uVar1 = *(uint *)(iVar2 + 0x6b4);
        iVar2 = *(int *)(iVar2 + 0x6a8);
      }
      iVar3 = 0;
      *(uint *)(iVar2 + uVar1) = DAT_2c4ae204 | param_2;
      iVar2 = param_1 + *(int *)(param_1 + 0x6bc) * 4;
      *(undefined4 *)(*(int *)(iVar2 + 0x6b4) + *(int *)(iVar2 + 0x6a8) + 4) = param_3;
      param_1 = param_1 + *(int *)(param_1 + 0x6bc) * 4;
      *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + 8;
      goto LAB_2c4ae1b2;
    }
  }
  iVar3 = 3;
  uVar1 = param_2;
LAB_2c4ae1b2:
  if ((*DAT_2c4ae200 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar3,uVar1,*DAT_2c4ae200 ^ local_14,0);
}

