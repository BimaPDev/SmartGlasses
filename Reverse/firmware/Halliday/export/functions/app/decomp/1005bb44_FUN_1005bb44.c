/* FUN_1005bb44 @ 0x1005bb44 */

int FUN_1005bb44(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_1[2] == 0) {
    return 0;
  }
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  uVar1 = FUN_1011b560(param_1[3]);
  iVar3 = param_1[2] - uVar1 * ((uint)param_1[2] / uVar1);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = uVar1 - iVar3;
    iVar3 = (**(code **)(*(int *)(param_1[3] + 8) + 0x10))();
    FUN_1011ea48(*param_1 + param_1[2],*(undefined1 *)(iVar3 + 4),iVar4);
  }
  iVar4 = iVar4 + param_1[2];
  uVar7 = 0;
  iVar3 = (**(code **)(*(int *)(param_1[3] + 8) + 4))();
  if (iVar3 != 0) {
    FUN_100a5b78(((int)PTR_DAT_1005bc54 - (int)PTR_DAT_1005bc50) * 0x20 & 0xff00U | 0x910012,
                 PTR_s_flash_sync_1005bc5c,PTR_s_flash_write_error__d_offset_0x_0_1005bc58,iVar3,
                 iVar6 + iVar5,0,iVar4,uVar7);
    return iVar3;
  }
  if (param_1[7] == 0) {
LAB_1005bbcc:
    param_1[4] = param_1[4] + param_1[2];
    param_1[2] = 0;
    iVar3 = 0;
  }
  else {
    for (uVar1 = 0; iVar4 = *param_1, uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
      *(byte *)(iVar4 + uVar1) = ~*(byte *)(iVar4 + uVar1);
    }
    iVar3 = (*(code *)**(undefined4 **)(param_1[3] + 8))();
    if (iVar3 == 0) {
      iVar3 = (*(code *)param_1[7])(*param_1,param_1[2],iVar6 + iVar5,(code *)param_1[7],iVar4);
      if (iVar3 == 0) goto LAB_1005bbcc;
      uVar1 = ((int)PTR_DAT_1005bc54 - (int)PTR_DAT_1005bc50) * 0x20 & 0xff00U | 0xa70000;
      puVar2 = PTR_s_callback_failed___d_1005bc64;
    }
    else {
      uVar1 = ((int)PTR_DAT_1005bc54 - (int)PTR_DAT_1005bc50) * 0x20 & 0xff00U | 0xa10000;
      puVar2 = PTR_s_flash_read_failed___d_1005bc60;
    }
    FUN_100a5b78(uVar1 | 0x11,PTR_s_flash_sync_1005bc5c,puVar2,iVar3);
  }
  return iVar3;
}

