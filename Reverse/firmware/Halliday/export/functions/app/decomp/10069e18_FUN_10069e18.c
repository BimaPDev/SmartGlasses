/* FUN_10069e18 @ 0x10069e18 */

int FUN_10069e18(int *param_1,uint param_2,undefined2 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_44;
  uint local_40;
  int *local_34;
  
  local_34 = param_1 + 0x12;
  FUN_10069b0c(param_1,param_1 + 1,param_2,0x20);
  FUN_1011ea48(local_34,0,0x20);
  iVar6 = DAT_1006a0a8;
  iVar5 = *param_4;
  uVar3 = *param_5 - iVar5;
  param_1[0x15] = uVar3;
  param_1[0x16] = iVar5;
  *(undefined2 *)(param_1 + 0x13) = param_3;
  *(undefined2 *)((int)param_1 + 0x4e) = 0x20;
  param_1[0x12] = iVar6;
  if (uVar3 != 0) {
    piVar2 = param_1 + 0x1a;
    uVar10 = 0;
    iVar6 = param_1[0x14];
    while( true ) {
      uVar8 = uVar3 - uVar10;
      uVar3 = iVar5 + uVar10;
      if (0x7fff < uVar8) {
        uVar8 = 0x8000;
      }
      FUN_10114a38();
      uVar7 = iVar6 + param_2 + 0x20;
      if (uVar3 < 0x40000000) {
        iVar5 = param_1[4];
      }
      else {
        FUN_1011ea40(param_1[4] + 0x8000,uVar3,uVar8);
        iVar5 = param_1[4];
        uVar3 = iVar5 + 0x8000;
      }
      local_44 = FUN_1006b960(1,uVar3,uVar8,iVar5);
      if (local_44 == 0) {
        FUN_101150e0();
        FUN_100a5b78((DAT_1006a0b4 - DAT_1006a0b0) * 0x20 & 0xff00U | 0x1980011,DAT_1006a0bc,
                     DAT_1006a0b8);
        return 0;
      }
      uVar3 = local_44 & 3;
      param_1[0x1a] = DAT_1006a0ac;
      param_1[0x1b] = 0x10;
      param_1[0x1c] = local_44;
      param_1[0x1d] = uVar8;
      if (uVar3 != 0) {
        iVar5 = param_1[4] + local_44;
        local_44 = (local_44 + 4) - uVar3;
        FUN_1011ea48(iVar5,0,4 - uVar3);
      }
      iVar9 = local_44 + 0x10;
      FUN_10069b0c(param_1,param_1 + 1,uVar7,iVar9);
      iVar5 = *param_1;
      uVar3 = *(uint *)(iVar5 + 0x10);
      if (uVar3 <= uVar7) {
        uVar7 = uVar7 - uVar3;
      }
      if (uVar3 < uVar7 + 0x10) {
        FUN_10069ba8(param_1,1,*(int *)(iVar5 + 0xc) + uVar7,0,piVar2,uVar3 - uVar7);
        iVar4 = (0x10 - uVar3) + uVar7;
        piVar1 = (int *)((int)piVar2 + (uVar3 - uVar7));
        uVar7 = 0;
        iVar5 = *param_1;
      }
      else {
        iVar4 = 0x10;
        piVar1 = piVar2;
      }
      FUN_10069ba8(param_1,1,*(int *)(iVar5 + 0xc) + uVar7,0,piVar1,iVar4);
      iVar5 = *param_1;
      uVar3 = iVar6 + param_2 + 0x30;
      uVar7 = *(uint *)(iVar5 + 0x10);
      iVar6 = param_1[4];
      if (uVar7 <= uVar3) {
        uVar3 = uVar3 - uVar7;
      }
      if (uVar7 < uVar3 + local_44) {
        iVar4 = uVar7 - uVar3;
        FUN_10069ba8(param_1,1,*(int *)(iVar5 + 0xc) + uVar3,0,iVar6,iVar4);
        local_44 = (local_44 - uVar7) + uVar3;
        iVar5 = *param_1;
        uVar3 = 0;
        iVar6 = iVar6 + iVar4;
      }
      FUN_10069ba8(param_1,1,*(int *)(iVar5 + 0xc) + uVar3,0,iVar6,local_44);
      FUN_101150e0();
      if (iVar9 == 0) {
        return 0;
      }
      uVar3 = param_1[0x15];
      uVar10 = uVar10 + uVar8;
      iVar6 = param_1[0x14] + iVar9;
      param_1[0x14] = iVar6;
      if (uVar3 <= uVar10) break;
      iVar5 = param_1[0x16];
    }
  }
  iVar6 = *param_1;
  uVar3 = *(uint *)(iVar6 + 0x10);
  local_40 = param_2;
  if (uVar3 <= param_2) {
    local_40 = param_2 - uVar3;
  }
  if (uVar3 < local_40 + 0x20) {
    FUN_10069ba8(param_1,1,*(int *)(iVar6 + 0xc) + local_40,0,local_34,uVar3 - local_40);
    local_34 = (int *)((int)local_34 + (uVar3 - local_40));
    uVar10 = 0;
    iVar6 = *param_1;
    iVar5 = (0x20 - uVar3) + local_40;
  }
  else {
    iVar5 = 0x20;
    uVar10 = local_40;
  }
  FUN_10069ba8(param_1,1,uVar10 + *(int *)(iVar6 + 0xc),0,local_34,iVar5);
  FUN_100a5b78((DAT_1006a0b4 - DAT_1006a0b0) * 0x20 & 0xff00U | 0x1da0034,DAT_1006a0c4,DAT_1006a0c0,
               (short)param_1[0x13],param_1[0x16],param_1[0x15],param_1[0x14]);
  return param_1[0x14] + 0x20;
}

