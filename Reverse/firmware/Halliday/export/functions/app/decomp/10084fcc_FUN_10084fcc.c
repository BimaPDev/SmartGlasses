/* FUN_10084fcc @ 0x10084fcc */

int FUN_10084fcc(int *param_1,byte *param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint extraout_r3;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  ushort local_78 [42];
  
  pcVar14 = (char *)*param_1;
  pbVar2 = param_2;
  if ((*param_2 == 0x2f) || (*param_2 == 0x5c)) {
    do {
      do {
        param_2 = pbVar2;
        pbVar2 = param_2 + 1;
      } while (*param_2 == 0x2f);
    } while (*param_2 == 0x5c);
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(pcVar14 + 0x24);
  }
  param_1[2] = iVar6;
  if ((*pcVar14 == '\x04') && (param_1[2] != 0)) {
    param_1[7] = *(int *)(pcVar14 + 0x28);
    param_1[8] = *(int *)(pcVar14 + 0x2c);
    param_1[9] = *(int *)(pcVar14 + 0x30);
    iVar6 = FUN_10122ed8(local_78,param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = *(int *)(pcVar14 + 0x10);
    uVar16 = FUN_1012227a(iVar6 + 0x38,0);
    *(undefined8 *)(param_1 + 4) = uVar16;
    *(byte *)((int)param_1 + 7) = *(byte *)(iVar6 + 0x21) & 2;
  }
  if (*param_2 < 0x20) {
    *(undefined1 *)((int)param_1 + 0x4b) = 0x80;
    iVar6 = FUN_10122840(param_1,0);
    return iVar6;
  }
LAB_1008526e:
  uVar11 = 0;
  iVar6 = 0;
  psVar13 = *(short **)(*param_1 + 0xc);
  while( true ) {
    bVar9 = param_2[iVar6];
    iVar4 = iVar6 + 1;
    local_78[0] = (ushort)bVar9;
    if (bVar9 < 0x20) break;
    if ((bVar9 == 0x2f) || (bVar9 == 0x5c)) goto LAB_10085294;
    if (uVar11 == 0xff) {
      return 6;
    }
    iVar4 = FUN_10124316(param_2 + iVar6,3,local_78);
    if (iVar4 < 0) {
      return 6;
    }
    iVar6 = iVar6 + iVar4;
    pbVar2 = PTR_DAT_10085324;
    if (local_78[0] < 0x80) {
      while( true ) {
        bVar9 = *pbVar2;
        if (bVar9 == 0) break;
        pbVar2 = pbVar2 + 1;
        if (bVar9 == local_78[0]) {
          return 6;
        }
      }
    }
    psVar13[uVar11] = local_78[0];
    uVar11 = uVar11 + 1;
  }
  goto LAB_100852a4;
LAB_10085294:
  for (; (param_2[iVar4] == 0x2f || (param_2[iVar4] == 0x5c)); iVar4 = iVar4 + 1) {
  }
LAB_100852a4:
  if (bVar9 < 0x20) {
    uVar10 = 4;
  }
  else {
    uVar10 = 0;
  }
  param_2 = param_2 + iVar4;
  if (((uVar11 == 1) || ((uVar11 == 2 && (psVar13[1] == 0x2e)))) && (*psVar13 == 0x2e)) {
    uVar8 = 0;
    psVar13[uVar11] = 0;
    piVar5 = param_1 + 0x10;
    do {
      if (uVar8 < uVar11) {
        uVar1 = 0x2e;
      }
      else {
        uVar1 = 0x20;
      }
      uVar8 = uVar8 + 1;
      *(undefined1 *)piVar5 = uVar1;
      piVar5 = (int *)((int)piVar5 + 1);
    } while (uVar8 != 0xb);
    bVar9 = (byte)uVar10 | 0x20;
  }
  else {
    for (; (uVar11 != 0 &&
           ((local_78[0] = psVar13[uVar11 - 1], local_78[0] == 0x20 || (local_78[0] == 0x2e))));
        uVar11 = uVar11 - 1) {
    }
    psVar13[uVar11] = 0;
    if (uVar11 == 0) {
      return 6;
    }
    FUN_101222e4(param_1 + 0x10,0x20,0xb);
    for (uVar8 = extraout_r3; (psVar13[uVar8] == 0x20 || (psVar13[uVar8] == 0x2e));
        uVar8 = uVar8 + 1) {
    }
    if (uVar8 != 0) {
      uVar10 = uVar10 | 3;
    }
    do {
      if (psVar13[uVar11 - 1] == 0x2e) break;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    uVar7 = 0;
    uVar15 = 8;
    uVar12 = 0;
    while( true ) {
      local_78[0] = psVar13[uVar8];
      uVar8 = uVar8 + 1;
      if (local_78[0] == 0) break;
      if (local_78[0] == 0x20) {
LAB_10085106:
        uVar10 = uVar10 | 3;
      }
      else if (local_78[0] == 0x2e) {
        if (uVar11 != uVar8) goto LAB_10085106;
LAB_1008512e:
        if (uVar15 == 0xb) {
LAB_1008513c:
          uVar15 = 0xb;
          uVar10 = uVar10 | 3;
          break;
        }
LAB_10085196:
        uVar15 = 0xb;
        uVar7 = 8;
        uVar12 = (uVar12 & 0x3f) << 2;
        uVar8 = uVar11;
      }
      else {
        if (uVar15 <= uVar7) {
          if (uVar15 == 0xb) goto LAB_1008513c;
          if ((uVar11 == uVar8) || (uVar10 = uVar10 | 3, uVar8 <= uVar11)) goto LAB_10085196;
          break;
        }
        if (uVar11 == uVar8) goto LAB_1008512e;
        if (0x7f < local_78[0]) {
          iVar6 = FUN_101242b6(local_78[0],0);
          local_78[0] = (ushort)iVar6;
          if (iVar6 != 0) {
            local_78[0] = (ushort)(byte)PTR_DAT_10085328[iVar6 + -0x80];
          }
          uVar10 = uVar10 | 2;
        }
        uVar3 = (uint)local_78[0];
        pbVar2 = PTR_s________1008532c;
        if (uVar3 != 0) {
          do {
            bVar9 = *pbVar2;
            if (bVar9 == 0) {
              if (uVar3 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 2;
              }
              else if (uVar3 - 0x61 < 0x1a) {
                local_78[0] = local_78[0] - 0x20;
                uVar12 = uVar12 | 1;
              }
              goto LAB_100851ea;
            }
            pbVar2 = pbVar2 + 1;
          } while (uVar3 != bVar9);
        }
        uVar10 = uVar10 | 3;
        local_78[0] = 0x5f;
LAB_100851ea:
        *(char *)((int)param_1 + uVar7 + 0x40) = (char)local_78[0];
        uVar7 = uVar7 + 1;
      }
    }
    if ((char)param_1[0x10] == -0x1b) {
      *(undefined1 *)(param_1 + 0x10) = 5;
    }
    if (uVar15 == 8) {
      uVar12 = (uVar12 & 0x3f) << 2;
    }
    if (((uVar12 & 0xc) == 0xc) || ((uVar12 & 3) == 3)) {
      uVar10 = uVar10 | 2;
    }
    bVar9 = (byte)uVar10;
    if (-1 < (int)(uVar10 << 0x1e)) {
      if ((uVar12 & 3) == 1) {
        bVar9 = bVar9 | 0x10;
      }
      if ((uVar12 & 0xc) == 4) {
        bVar9 = bVar9 | 8;
      }
    }
  }
  *(byte *)((int)param_1 + 0x4b) = bVar9;
  iVar6 = FUN_100845f0(param_1);
  bVar9 = *(byte *)((int)param_1 + 0x4b);
  if (iVar6 == 0) {
    if ((int)((uint)bVar9 << 0x1d) < 0) {
      return 0;
    }
    if (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1b)) {
      return 5;
    }
    if (*pcVar14 == '\x04') {
      param_1[7] = param_1[2];
      iVar6 = *(int *)(pcVar14 + 0x10);
      param_1[8] = param_1[4] & 0xffffff00U | (uint)*(byte *)((int)param_1 + 7);
      param_1[9] = param_1[0x13];
      uVar16 = FUN_1012227a(iVar6 + 0x34);
      iVar6 = (int)((ulonglong)uVar16 >> 0x20);
      param_1[2] = (int)uVar16;
      *(byte *)((int)param_1 + 7) = *(byte *)(iVar6 + 0x21) & 2;
      uVar16 = FUN_1012228a(iVar6 + 0x38);
      *(undefined8 *)(param_1 + 4) = uVar16;
    }
    else {
      iVar6 = FUN_10122592(*pcVar14,pcVar14 + (param_1[0xc] & 0x1ffU) + 0x50);
      param_1[2] = iVar6;
    }
  }
  else {
    if (iVar6 != 4) {
      return iVar6;
    }
    if (-1 < (int)((uint)bVar9 << 0x1a)) {
      if ((bVar9 & 4) == 0) {
        return 5;
      }
      return 4;
    }
    if ((bVar9 & 4) != 0) {
      *(undefined1 *)((int)param_1 + 0x4b) = 0x80;
      return 0;
    }
  }
  goto LAB_1008526e;
}

