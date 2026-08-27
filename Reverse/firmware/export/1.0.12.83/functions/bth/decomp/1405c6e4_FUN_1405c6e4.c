/* FUN_1405c6e4 @ 0x1405c6e4 */

void FUN_1405c6e4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined2 local_16;
  uint local_14;
  
  local_14 = *DAT_1405c80c;
  uVar7 = (uint)*(byte *)(param_1 + 0x10);
  if (uVar7 < 2) {
    iVar6 = *(int *)(DAT_1405c810 + uVar7 * 4);
  }
  else {
    iVar6 = 0;
  }
  iVar3 = param_3;
  if (param_3 != 0) goto switchD_1405c70c_caseD_1;
  switch(param_2) {
  case 0:
    local_16 = 0x1801;
    uVar8 = FUN_1406a4a0(uVar7,*(undefined1 *)(DAT_1405c810 + 0x4f),2,1,1,1,0xffff,0,&local_16);
    goto joined_r0x1405c790;
  case 2:
    if (*(short *)(param_1 + 0x14) == 0) goto switchD_1405c70c_caseD_3;
    local_16 = CONCAT11(local_16._1_1_,7);
    uVar8 = FUN_1405c660(uVar7,3,*(short *)(param_1 + 0x14),1,&local_16);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    iVar3 = (int)uVar8;
    if (iVar3 != 0) break;
    goto LAB_1405c792;
  case 3:
switchD_1405c70c_caseD_3:
    if ((*(char *)(iVar6 + 0x37) == '\0') ||
       (iVar3 = FUN_1406b558(uVar7,*(undefined1 *)(DAT_1405c810 + 0x4f),*(short *)(iVar6 + 0x34),
                             (ushort)*(byte *)(iVar6 + 0x36) + *(short *)(iVar6 + 0x34)), iVar3 == 0
       )) {
      if (*(short *)(param_1 + 0x12) == 0) goto switchD_1405c70c_caseD_4;
      local_16 = 2;
      FUN_1405c660(uVar7,4,*(short *)(param_1 + 0x12),2,&local_16);
      uVar4 = extraout_r1_00;
      goto LAB_1405c792;
    }
    break;
  case 4:
switchD_1405c70c_caseD_4:
    sVar5 = *(short *)(param_1 + 0x18);
    if (sVar5 == 0) goto switchD_1405c70c_caseD_5;
    uVar1 = *(undefined1 *)(DAT_1405c810 + 0x4f);
    uVar4 = 5;
LAB_1405c782:
    uVar8 = FUN_14064b8c(uVar7,uVar1,uVar4,sVar5,0,0);
joined_r0x1405c790:
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    iVar3 = (int)uVar8;
    if (iVar3 == 0) {
LAB_1405c792:
      uVar2 = 0;
      goto LAB_1405c758;
    }
    break;
  case 5:
switchD_1405c70c_caseD_5:
    sVar5 = *(short *)(param_1 + 0x16);
    iVar3 = param_3;
    if ((sVar5 != 0) && (*(int *)(*(int *)(DAT_1405c810 + 0xc) + 0x10) != 0)) {
      uVar1 = *(undefined1 *)(DAT_1405c810 + 0x4f);
      uVar4 = 6;
      goto LAB_1405c782;
    }
  }
switchD_1405c70c_caseD_1:
  FUN_1405c424(uVar7);
  (**(code **)(param_1 + 8))(uVar7,*(undefined4 *)(param_1 + 0xc),iVar3);
  uVar2 = 1;
  uVar4 = extraout_r1;
LAB_1405c758:
  if ((*DAT_1405c80c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar2,uVar4,*DAT_1405c80c ^ local_14,0);
}

