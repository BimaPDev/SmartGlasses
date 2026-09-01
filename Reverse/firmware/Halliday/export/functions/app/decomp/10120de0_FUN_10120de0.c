/* FUN_10120de0 @ 0x10120de0 */

undefined4 FUN_10120de0(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  piVar5 = *(int **)(param_1 + 0xc);
  piVar8 = &local_28;
  puVar7 = &local_38;
  piVar6 = piVar5 + 0x438;
  FUN_10120b6a();
  iVar2 = *piVar6;
  if (local_30 == iVar2) {
    local_34 = piVar5[0x439];
    puVar7 = param_4;
    FUN_10120be2(param_1,&local_34,local_2c,(int)piVar5 + 0xc6,param_4);
    piVar5[0x439] = local_34;
    uVar1 = (uint)*(byte *)(*piVar5 + 10) * (uint)*(byte *)(*piVar5 + 0xb);
    if (uVar1 == 0x20) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (1 << (uVar1 & 0xff)) - 1;
    }
    if ((local_34 & uVar1) == 0) {
      return 1;
    }
    FUN_10120c8e(param_1,*piVar6,local_34,(int)piVar5 + 0xc6,puVar7,piVar8);
    *piVar6 = -1;
    piVar5[0x439] = 0;
  }
  else {
    if (iVar2 != -1) {
      FUN_10120c8e(param_1,iVar2,piVar5[0x439],(int)piVar5 + 0xc6,puVar7,piVar8);
      *piVar6 = -1;
      piVar5[0x439] = 0;
    }
    uVar1 = (uint)*(byte *)(*piVar5 + 10) * (uint)*(byte *)(*piVar5 + 0xb);
    if (uVar1 == 0x20) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (1 << (uVar1 & 0xff)) - 1;
    }
    uVar3 = local_2c;
    puVar4 = param_4;
    if (local_2c != uVar1) {
      puVar4 = (uint *)((int)piVar5 + 0xc6);
      FUN_10120c8e(param_1,local_30,0,puVar4,puVar7,piVar8);
      local_34 = 0;
      puVar7 = param_4;
      FUN_10120be2(param_1,&local_34,local_2c,puVar4,param_4);
      uVar3 = local_34;
      if (local_24 == 0 && local_38 == 0) goto LAB_10120f2e;
    }
    FUN_10120c8e(param_1,local_30,uVar3,puVar4,puVar7,piVar8);
  }
  for (uVar1 = 0; (uint)*(byte *)(*piVar5 + 0xb) * (uint)*(byte *)(*piVar5 + 10) - uVar1 != 0;
      uVar1 = uVar1 + 1) {
    if ((1 << (uVar1 & 0xff) & local_2c) != 0) {
      param_4 = param_4 + 0x80;
    }
  }
  for (; uVar1 = local_38, local_38 != 0; local_38 = local_38 - 1) {
    uVar1 = (uint)*(byte *)(*piVar5 + 0xb) * (uint)*(byte *)(*piVar5 + 10);
    if (uVar1 == 0x20) {
      iVar2 = -1;
    }
    else {
      iVar2 = (1 << (uVar1 & 0xff)) + -1;
    }
    FUN_10120c8e(param_1,local_30 + 1,iVar2,param_4);
    param_4 = param_4 + (uint)*(byte *)(*piVar5 + 0xb) * (uint)*(byte *)(*piVar5 + 10) * 0x80;
    local_30 = local_30 + 1;
  }
  if (local_24 == 0) {
    return 1;
  }
  FUN_10120c8e(param_1,local_28,0);
  local_34 = uVar1;
  FUN_10120be2(param_1,&local_34,local_24,(int)piVar5 + 0xc6,param_4);
  local_30 = local_28;
LAB_10120f2e:
  *piVar6 = local_30;
  piVar5[0x439] = local_34;
  return 1;
}

