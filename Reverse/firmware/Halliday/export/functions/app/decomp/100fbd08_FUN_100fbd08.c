/* FUN_100fbd08 @ 0x100fbd08 */

void FUN_100fbd08(uint *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  uVar7 = -uVar6;
  uVar4 = param_3 + -1 + uVar6 & uVar7;
  uVar8 = uVar7 & param_4;
  uVar5 = uVar4;
  if ((int)uVar4 <= (int)uVar8) {
    uVar3 = *param_1;
    goto LAB_100fbd20;
  }
  if (uVar6 + uVar8 != uVar4) {
    return;
  }
  uVar1 = *(ushort *)(param_5 + 0xc);
  switch(uVar1 & 7) {
  case 0:
switchD_100fbd64_caseD_0:
    uVar7 = uVar8;
    break;
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
    if ((*(int *)(param_6 + 0x1c) == param_5) && (*(int *)(param_5 + 0x14) == param_2)) {
      if ((uVar1 & 0x20) == 0) {
        return;
      }
      if ((int)(param_4 - param_3) < (int)param_1[2]) {
        return;
      }
    }
    if ((uVar1 & 7) == 1) goto switchD_100fbd64_caseD_0;
    iVar2 = uVar6 * 0x3f;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    uVar7 = uVar7 & (int)(param_4 + param_3 + (iVar2 >> 6)) >> 1;
    break;
  default:
    return;
  case 4:
    iVar2 = uVar6 * 0x3f;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    uVar7 = uVar7 & (int)(param_4 + param_3 + (iVar2 >> 6)) >> 1;
  }
  uVar3 = *param_1;
  uVar6 = uVar8;
  if (((-1 < (int)uVar7) &&
      (uVar5 = uVar8, uVar6 = uVar4, (int)uVar7 >> (uVar3 & 0xff) < (int)(uint)(ushort)param_1[0xd])
      ) && (uVar5 = uVar4, uVar6 = uVar8, uVar7 != uVar4)) {
    uVar5 = uVar7;
    uVar6 = uVar4;
  }
  uVar6 = (int)uVar6 >> (uVar3 & 0xff);
  if (((-1 < (int)uVar6) && ((int)uVar6 < (int)(uint)(ushort)param_1[0xd])) &&
     (((uint)*(byte *)(param_1[0xe] + ((int)uVar6 >> 3) + param_1[0x23]) & 0x80 >> (uVar6 & 7)) != 0
     )) {
    return;
  }
LAB_100fbd20:
  uVar5 = (int)uVar5 >> (uVar3 & 0xff);
  if ((-1 < (int)uVar5) && ((int)uVar5 < (int)(uint)(ushort)param_1[0xd])) {
    iVar2 = param_1[0x23] + ((int)uVar5 >> 3);
    *(byte *)(param_1[0xe] + iVar2) = (byte)(0x80 >> (uVar5 & 7)) | *(byte *)(param_1[0xe] + iVar2);
  }
  return;
}

