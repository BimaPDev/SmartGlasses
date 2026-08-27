/* FUN_2c4b07f0 @ 0x2c4b07f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c4b07f0(undefined4 param_1,undefined4 param_2,float param_3,float param_4,int param_5,
            undefined1 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_5 + 0x30);
  puVar1 = (undefined4 *)FUN_2c4b4980(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    return 5;
  }
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_6;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (iVar3 != 0) {
    if (param_3 == 0.0) {
      if (param_4 == 0.0) {
        iVar2 = *(int *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x14) = 0;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0xc) = 0;
        if (param_4 <= 0.0) {
          *(undefined4 *)(iVar3 + 0x10) = _LAB_2c4b0a48;
          *(float *)(iVar3 + 0x14) = -param_4;
        }
        else {
          *(float *)(iVar3 + 0x14) = param_4;
          *(undefined4 *)(iVar3 + 0x10) = 0x3f800000;
        }
      }
    }
    else if (param_4 == 0.0) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
      if (param_3 <= 0.0) {
        *(undefined4 *)(iVar3 + 0xc) = _LAB_2c4b0a48;
        *(float *)(iVar3 + 0x14) = -param_3;
      }
      else {
        *(float *)(iVar3 + 0x14) = param_3;
        *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
      }
    }
    else {
      fVar8 = param_3;
      if (param_3 < 0.0) {
        fVar8 = -param_3;
      }
      fVar7 = param_4;
      if (param_4 < 0.0) {
        fVar7 = -param_4;
      }
      if (fVar8 < fVar7) {
        fVar5 = fVar8 / fVar7;
        fVar6 = fVar5 * fVar5;
        fVar8 = fVar6 * fVar6 * fVar6;
        fVar4 = fVar6 * fVar8;
        fVar8 = fVar6 * 0.5 + 1.0 + -(fVar6 * fVar6) * fRam2c4b0a38 + fVar8 * fRam2c4b0a3c +
                -fVar4 * fRam2c4b0a40 + fVar6 * fVar4 * fRam2c4b0a44;
        fVar4 = 1.0 / fVar8;
        fVar8 = fVar7 * fVar8;
        fVar5 = fVar5 * fVar4;
      }
      else {
        fVar7 = fVar7 / fVar8;
        fVar6 = fVar7 * fVar7;
        fVar4 = fVar6 * fVar6 * fVar6;
        fVar5 = fVar6 * fVar4;
        fVar4 = fVar6 * 0.5 + 1.0 + -(fVar6 * fVar6) * fRam2c4b0a38 + fVar4 * fRam2c4b0a3c +
                -fVar5 * fRam2c4b0a40 + fVar6 * fVar5 * fRam2c4b0a44;
        fVar5 = 1.0 / fVar4;
        fVar8 = fVar8 * fVar4;
        fVar4 = fVar7 * fVar5;
      }
      *(float *)(iVar3 + 0x14) = fVar8;
      fVar8 = -1.0;
      if ((int)((uint)(param_3 < 0.0) << 0x1f) < 0) {
        fVar5 = -fVar5;
      }
      if ((int)((uint)(param_4 < 0.0) << 0x1f) < 0) {
        fVar4 = -fVar4;
      }
      if (-1 < (int)((uint)(fVar5 < -1.0) << 0x1f)) {
        coprocessor_function2(10,7,5,in_cr6,in_cr7,in_cr6);
        fVar8 = fVar5;
      }
      fVar7 = -1.0;
      if (-1 < (int)((uint)(fVar4 < -1.0) << 0x1f)) {
        coprocessor_function2(10,3,4,in_cr7,in_cr7,in_cr7);
        fVar7 = fVar4;
      }
      *(float *)(iVar3 + 0xc) = fVar8;
      *(float *)(iVar3 + 0x10) = fVar7;
    }
    *(undefined4 **)(iVar3 + 0x18) = puVar1;
    *(undefined4 **)(param_5 + 0x30) = puVar1;
    puVar1[7] = iVar3;
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + 1;
    *(undefined4 **)(*(int *)(param_5 + 0x50) + 4) = puVar1;
    *(int *)(*(int *)(param_5 + 0x50) + 8) = *(int *)(*(int *)(param_5 + 0x50) + 8) + 1;
    return 0;
  }
  FUN_2c4b4990();
  return 1;
}

