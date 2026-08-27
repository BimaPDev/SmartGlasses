/* FUN_2c4b3718 @ 0x2c4b3718 */

void FUN_2c4b3718(int param_1,uint param_2)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int local_18;
  uint local_14;
  
  local_14 = *DAT_2c4b37d8;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_18 = *(int *)(param_1 + 0x14);
    lVar5 = FUN_2c4b4674(3,&local_18);
    param_2 = (uint)((ulonglong)lVar5 >> 0x20);
    if ((int)lVar5 != 0) goto LAB_2c4b3780;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(char *)(param_1 + 0x31) == '\x01') && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_2c4b4990();
    param_2 = extraout_r1_01;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_2c4b4990();
    *(undefined4 *)(param_1 + 0x38) = 0;
    param_2 = extraout_r1;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    lVar5 = (ulonglong)param_2 << 0x20;
  }
  else {
    while (*(int *)(iVar1 + 0x2c) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x18);
      FUN_2c4b4990();
      *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x2c) = uVar4;
      iVar1 = *(int *)(param_1 + 0x34);
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x54);
    while (puVar2 != (undefined4 *)0x0) {
      uVar4 = *puVar2;
      iVar1 = puVar2[2];
      while (iVar1 != 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x18);
        FUN_2c4b4990();
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x54) + 8) = uVar3;
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x34) + 0x54);
        iVar1 = puVar2[2];
      }
      FUN_2c4b4990(puVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x54) = uVar4;
      iVar1 = *(int *)(param_1 + 0x34);
      puVar2 = *(undefined4 **)(iVar1 + 0x54);
    }
    FUN_2c4b4990(iVar1);
    lVar5 = (ulonglong)extraout_r1_00 << 0x20;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_2c4b3780:
  if ((*DAT_2c4b37d8 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*DAT_2c4b37d8 ^ local_14,0);
  }
  return;
}

