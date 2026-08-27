/* FUN_2c4add48 @ 0x2c4add48 */

uint FUN_2c4add48(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_24 [4];
  uint local_14;
  
  iVar5 = DAT_2c4ade14;
  local_14 = *DAT_2c4ade10;
  uVar4 = *(uint *)(DAT_2c4ade14 + 0x6bc);
  if ((1 < uVar4) || (iVar3 = *(int *)(DAT_2c4ade14 + (uVar4 + 0x1aa) * 4), iVar3 == 0)) {
    uVar1 = 3;
    uVar4 = param_1;
    goto LAB_2c4addb8;
  }
  uVar6 = *param_2;
  iVar2 = *(int *)(DAT_2c4ade14 + uVar4 * 4 + 0x6b4);
  uVar1 = iVar2 + 0x10;
  if (*(uint *)(DAT_2c4ade14 + 0x6b0) <= uVar1) {
    uVar1 = FUN_2c4adb40(DAT_2c4ade14);
    uVar4 = uVar1;
    if (uVar1 != 0) goto LAB_2c4addb8;
    local_24[2] = 0xffffffff;
    local_24[0] = iVar5;
    local_24[1] = 0xffffffff;
    local_24[3] = uVar1;
    uVar1 = FUN_2c4b4674(5,local_24);
    uVar4 = uVar1;
    if (uVar1 != 0) goto LAB_2c4addb8;
    *DAT_2c4ade1c = 0;
    iVar3 = *(int *)(iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1aa) * 4);
    iVar2 = *(int *)(iVar5 + *(int *)(iVar5 + 0x6bc) * 4 + 0x6b4);
  }
  *(uint *)(iVar3 + iVar2) = DAT_2c4ade18 | param_1;
  *(undefined4 *)
   (*(int *)(iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1aa) * 4) +
    *(int *)(iVar5 + *(int *)(iVar5 + 0x6bc) * 4 + 0x6b4) + 4) = uVar6;
  iVar5 = iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1ac) * 4;
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 8;
  uVar4 = uVar1;
  uVar1 = 0;
LAB_2c4addb8:
  if ((*DAT_2c4ade10 ^ local_14) == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar4,*DAT_2c4ade10 ^ local_14,0);
}

