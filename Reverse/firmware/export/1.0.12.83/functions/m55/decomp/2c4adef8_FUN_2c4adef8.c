/* FUN_2c4adef8 @ 0x2c4adef8 */

void FUN_2c4adef8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_24 [4];
  uint local_14;
  
  iVar4 = DAT_2c4adff4;
  local_14 = *DAT_2c4adff0;
  uVar2 = *(uint *)(DAT_2c4adff4 + 0x6bc);
  if ((1 < uVar2) || (iVar1 = *(int *)(DAT_2c4adff4 + (uVar2 + 0x1aa) * 4), iVar1 == 0)) {
    iVar1 = 3;
    goto LAB_2c4adf98;
  }
  iVar3 = *(int *)(DAT_2c4adff4 + uVar2 * 4 + 0x6b4);
  if (*(uint *)(DAT_2c4adff4 + 0x6b0) <= iVar3 + 0x10U) {
    uVar5 = FUN_2c4adb40(DAT_2c4adff4);
    param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 != 0) goto LAB_2c4adf98;
    local_24[2] = 0xffffffff;
    local_24[0] = iVar4;
    local_24[1] = 0xffffffff;
    local_24[3] = iVar1;
    uVar5 = FUN_2c4b4674(5,local_24);
    param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 != 0) goto LAB_2c4adf98;
    iVar3 = *(int *)(iVar4 + 0x6bc);
    *DAT_2c4ae000 = 0;
    iVar1 = *(int *)(iVar4 + (iVar3 + 0x1aa) * 4);
    iVar3 = *(int *)(iVar4 + iVar3 * 4 + 0x6b4);
  }
  param_2 = 0;
  *(undefined4 *)(iVar1 + iVar3) = DAT_2c4adff8;
  iVar1 = 0;
  *(undefined4 *)
   (*(int *)(iVar4 + *(int *)(iVar4 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1aa) * 4) + 4) = 0;
  *(undefined4 *)
   (*(int *)(iVar4 + *(int *)(iVar4 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1aa) * 4) + 8) = DAT_2c4adffc;
  *(undefined4 *)
   (*(int *)(iVar4 + *(int *)(iVar4 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1aa) * 4) + 0xc) = 0;
  iVar4 = iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1ac) * 4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0x10;
LAB_2c4adf98:
  if ((*DAT_2c4adff0 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1,param_2,*DAT_2c4adff0 ^ local_14,0);
}

