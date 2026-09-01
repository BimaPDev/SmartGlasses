/* FUN_100fbed0 @ 0x100fbed0 */

void FUN_100fbed0(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  uVar7 = -uVar6;
  uVar3 = param_3 + -1 + uVar6 & uVar7;
  uVar8 = uVar7 & param_4;
  uVar4 = uVar3;
  if ((int)uVar3 <= (int)uVar8) {
    uVar2 = *param_1;
    goto LAB_100fbeea;
  }
  if (uVar6 + uVar8 != uVar3) {
    return;
  }
  uVar1 = *(ushort *)(param_5 + 0xc);
  switch(uVar1 & 7) {
  case 1:
  case 5:
    if ((*(int *)(param_5 + 0x1c) == param_6) && (*(int *)(param_5 + 0x10) < 1)) {
      if ((uVar1 & 0x10) == 0) {
        return;
      }
      if ((int)(param_4 - param_3) < (int)param_1[2]) {
        return;
      }
    }
    if ((*(int *)(param_6 + 0x1c) == param_5) && (*(uint *)(param_5 + 0x14) == param_2)) {
      if ((uVar1 & 0x20) == 0) {
        return;
      }
      if ((int)(param_4 - param_3) < (int)param_1[2]) {
        return;
      }
    }
    if ((uVar1 & 7) != 1) goto switchD_100fbf2e_caseD_4;
  case 0:
    uVar7 = uVar8;
    break;
  default:
    return;
  case 4:
switchD_100fbf2e_caseD_4:
    iVar5 = uVar6 * 0x3f;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x3f;
    }
    uVar7 = uVar7 & (int)(param_4 + param_3 + (iVar5 >> 6)) >> 1;
  }
  uVar2 = *param_1;
  uVar6 = uVar8;
  if (((-1 < (int)uVar7) &&
      (uVar4 = uVar8, uVar6 = uVar3, (uint)((int)uVar7 >> (uVar2 & 0xff)) < param_1[0x18])) &&
     (uVar4 = uVar3, uVar6 = uVar8, uVar7 != uVar3)) {
    uVar4 = uVar7;
    uVar6 = uVar3;
  }
  uVar6 = (int)uVar6 >> (uVar2 & 0xff);
  if (((-1 < (int)uVar6) && (uVar6 < param_1[0x18])) &&
     (((uint)*(byte *)(param_1[0xe] + (((int)param_2 >> 3) - param_1[0x1a] * uVar6)) &
      0x80 >> (param_2 & 7)) != 0)) {
    return;
  }
LAB_100fbeea:
  uVar4 = (int)uVar4 >> (uVar2 & 0xff);
  if ((-1 < (int)uVar4) && (uVar4 < param_1[0x18])) {
    iVar5 = ((int)param_2 >> 3) - param_1[0x1a] * uVar4;
    *(byte *)(param_1[0xe] + iVar5) =
         (byte)(0x80 >> (param_2 & 7)) | *(byte *)(param_1[0xe] + iVar5);
  }
  return;
}

