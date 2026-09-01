/* FUN_1011e638 @ 0x1011e638 */

uint FUN_1011e638(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  short sVar6;
  short sVar7;
  undefined8 uVar8;
  
  sVar1 = *param_2;
  sVar6 = param_2[1];
  if ((((sVar1 < *param_3) || (sVar6 < param_3[1])) || (*param_3 < param_2[2])) ||
     (param_3[1] < param_2[3])) {
    uVar8 = FUN_1011e5fe(param_2);
    psVar5 = (short *)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      sVar2 = param_2[2];
      *param_1 = sVar1;
      param_1[2] = sVar2;
      sVar1 = param_2[3];
      param_1[1] = sVar6;
      param_1[3] = sVar1;
      uVar3 = 1;
    }
    else {
      sVar2 = psVar5[1];
      sVar7 = sVar6;
      if (sVar6 < sVar2) {
        param_1[1] = sVar6;
        sVar7 = psVar5[1];
        param_1[2] = param_2[2];
        *param_1 = sVar1;
        param_1[3] = sVar7 + -1;
      }
      uVar4 = (uint)(sVar6 < sVar2);
      uVar3 = uVar4;
      if (*param_2 < *psVar5) {
        sVar1 = psVar5[3];
        sVar6 = param_2[3];
        param_1[uVar4 * 4] = *param_2;
        if (sVar1 <= sVar6) {
          sVar6 = sVar1;
        }
        sVar1 = *psVar5;
        param_1[uVar4 * 4 + 1] = sVar7;
        param_1[uVar4 * 4 + 2] = sVar1 + -1;
        uVar3 = uVar4 + 1;
        param_1[uVar4 * 4 + 3] = sVar6;
      }
      sVar1 = param_2[2];
      uVar4 = uVar3;
      if (psVar5[2] < sVar1) {
        sVar6 = psVar5[3];
        sVar2 = param_2[3];
        param_1[uVar3 * 4] = psVar5[2] + 1;
        if (sVar2 <= sVar6) {
          sVar6 = sVar2;
        }
        param_1[uVar3 * 4 + 1] = sVar7;
        param_1[uVar3 * 4 + 2] = sVar1;
        uVar4 = uVar3 + 1;
        param_1[uVar3 * 4 + 3] = sVar6;
      }
      sVar1 = param_2[3];
      sVar6 = psVar5[3];
      uVar3 = uVar4;
      if (sVar6 < sVar1) {
        param_1[uVar4 * 4] = *param_2;
        param_1[uVar4 * 4 + 1] = sVar6 + 1;
        uVar3 = uVar4 + 1;
        param_1[uVar4 * 4 + 2] = param_2[2];
        param_1[uVar4 * 4 + 3] = sVar1;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

