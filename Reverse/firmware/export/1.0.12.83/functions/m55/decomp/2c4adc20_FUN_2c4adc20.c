/* FUN_2c4adc20 @ 0x2c4adc20 */

void FUN_2c4adc20(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_34 [4];
  int local_24;
  
  iVar3 = DAT_2c4add40;
  local_24 = *DAT_2c4add3c;
  uVar2 = *(uint *)(DAT_2c4add40 + 0x6bc);
  if ((1 < uVar2) || (iVar4 = *(int *)(DAT_2c4add40 + (uVar2 + 0x1aa) * 4), iVar4 == 0))
  goto LAB_2c4adc6e;
  iVar1 = *(int *)(DAT_2c4add40 + uVar2 * 4 + 0x6b4);
  uVar2 = param_1 + 7;
  if (*(uint *)(DAT_2c4add40 + 0x6b0) <= iVar1 + 0x10 + (uVar2 & 0xfffffff8)) {
    iVar4 = FUN_2c4adb40(DAT_2c4add40);
    if (iVar4 != 0) goto LAB_2c4adc6e;
    local_34[0] = iVar3;
    local_34[1] = 0xffffffff;
    local_34[2] = 0xffffffff;
    local_34[3] = iVar4;
    iVar4 = FUN_2c4b4674(5,local_34);
    if (iVar4 != 0) goto LAB_2c4adc6e;
    iVar1 = *(int *)(iVar3 + 0x6bc);
    *DAT_2c4add44 = 0;
    iVar4 = *(int *)(iVar3 + (iVar1 + 0x1aa) * 4);
    iVar1 = *(int *)(iVar3 + iVar1 * 4 + 0x6b4);
  }
  puVar5 = (undefined4 *)(iVar4 + (uVar2 & 0xfffffff8) + iVar1);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(uint *)(*(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) +
           *(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4)) = (int)uVar2 >> 3 | 0x40000000;
  *(undefined4 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 4) = 0;
  FUN_2c674668(*(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) +
               *(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) + 8,param_2,param_1);
  iVar3 = iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1ac) * 4;
  *(uint *)(iVar3 + 4) = (uVar2 & 0xfffffff8) + *(int *)(iVar3 + 4) + 8;
LAB_2c4adc6e:
  if (*DAT_2c4add3c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

