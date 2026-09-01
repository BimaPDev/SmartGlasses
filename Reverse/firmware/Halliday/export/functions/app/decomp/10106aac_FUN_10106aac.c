/* FUN_10106aac @ 0x10106aac */

void FUN_10106aac(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar6 = *(ushort *)(param_1 + 0x120);
  uVar7 = (uint)uVar6;
  if ((*(ushort *)(param_1 + 0x50) <= param_2) || (*(ushort *)(param_1 + 0x2c) <= uVar7)) {
    if (*(char *)(param_1 + 0x235) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 0x86;
    }
    goto LAB_10106b92;
  }
  if ((*(short *)(param_1 + 0x15c) == 0) || (*(short *)(param_1 + 0x15e) == 0)) {
    uVar4 = (uint)param_2;
    iVar8 = uVar4 << 3;
    uVar7 = (**(code **)(param_1 + 0x244))
                      (param_1,*(int *)(*(int *)(param_1 + 0x54) + uVar4 * 8) -
                               *(int *)(*(int *)(param_1 + 0x30) + uVar7 * 8),
                       *(int *)(*(int *)(param_1 + 0x54) + uVar4 * 8 + 4) -
                       *(int *)(*(int *)(param_1 + 0x30) + uVar7 * 8 + 4));
  }
  else {
    iVar9 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x38);
    uVar4 = (uint)param_2;
    iVar8 = uVar4 << 3;
    iVar11 = iVar9 + uVar4 * 8;
    iVar10 = iVar3 + uVar7 * 8;
    if (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xe4)) {
      iVar3 = (**(code **)(param_1 + 0x244))
                        (param_1,*(int *)(iVar9 + uVar4 * 8) - *(int *)(iVar3 + uVar7 * 8),
                         *(int *)(iVar11 + 4) - *(int *)(iVar10 + 4),*(code **)(param_1 + 0x244),
                         param_4);
      lVar1 = (longlong)*(int *)(param_1 + 0xe0) * (longlong)iVar3;
      lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
      uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000;
    }
    else {
      lVar1 = (longlong)*(int *)(param_1 + 0xe0) *
              (longlong)(*(int *)(iVar9 + uVar4 * 8) - *(int *)(iVar3 + uVar7 * 8));
      lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
      lVar2 = (longlong)*(int *)(param_1 + 0xe4) *
              (longlong)(*(int *)(iVar11 + 4) - *(int *)(iVar10 + 4));
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
      uVar7 = (**(code **)(param_1 + 0x244))
                        (param_1,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000,
                         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000);
    }
  }
  iVar3 = *(int *)(param_1 + 0x148);
  uVar4 = uVar7;
  if ((((0 < iVar3) && (uVar5 = *(uint *)(param_1 + 0x14c), (int)uVar7 < (int)(iVar3 + uVar5))) &&
      ((int)(uVar5 - iVar3) < (int)uVar7)) && (uVar4 = uVar5, (int)uVar7 < 0)) {
    uVar4 = -uVar5;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x174);
  if ((int)(uVar7 << 0x1d) < 0) {
    uVar5 = (**(code **)(param_1 + 0x23c))(param_1,uVar4,uVar7 & 3);
    if ((int)((uint)*(byte *)(param_1 + 0x174) << 0x1c) < 0) {
      uVar7 = *(uint *)(param_1 + 0x138);
      if ((int)uVar4 < 0) {
LAB_10106b4e:
        if ((int)-uVar7 <= (int)uVar5) {
          uVar5 = -uVar7;
        }
      }
      else {
LAB_10106bd6:
        if ((int)uVar5 < (int)uVar7) {
          uVar5 = uVar7;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + (uVar7 & 3) * 4 + 0x10c);
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 - iVar3;
      uVar5 = uVar4 & (int)uVar4 >> 0x1f;
      if ((int)(uVar7 << 0x1c) < 0) {
        uVar7 = *(uint *)(param_1 + 0x138);
        goto LAB_10106b4e;
      }
    }
    else {
      uVar4 = iVar3 + uVar4;
      uVar5 = uVar4 & ~((int)uVar4 >> 0x1f);
      if ((int)(uVar7 << 0x1c) < 0) {
        uVar7 = *(uint *)(param_1 + 0x138);
        goto LAB_10106bd6;
      }
    }
  }
  iVar8 = (**(code **)(param_1 + 0x240))
                    (param_1,*(int *)(*(int *)(param_1 + 0x58) + iVar8) -
                             *(int *)(*(int *)(param_1 + 0x34) +
                                     (uint)*(ushort *)(param_1 + 0x120) * 8),
                     *(int *)(*(int *)(param_1 + 0x58) + iVar8 + 4) -
                     *(int *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x120) * 8 + 4)
                    );
  (**(code **)(param_1 + 0x24c))(param_1,param_1 + 0x48,param_2,uVar5 - iVar8);
  uVar6 = *(ushort *)(param_1 + 0x120);
LAB_10106b92:
  *(ushort *)(param_1 + 0x122) = uVar6;
  *(ushort *)(param_1 + 0x124) = param_2;
  if ((int)((uint)*(byte *)(param_1 + 0x174) << 0x1b) < 0) {
    *(ushort *)(param_1 + 0x120) = param_2;
  }
  return;
}

