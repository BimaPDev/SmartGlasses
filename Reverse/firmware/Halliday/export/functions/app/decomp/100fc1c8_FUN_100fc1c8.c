/* FUN_100fc1c8 @ 0x100fc1c8 */

int FUN_100fc1c8(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 uStack_48;
  
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar5 = param_2 + 0x6c;
  local_54 = 0;
  if (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x10)) {
    if (param_3 != 2) {
      return 0x13;
    }
    if (*(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f < 0) {
      FUN_100fb5cc(uVar6,*(undefined4 *)(param_2 + 0x58));
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) & 0xfffffffe
      ;
    }
    iVar4 = FUN_100f90e8(param_2,2,param_4);
    if (iVar4 != 0) {
      iVar4 = 0x62;
      local_54 = 0x62;
      iVar2 = *(int *)(*(int *)(param_2 + 0x9c) + 4);
      goto joined_r0x100fc228;
    }
    uVar1 = FUN_100fb280(uVar6,*(undefined4 *)(param_2 + 0x54),0,*(undefined4 *)(param_2 + 0x4c),0,
                         &local_54);
    *(undefined4 *)(param_2 + 0x58) = uVar1;
    if (local_54 == 0) {
      iVar4 = *(int *)(param_2 + 100);
      iVar3 = *(int *)(param_2 + 0x4c);
      iVar2 = *(int *)(param_2 + 0x68);
      *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) | 1;
      iVar4 = iVar4 * -0x40;
      iVar2 = (iVar3 - iVar2) * 0x40;
      if (param_4 != (int *)0x0) {
        iVar4 = iVar4 + *param_4;
        iVar2 = iVar2 + param_4[1];
      }
      if (iVar4 != 0 || iVar2 != 0) {
        FUN_100fa540(iVar5,iVar4,iVar2);
      }
      local_50 = param_2 + 0x4c;
      uStack_48 = 0;
      local_4c = iVar5;
      local_54 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_50);
      if (local_54 == 0) {
        *(undefined4 *)(param_2 + 0x48) = DAT_100fc318;
        goto LAB_100fc246;
      }
      if (-1 < *(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f) goto LAB_100fc246;
      uVar1 = *(undefined4 *)(param_2 + 0x58);
    }
    else {
      if (-1 < *(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f) {
        return local_54;
      }
      iVar2 = 0;
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 6;
    local_54 = 6;
    iVar2 = *(int *)(*(int *)(param_2 + 0x9c) + 4);
joined_r0x100fc228:
    if (-1 < iVar2 << 0x1f) {
      return iVar4;
    }
    iVar2 = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x58);
    iVar4 = iVar2;
  }
  FUN_100fb5cc(uVar6,uVar1);
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) & 0xfffffffe;
LAB_100fc246:
  if (iVar4 == 0) {
    iVar4 = 0;
    if (iVar2 == 0) {
      return local_54;
    }
  }
  else {
    iVar4 = -iVar4;
  }
  FUN_100fa540(iVar5,iVar4,-iVar2);
  return local_54;
}

