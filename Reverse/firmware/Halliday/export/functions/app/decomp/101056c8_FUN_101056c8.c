/* FUN_101056c8 @ 0x101056c8 */

void FUN_101056c8(int param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  uVar9 = *param_2;
  if (((uVar9 & 0xffff) < (uint)*(ushort *)(param_1 + 0x50)) &&
     (param_2[1] + 1 < *(int *)(param_1 + 0x180) + 1U)) {
    uVar6 = *(ushort *)(param_1 + 0x120);
    uVar7 = (uint)uVar6;
    if (uVar7 < *(ushort *)(param_1 + 0x2c)) {
      if (param_2[1] == 0xffffffff) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(param_1 + 600))();
        uVar7 = (uint)*(ushort *)(param_1 + 0x120);
      }
      uVar5 = *(uint *)(param_1 + 0x14c);
      iVar3 = uVar2 - uVar5;
      if (iVar3 < 0) {
        iVar3 = uVar5 - uVar2;
      }
      uVar4 = uVar2;
      if ((iVar3 < *(int *)(param_1 + 0x148)) && (uVar4 = uVar5, (int)uVar2 < 0)) {
        uVar4 = -uVar5;
      }
      if (*(short *)(param_1 + 0x15e) == 0) {
        piVar12 = (int *)(*(int *)(param_1 + 0x30) + uVar7 * 8);
        lVar1 = (longlong)(int)*(short *)(param_1 + 0x12e) * (longlong)(int)uVar4;
        lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x2000);
        iVar3 = *(int *)(param_1 + 0x54);
        uVar2 = uVar9 & 0xffff;
        *(uint *)(iVar3 + uVar2 * 8) =
             ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) * 0x40000) +
             *(int *)(*(int *)(param_1 + 0x30) + uVar7 * 8);
        piVar11 = (int *)(iVar3 + uVar2 * 8);
        iVar10 = uVar2 * 8;
        lVar1 = (longlong)(int)*(short *)(param_1 + 0x130) * (longlong)(int)uVar4;
        lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x2000);
        iVar3 = *(int *)(param_1 + 0x58);
        piVar11[1] = ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) * 0x40000) + piVar12[1];
        piVar8 = (int *)(iVar3 + iVar10);
        iVar3 = piVar11[1];
        *piVar8 = *piVar11;
        piVar8[1] = iVar3;
      }
      else {
        iVar10 = (uVar9 & 0xffff) << 3;
        piVar11 = (int *)(*(int *)(param_1 + 0x54) + (uVar9 & 0xffff) * 8);
        piVar12 = (int *)(*(int *)(param_1 + 0x30) + uVar7 * 8);
      }
      uVar7 = (**(code **)(param_1 + 0x244))(param_1,*piVar11 - *piVar12,piVar11[1] - piVar12[1]);
      iVar3 = (**(code **)(param_1 + 0x240))
                        (param_1,*(int *)(*(int *)(param_1 + 0x58) + iVar10) -
                                 *(int *)(*(int *)(param_1 + 0x34) +
                                         (uint)*(ushort *)(param_1 + 0x120) * 8),
                         *(int *)(*(int *)(param_1 + 0x58) + iVar10 + 4) -
                         *(int *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x120) * 8
                                 + 4));
      if ((*(char *)(param_1 + 0x140) != '\0') && ((int)(uVar4 ^ uVar7) < 0)) {
        uVar4 = -uVar4;
      }
      uVar2 = (uint)*(byte *)(param_1 + 0x174);
      if ((int)(uVar2 << 0x1d) < 0) {
        if (*(short *)(param_1 + 0x15c) == *(short *)(param_1 + 0x15e)) {
          iVar10 = uVar4 - uVar7;
          if (iVar10 < 0) {
            iVar10 = uVar7 - uVar4;
          }
          if (*(int *)(param_1 + 0x144) < iVar10) {
            uVar4 = uVar7;
          }
        }
        uVar4 = (**(code **)(param_1 + 0x23c))(param_1,uVar4,uVar2 & 3);
        uVar2 = (uint)*(byte *)(param_1 + 0x174);
      }
      else {
        iVar10 = *(int *)(param_1 + (uVar2 & 3) * 4 + 0x10c);
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 - iVar10;
          uVar4 = uVar4 & (int)uVar4 >> 0x1f;
        }
        else {
          uVar4 = uVar4 + iVar10;
          uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
        }
      }
      if ((int)(uVar2 << 0x1c) < 0) {
        uVar2 = *(uint *)(param_1 + 0x138);
        if ((int)uVar7 < 0) {
          if ((int)-uVar2 <= (int)uVar4) {
            uVar4 = -uVar2;
          }
        }
        else if ((int)uVar4 < (int)uVar2) {
          uVar4 = uVar2;
        }
      }
      (**(code **)(param_1 + 0x24c))(param_1,param_1 + 0x48,uVar9 & 0xffff,uVar4 - iVar3);
      uVar6 = *(ushort *)(param_1 + 0x120);
      goto LAB_101057ee;
    }
  }
  else {
    uVar6 = *(ushort *)(param_1 + 0x120);
  }
  if (*(char *)(param_1 + 0x235) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0x86;
  }
LAB_101057ee:
  *(ushort *)(param_1 + 0x122) = uVar6;
  if ((int)((uint)*(byte *)(param_1 + 0x174) << 0x1b) < 0) {
    *(short *)(param_1 + 0x120) = (short)uVar9;
  }
  *(short *)(param_1 + 0x124) = (short)uVar9;
  return;
}

