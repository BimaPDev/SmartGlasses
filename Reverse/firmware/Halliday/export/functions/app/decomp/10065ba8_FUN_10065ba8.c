/* FUN_10065ba8 @ 0x10065ba8 */

undefined4 FUN_10065ba8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  FUN_1011df5e();
  uVar3 = FUN_1011df34(param_1);
  param_1[0x28] = uVar3;
  if (uVar3 < 4) {
    if (uVar3 == 1) {
      iVar5 = FUN_1011df34(param_1);
      if (2 < iVar5 - 1U) goto LAB_10065bc0;
      param_1[iVar5 + 0x28] = iVar5;
      uVar3 = FUN_1011df34(param_1);
      param_1[iVar5 + 0x2b] = uVar3 >> 4;
      param_1[iVar5 + 0x2e] = uVar3 & 0xf;
      param_1[0x24] = 1;
    }
    else {
      piVar9 = param_1 + 0x29;
      for (uVar3 = 0; uVar3 < (uint)param_1[0x28]; uVar3 = uVar3 + 1) {
        iVar5 = FUN_1011df34(param_1);
        *piVar9 = iVar5;
        uVar6 = FUN_1011df34(param_1);
        piVar9[3] = uVar6 >> 4;
        piVar9[6] = uVar6 & 0xf;
        piVar9 = piVar9 + 1;
      }
      param_1[0x24] = 3;
    }
    FUN_1011dfde(param_1,3);
    puVar2 = DAT_10065c88;
    puVar1 = DAT_10065c84;
    if ((param_1[0x24] == 3) && (param_1[0x25] == 1)) {
      uVar4 = DAT_10065c88[1];
      uVar7 = DAT_10065c88[2];
      uVar8 = DAT_10065c88[3];
      puVar10 = DAT_10065c88 + 4;
      *DAT_10065c84 = *DAT_10065c88;
      puVar1[1] = uVar4;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      uVar4 = puVar2[5];
      uVar7 = puVar2[6];
      uVar8 = puVar2[7];
      puVar1[4] = *puVar10;
      puVar1[5] = uVar4;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      uVar4 = puVar2[9];
      uVar7 = puVar2[10];
      uVar8 = puVar2[0xb];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar4;
      puVar1[10] = uVar7;
      puVar1[0xb] = uVar8;
      uVar4 = puVar2[0xd];
      uVar7 = puVar2[0xe];
      uVar8 = puVar2[0xf];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xd] = uVar4;
      puVar1[0xe] = uVar7;
      puVar1[0xf] = uVar8;
      uVar4 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2[0x20] = *puVar1;
      puVar2[0x21] = uVar4;
      puVar2[0x22] = uVar7;
      puVar2[0x23] = uVar8;
      uVar4 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      puVar2[0x24] = puVar1[4];
      puVar2[0x25] = uVar4;
      puVar2[0x26] = uVar7;
      puVar2[0x27] = uVar8;
      uVar4 = puVar1[9];
      uVar7 = puVar1[10];
      uVar8 = puVar1[0xb];
      puVar2[0x28] = puVar1[8];
      puVar2[0x29] = uVar4;
      puVar2[0x2a] = uVar7;
      puVar2[0x2b] = uVar8;
      uVar4 = puVar1[0xd];
      uVar7 = puVar1[0xe];
      uVar8 = puVar1[0xf];
      puVar2[0x2c] = puVar1[0xc];
      puVar2[0x2d] = uVar4;
      puVar2[0x2e] = uVar7;
      puVar2[0x2f] = uVar8;
    }
    uVar4 = 0;
    param_1[4] = *param_1 + param_1[2];
    param_1[6] = param_1[1] - param_1[2];
  }
  else {
LAB_10065bc0:
    uVar4 = 0xfffffffb;
  }
  return uVar4;
}

