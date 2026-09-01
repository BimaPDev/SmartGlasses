/* FUN_100f9988 @ 0x100f9988 */

void FUN_100f9988(int param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  
  iVar10 = *(int *)(param_1 + 0x58);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(iVar10 + 0xc) = 0;
    *(undefined4 *)(iVar10 + 0x10) = 0;
    *(undefined4 *)(iVar10 + 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x18) = 0;
    *(undefined4 *)(iVar10 + 0x1c) = 0;
    *(undefined4 *)(iVar10 + 0x20) = 0;
    *(undefined4 *)(iVar10 + 0x24) = 0;
    *(undefined4 *)(iVar10 + 0x10) = 0x10000;
    *(undefined4 *)(iVar10 + 0x14) = 0x10000;
    return;
  }
  cVar1 = *param_2;
  switch(cVar1) {
  case '\0':
    uVar7 = (uint)*(ushort *)(param_1 + 0x44);
    uVar12 = uVar7;
    break;
  case '\x01':
    uVar7 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    uVar12 = uVar7;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      uVar12 = uVar7;
    }
    break;
  case '\x02':
    uVar9 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34);
    uVar6 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
    uVar12 = (int)uVar9 >> 0x1f;
    uVar7 = (int)uVar6 >> 0x1f;
    uVar7 = (uVar6 ^ uVar7) - uVar7;
    uVar12 = (uVar9 ^ uVar12) - uVar12;
    break;
  case '\x03':
    uVar11 = *(ushort *)(param_1 + 0x4c);
    uVar7 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    if ((short)uVar11 < 0) {
      uVar11 = -uVar11;
    }
    uVar12 = (uint)uVar11;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    break;
  case '\x04':
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = *(int *)(param_2 + 8);
    *(int *)(iVar10 + 0x10) = iVar3;
    *(int *)(iVar10 + 0x14) = iVar4;
    if (iVar3 == 0) goto LAB_100f99ec;
    if (iVar4 == 0) goto LAB_100f9b5c;
    goto LAB_100f99f0;
  default:
    uVar7 = 0;
    uVar12 = uVar7;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar9 = *(uint *)(param_2 + 4);
    uVar6 = uVar9;
  }
  else {
    iVar4 = *(uint *)(param_2 + 4) * *(int *)(param_2 + 0xc) + 0x24;
    uVar9 = (int)((longlong)DAT_100f9b74 * (longlong)iVar4 >> 0x24) - (iVar4 >> 0x1f);
    uVar6 = *(uint *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar5 = *(uint *)(param_2 + 8);
    uVar8 = uVar5;
  }
  else {
    uVar5 = *(uint *)(param_2 + 8);
    iVar4 = uVar5 * *(int *)(param_2 + 0x10) + 0x24;
    uVar8 = (int)((longlong)DAT_100f9b74 * (longlong)iVar4 >> 0x24) - (iVar4 >> 0x1f);
  }
  if (uVar6 == 0) {
    iVar4 = FUN_100f87b8(uVar8,uVar7);
    *(int *)(iVar10 + 0x10) = iVar4;
    *(int *)(iVar10 + 0x14) = iVar4;
    uVar9 = FUN_100f85ec(uVar8,uVar12,uVar7);
    iVar3 = iVar4;
LAB_100f9a98:
    if (cVar1 == '\0') goto LAB_100f8100;
  }
  else {
    iVar3 = FUN_100f87b8(uVar9,uVar12);
    *(int *)(iVar10 + 0x10) = iVar3;
    if (uVar5 == 0) {
      *(int *)(iVar10 + 0x14) = iVar3;
      uVar8 = FUN_100f85ec(uVar9,uVar7,uVar12);
      iVar4 = iVar3;
      goto LAB_100f9a98;
    }
    iVar4 = FUN_100f87b8(uVar8,uVar7);
    *(int *)(iVar10 + 0x14) = iVar4;
    if (cVar1 != '\x03') goto LAB_100f9a98;
    if (iVar3 < iVar4) {
LAB_100f9b5c:
      iVar4 = iVar3;
      *(int *)(iVar10 + 0x14) = iVar4;
      iVar3 = iVar4;
    }
    else {
LAB_100f99ec:
      *(int *)(iVar10 + 0x10) = iVar4;
      iVar3 = iVar4;
    }
  }
LAB_100f99f0:
  lVar2 = (longlong)iVar3 * (longlong)(int)(uint)*(ushort *)(param_1 + 0x44);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000;
  lVar2 = (longlong)iVar4 * (longlong)(int)(uint)*(ushort *)(param_1 + 0x44);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000;
LAB_100f8100:
  *(short *)(iVar10 + 0xc) = (short)((int)(uVar9 + 0x20) >> 6);
  *(short *)(iVar10 + 0xe) = (short)((int)(uVar8 + 0x20) >> 6);
  iVar4 = *(int *)(iVar10 + 0x14);
  lVar2 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x46);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  *(uint *)(iVar10 + 0x18) =
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x3f & 0xffffffc0;
  lVar2 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x48);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  *(uint *)(iVar10 + 0x1c) =
       (uint)lVar2 >> 0x10 & 0xffffffc0 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000;
  lVar2 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x4a);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  *(uint *)(iVar10 + 0x20) =
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
  lVar2 = (longlong)*(int *)(iVar10 + 0x10) * (longlong)(int)*(short *)(param_1 + 0x4c);
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  *(uint *)(iVar10 + 0x24) =
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
  return;
}

