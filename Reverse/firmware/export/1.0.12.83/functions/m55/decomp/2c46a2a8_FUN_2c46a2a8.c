/* FUN_2c46a2a8 @ 0x2c46a2a8 */

undefined4 FUN_2c46a2a8(uint *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  fVar1 = DAT_2c46a37c;
  fVar9 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  param_1[5] = param_1[5] + 1;
  fVar8 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
  if (fVar9 * fVar1 <= fVar8) {
    FUN_2c46a380(param_1,*param_1 << 1);
  }
  uVar2 = (*(code *)param_1[0xc])(param_2);
  uVar7 = *param_1;
  piVar6 = (int *)param_1[10];
  uVar2 = uVar2 - (uVar2 / uVar7) * uVar7;
  iVar4 = uVar2 * 0x10;
  piVar5 = piVar6 + uVar2 * 4;
  if (1 < piVar6[uVar2 * 4] + 2U) {
    uVar3 = param_1[2];
    do {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 1;
      param_1[2] = uVar3;
      iVar4 = uVar2 * 0x10;
      piVar5 = piVar6 + uVar2 * 4;
      if (uVar7 == uVar2) {
        uVar2 = 0;
        iVar4 = 0;
        piVar5 = piVar6;
      }
    } while (1 < *piVar5 + 2U);
  }
  *piVar5 = param_2;
  *(undefined4 *)(param_1[10] + iVar4 + 4) = param_3;
  param_1[1] = param_1[1] + 1;
  if (param_1[8] != 0) {
    *(uint *)(param_1[9] + 8) = param_1[10] + iVar4;
    *(uint *)(param_1[10] + iVar4 + 0xc) = param_1[9];
    *(undefined4 *)(param_1[10] + iVar4 + 8) = 0;
    param_1[9] = param_1[10] + iVar4;
    return 0;
  }
  uVar2 = param_1[10] + iVar4;
  param_1[8] = uVar2;
  param_1[9] = uVar2;
  *(undefined4 *)(uVar2 + 0xc) = 0;
  *(undefined4 *)(iVar4 + param_1[10] + 8) = 0;
  return 0;
}

