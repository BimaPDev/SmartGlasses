/* FUN_2c4adb40 @ 0x2c4adb40 */

void FUN_2c4adb40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  piVar1 = DAT_2c4adc18;
  local_14 = *DAT_2c4adc14;
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x6bc) < 2)) {
    iVar4 = param_1 + *(uint *)(param_1 + 0x6bc) * 4;
    iVar2 = *(int *)(iVar4 + 0x6a8);
    param_2 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar4 + 0x6b4);
      if (iVar3 == 0) {
        uVar5 = CONCAT44(iVar2,1);
      }
      else if (*(uint *)(param_1 + 0x6b0) < iVar3 + 8U) {
        uVar5 = CONCAT44(iVar2,5);
        *(undefined4 *)(iVar4 + 0x6b4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + iVar3) = 0;
        iVar2 = *piVar1;
        iVar4 = param_1 + *(int *)(param_1 + 0x6bc) * 4;
        *(undefined4 *)(*(int *)(iVar4 + 0x6b4) + *(int *)(iVar4 + 0x6a8) + 4) = 0;
        local_28 = *(int *)(param_1 + 0x6bc);
        iVar4 = param_1 + local_28 * 4;
        local_2c = *(int *)(iVar4 + 0x6b4) + 8;
        *(int *)(iVar4 + 0x6b4) = local_2c;
        local_30 = *(undefined4 *)(iVar4 + 0x6a8);
        local_34 = param_1;
        if (iVar2 != 0) {
          local_18 = 0;
          local_1c = 0xffffffff;
          local_24 = DAT_2c4adc1c;
          uStack_20 = 0xffffffff;
          uVar5 = FUN_2c4b4674(5,&local_24);
          if ((int)uVar5 != 0) goto LAB_2c4adbf0;
          *piVar1 = 0;
        }
        uVar5 = FUN_2c4b4674(4,&local_34);
        if ((int)uVar5 == 0) {
          iVar2 = *(int *)(param_1 + 0x6bc);
          *piVar1 = 1;
          *(undefined4 *)(param_1 + iVar2 * 4 + 0x6b4) = 0;
        }
      }
      goto LAB_2c4adbf0;
    }
  }
  uVar5 = CONCAT44(param_2,3);
LAB_2c4adbf0:
  if ((*DAT_2c4adc14 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),*DAT_2c4adc14 ^ local_14,0);
}

