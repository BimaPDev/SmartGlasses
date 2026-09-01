/* FUN_100021da @ 0x100021da */

uint * FUN_100021da(uint *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint local_30;
  
  iVar6 = *param_2;
  local_30 = 0;
  if (iVar6 == 0) {
    uVar11 = param_2[1];
    *(undefined1 *)(param_1 + param_3 * 6 + 0x16) = 0;
    param_1[param_3 * 6 + 0x19] = uVar11;
    *(undefined1 *)((int)param_1 + param_3 * 0x18 + 0x59) = 0;
    *(undefined1 *)((int)param_1 + param_3 * 0x18 + 0x5a) = 0;
    *(undefined1 *)((int)param_1 + param_3 * 0x18 + 0x5b) = 0;
    iVar12 = 1;
    uVar11 = 0;
    uVar8 = 0;
    uVar10 = 0;
    bVar2 = false;
LAB_100023f2:
    uVar13 = param_1[9];
    if (param_3 == 0) {
      param_1[9] = uVar13 | uVar8 << 4;
      *param_1 = *param_1 | uVar11 << 0x1f | uVar10 | 0x100000;
    }
    else {
      if (param_3 == 1) {
        uVar11 = *param_1 | iVar12 << 0x1c | uVar10 | uVar11 << 0x1e | 0x4000000;
        param_1[9] = uVar13 | uVar8 << 0xc;
        *param_1 = uVar11;
        if (bVar2) {
          if (param_2[5] == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = 2;
          }
          *param_1 = uVar11 | uVar8;
        }
      }
      else {
        uVar11 = uVar11 << 0x1e | iVar12 << 0x1c | uVar10 | 0x4000000;
        param_1[9] = uVar13 | uVar8 << 0x14;
        param_1[2] = uVar11;
        if (bVar2) {
          if (param_2[5] == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = 2;
          }
          param_1[2] = uVar11 | uVar8;
        }
      }
      if (((char)param_2[4] != '\0') && ((param_1[10] & 0x60) == 0)) {
        if ((char)param_2[4] == '\x01') {
          uVar11 = 0x400;
        }
        else {
          uVar11 = 0;
        }
        if (iVar6 == 0) {
          uVar8 = 0xff;
        }
        else {
          uVar8 = (uint)*(byte *)((int)param_2 + 7);
        }
        param_1[3] = uVar8 | uVar11 | 0x80000000;
        *(byte *)(param_1 + 10) = (byte)param_1[10] & 0x9f | (byte)((param_3 & 3) << 5);
      }
    }
    puVar3 = param_1 + param_3 * 6;
    puVar3[0x14] = (int)(short)param_2[2] -
                   ((uint)*(byte *)((int)param_1 + 0x29) << 1 | (uint)(byte)((byte)param_1[10] >> 7)
                   ) | ((int)*(short *)((int)param_2 + 10) -
                       ((uint)*(byte *)((int)param_1 + 0x2a) |
                       (*(byte *)((int)param_1 + 0x2b) & 1) << 8)) * 0x10000;
    puVar3[0x15] = (int)(short)param_2[3] - 1U | (*(short *)((int)param_2 + 0xe) + -1) * 0x10000;
    if (bVar2) {
      if (param_2[5] == 0) {
        iVar6 = (int)(short)param_2[3];
        iVar12 = *(int *)(*param_2 + 0xc);
        uVar8 = (uint)*(ushort *)(*param_2 + 0x10);
        uVar10 = (uint)*(short *)((int)param_2 + 0xe);
        uVar11 = iVar12 - 1;
        iVar4 = uVar8 - 1;
        if ((iVar12 == iVar6) && (uVar8 == uVar10)) {
          uVar10 = 0x1000;
          uVar13 = 0x400;
          uVar8 = 0x1000;
        }
        else {
          if (iVar6 < 2) {
            uVar8 = 0x1000;
          }
          else {
            uVar8 = (uVar11 * 0x1000) / (iVar6 - 1U) & 0xffff;
          }
          if ((int)uVar10 < 2) {
            uVar10 = 0x1000;
          }
          else {
            uVar10 = (iVar4 * 0x1000) / (int)(uVar10 - 1) & 0xffff;
          }
          uVar13 = 0;
        }
        param_1[0x12] = uVar8 | uVar10 << 0x10;
        param_1[0x11] = uVar11 | iVar4 * 0x10000;
        param_1[0x13] = uVar13 | uVar13 << 0x10;
        *(byte *)(param_1 + 10) = (byte)param_1[10] | 4;
        return param_1;
      }
      uVar8 = (uint)*(byte *)(DAT_10002488 + local_30 * 0x20 + 0x1c);
      iVar12 = *param_2;
      puVar5 = (ushort *)param_2[5];
      uVar11 = *(uint *)(iVar12 + 8);
      iVar6 = *(int *)(iVar12 + 0xc);
      if (uVar11 == 0) {
        uVar11 = iVar6 * uVar8 >> 3;
      }
      uVar10 = *(uint *)(puVar5 + 4);
      uVar13 = *(uint *)(puVar5 + 10);
      param_1[0xf] = uVar10;
      iVar7 = *(int *)(puVar5 + 8);
      uVar1 = puVar5[2];
      iVar4 = ((int)uVar10 >> 0xc) * uVar8;
      param_1[0x10] = uVar13;
      param_1[0xe] = (uint)uVar1 | iVar7 << 0x10;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      param_1[0xd] = (uint)*puVar5 | *(int *)(puVar5 + 6) << 0x10;
      uVar1 = *(ushort *)(iVar12 + 0x10);
      param_1[param_3 * 6 + 0x16] =
           uVar11 * ((int)uVar13 >> 0xc) + (iVar4 >> 3) + param_1[param_3 * 6 + 0x16];
      param_1[0xc] = iVar6 - 1U | (uVar1 - 1) * 0x10000;
      *(byte *)(param_1 + 10) = (byte)param_1[10] | 2;
      return param_1;
    }
  }
  else {
    uVar11 = 0;
    do {
      local_30 = uVar11 & 0xff;
      if (*(uint *)(iVar6 + 4) == *(uint *)(uVar11 * 0x20 + DAT_10002488)) {
        iVar12 = param_3 + uVar11 * 8;
        uVar10 = *(uint *)(DAT_10002488 + iVar12 * 4 + 4);
        if ((param_2[5] == 0) && ((int)(short)param_2[3] == *(int *)(iVar6 + 0xc))) {
          bVar2 = false;
          if ((uint)*(ushort *)(iVar6 + 0x10) != (int)*(short *)((int)param_2 + 0xe)) {
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
        }
        uVar11 = (uint)*(byte *)(uVar11 * 0x20 + DAT_10002488 + 0x1c);
        bVar14 = (DAT_1000248c & *(uint *)(iVar6 + 4)) != 0;
        uVar8 = 0;
        if (bVar14) {
          uVar8 = (uint)*(byte *)(iVar6 + 0x14);
        }
        if (bVar14) {
          uVar8 = uVar11 * uVar8;
        }
        if (bVar14) {
          uVar8 = uVar8 & 0xff;
        }
        uVar13 = *(int *)(iVar6 + 0xc) * uVar11 & 0xffff;
        if (*(uint *)(iVar6 + 8) == 0) {
          if (bVar2) {
            uVar11 = 0;
          }
          else {
LAB_1000238c:
            uVar11 = (uint)(uVar8 == 0);
          }
        }
        else {
          uVar9 = (*(uint *)(iVar6 + 8) & 0x1fff) * 8;
          if (bVar2) {
            uVar11 = 0;
            uVar13 = uVar9;
          }
          else {
            bVar14 = uVar13 == uVar9;
            uVar11 = 0;
            uVar13 = uVar9;
            if (bVar14) goto LAB_1000238c;
          }
        }
        iVar4 = *(int *)(iVar6 + 0x18);
        param_1[9] = param_1[9] | *(uint *)(DAT_10002488 + (iVar12 + 4) * 4);
        if (iVar4 + 0xf0000000U < 0x4000000) {
          *(byte *)(param_1 + 10) = (byte)param_1[10] | 1;
          uVar9 = FUN_100030f8(iVar4,3);
        }
        else {
          uVar9 = FUN_10003178();
        }
        param_1[param_3 * 6 + 0x16] = uVar9;
        param_1[param_3 * 6 + 0x17] = uVar13 >> 3;
        uVar9 = param_2[1];
        param_1[param_3 * 6 + 0x18] = uVar13 * *(ushort *)(iVar6 + 0x10) + 7 >> 3;
        param_1[param_3 * 6 + 0x19] = uVar9 & 0xffffff;
        iVar12 = 0;
        goto LAB_100023f2;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x14);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    puVar3 = (uint *)&Reset;
    software_interrupt(2);
  }
  return puVar3;
}

