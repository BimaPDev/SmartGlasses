/* FUN_2c6717d8 @ 0x2c6717d8 */

undefined4 FUN_2c6717d8(undefined4 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 local_34 [4];
  
  iVar11 = 0;
  local_34[0] = *DAT_2c6719b8;
  local_34[1] = DAT_2c6719b8[1];
  local_34[2] = DAT_2c6719b8[2];
  pcVar3 = DAT_2c6719c0;
  if (param_2[6] != 3) {
    pcVar3 = DAT_2c6719bc;
  }
  if (param_2[2] - 1 < 0x15d) {
    iVar9 = 0;
  }
  else {
    iVar9 = param_2[2] - 0x15d;
    param_2[2] = 0x15d;
  }
  puVar8 = param_2 + 7;
  *param_2 = *param_2 | 0xd00;
  puVar10 = puVar8;
  do {
    iVar1 = FUN_2c643680(local_34[iVar11],*(undefined1 *)*param_3,2);
    if (iVar1 != 0) {
      if (iVar11 == 1) {
        if (param_2[1] == 0) {
          param_2[1] = 8;
          *param_2 = *param_2 | 0x200;
        }
        uVar4 = *param_2 & 0xfffffaff;
LAB_2c67185e:
        *param_2 = uVar4;
      }
      else if (iVar11 == 2) {
        if ((*param_2 & 0x600) != 0x200) goto LAB_2c67188e;
        uVar4 = *param_2 | 0x100;
        param_2[1] = 0x10;
        goto LAB_2c67185e;
      }
      uVar4 = param_2[2];
      param_2[2] = uVar4 - 1;
      if (uVar4 != 0) {
        pbVar5 = (byte *)*param_3;
        *param_3 = (int)(pbVar5 + 1);
        puVar7 = (uint *)((int)puVar10 + 1);
        *(byte *)puVar10 = *pbVar5;
        iVar1 = param_3[1];
        param_3[1] = iVar1 + -1;
        puVar10 = puVar7;
        if ((iVar1 + -1 < 1) && (iVar1 = (*(code *)param_2[0x60])(param_1,param_3), iVar1 != 0)) {
          iVar11 = 0;
          goto LAB_2c671934;
        }
      }
    }
LAB_2c67188e:
    iVar11 = iVar11 + 1;
  } while (iVar11 != 3);
  if (param_2[1] == 0) {
    param_2[1] = 10;
  }
  iVar11 = 0;
  FUN_2c6719ec(param_2[5],DAT_2c6719c4 - param_2[1]);
  while( true ) {
    puVar7 = puVar10;
    if (param_2[2] == 0) break;
    pbVar5 = (byte *)*param_3;
    uVar4 = (uint)*pbVar5;
    if (*(char *)(param_2[5] + uVar4) == '\0') break;
    if ((uVar4 == 0x30) && ((int)(*param_2 << 0x14) < 0)) {
      iVar11 = iVar11 + 1;
      if (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      *param_2 = *param_2 & 0xfffff6ff;
      puVar7 = (uint *)((int)puVar10 + 1);
      *(byte *)puVar10 = *pbVar5;
    }
    iVar1 = param_3[1];
    param_3[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      iVar1 = (*(code *)param_2[0x60])(param_1,param_3);
      if (iVar1 != 0) break;
    }
    else {
      *param_3 = *param_3 + 1;
    }
    param_2[2] = param_2[2] - 1;
    puVar10 = puVar7;
  }
LAB_2c671934:
  puVar10 = puVar7;
  if ((int)(*param_2 << 0x17) < 0) {
    if (puVar8 < puVar7) {
      puVar10 = (uint *)((int)puVar7 + -1);
      (*(code *)param_2[0x5f])(param_1,*(byte *)((int)puVar7 + -1),param_3);
    }
    if (puVar10 == puVar8) {
      return 1;
    }
  }
  if ((*param_2 & 0x10) == 0) {
    *(byte *)puVar10 = 0;
    uVar2 = (*pcVar3)(param_1,puVar8,0,param_2[1]);
    uVar4 = *param_2;
    puVar6 = (undefined4 *)*param_4;
    if ((uVar4 & 0x20) == 0) {
      *param_4 = puVar6 + 1;
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)*puVar6 = uVar2;
      }
      else {
        *(short *)*puVar6 = (short)uVar2;
      }
    }
    else {
      *param_4 = puVar6 + 1;
      *(undefined4 *)*puVar6 = uVar2;
    }
    param_2[3] = param_2[3] + 1;
  }
  param_2[4] = (uint)((int)puVar10 + param_2[4] + (iVar11 - (int)puVar8));
  return 0;
}

