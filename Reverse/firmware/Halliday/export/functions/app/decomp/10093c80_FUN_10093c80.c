/* FUN_10093c80 @ 0x10093c80 */

int FUN_10093c80(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint local_38;
  uint local_34 [2];
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return 0xb;
  }
  pcVar9 = *(code **)(iVar1 + 0x10);
  if (pcVar9 == (code *)0x0) {
    return 9;
  }
  uVar8 = (uint)*(ushort *)(iVar1 + 2);
  local_38 = 0;
  if (uVar8 == 0) {
    iVar1 = (*pcVar9)(iVar1,*param_1,param_2,param_3,&local_38);
    goto LAB_10093d48;
  }
  puVar4 = (uint *)param_1[2];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  if ((uVar6 < *puVar4) || (puVar4[1] <= uVar6)) {
    if (uVar8 < param_3) {
      iVar1 = (*pcVar9)(iVar1,*param_1,param_2,param_3,&local_38);
    }
    else {
      if (uVar7 == 0) {
        uVar7 = FUN_10094254(uVar8,DAT_10093e48);
        iVar1 = param_1[2];
        puVar4[3] = uVar7;
        if (*(int *)(iVar1 + 0xc) == 0) {
          uVar10 = FUN_10094174(3,DAT_10093e58,0xb7,DAT_10093e48,DAT_10093e54,DAT_10093e50,
                                DAT_10093e4c);
          FUN_10119dc2(DAT_10093e60,DAT_10093e5c,DAT_10093e58,0xb7,uVar10);
          FUN_10119dc2(DAT_10093e64);
          FUN_1011a1f0(DAT_10093e58,0xb7,extraout_r2,extraout_r3);
        }
        uVar7 = *(uint *)(param_1[2] + 0xc);
      }
      local_34[0] = 0;
      iVar1 = (**(code **)(param_1[1] + 0x10))(param_1[1],*param_1,uVar7,uVar8,local_34);
      puVar4 = (uint *)param_1[2];
      *puVar4 = uVar6;
      local_38 = local_34[0];
      if (param_3 <= local_34[0]) {
        local_38 = param_3;
      }
      puVar4[1] = uVar6 + local_34[0];
      thunk_FUN_1011ea40(param_2,uVar7);
    }
LAB_10093d42:
    if (iVar1 != 0) goto LAB_10093d48;
  }
  else {
    uVar2 = uVar6 - *puVar4 & 0xffff;
    uVar6 = puVar4[1] - uVar6;
    uVar5 = uVar8 - uVar2;
    if (uVar5 <= uVar6) {
      uVar6 = uVar5;
    }
    iVar1 = uVar2 + uVar7;
    if (uVar6 < param_3) {
      thunk_FUN_1011ea40(param_2,iVar1,uVar6);
      local_34[0] = 0;
      iVar1 = param_1[1];
      uVar2 = param_3 - uVar6;
      if (uVar8 < param_3) {
        iVar1 = (**(code **)(iVar1 + 0x10))(iVar1,*param_1,param_2 + uVar6,uVar2);
      }
      else {
        iVar1 = (**(code **)(iVar1 + 0x10))(iVar1,*param_1,uVar7,uVar8,local_34);
        piVar3 = (int *)param_1[2];
        *piVar3 = piVar3[1];
        uVar8 = local_34[0];
        if (uVar2 <= local_34[0]) {
          uVar8 = uVar2;
        }
        piVar3[1] = piVar3[1] + local_34[0];
        thunk_FUN_1011ea40(param_2 + uVar6,uVar7,uVar8 & 0xffff);
      }
      local_38 = uVar6 + local_34[0];
      if (param_3 < local_38) {
        local_38 = param_3;
      }
      goto LAB_10093d42;
    }
    thunk_FUN_1011ea40(param_2,iVar1,param_3);
    local_38 = param_3;
  }
  iVar1 = 0;
  *(uint *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + local_38;
LAB_10093d48:
  if (param_4 != (uint *)0x0) {
    *param_4 = local_38;
  }
  return iVar1;
}

