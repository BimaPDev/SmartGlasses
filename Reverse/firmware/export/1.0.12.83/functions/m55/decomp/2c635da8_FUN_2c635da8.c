/* FUN_2c635da8 @ 0x2c635da8 */

void FUN_2c635da8(int param_1,undefined4 *param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  char *pcVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint local_5c;
  uint local_58;
  int local_54;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x32) = 1;
  pcVar14 = (char *)*param_2;
  if (pcVar14 == (char *)0x0) {
    uVar19 = 0;
  }
  else {
    uVar16 = 0;
    uVar19 = 0;
    do {
      while( true ) {
        if (*pcVar14 == '\0') goto LAB_2c63541c;
        if ((*pcVar14 == '\n') && (pcVar14[1] == '\0')) break;
        uVar19 = uVar19 + 1 & 0xffff;
        uVar16 = uVar16 + 1 & 0xffff;
        pcVar14 = (char *)param_2[uVar16];
        if (pcVar14 == (char *)0x0) goto LAB_2c63541c;
      }
      uVar16 = uVar16 + 1 & 0xffff;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
      pcVar14 = (char *)param_2[uVar16];
    } while (pcVar14 != (char *)0x0);
  }
LAB_2c63541c:
  if (*(ushort *)(param_1 + 0x30) != uVar19) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    uVar10 = lv_mem_alloc(uVar19 << 3);
    *(undefined4 *)(param_1 + 0x28) = uVar10;
    iVar11 = lv_mem_alloc(uVar19 << 1);
    *(int *)(param_1 + 0x2c) = iVar11;
    if ((*(int *)(param_1 + 0x28) == 0) || (uVar16 = uVar19 << 1, iVar11 == 0)) {
      uVar19 = 0;
      uVar16 = uVar19;
    }
    FUN_2c62c3b0(iVar11,uVar16);
    *(short *)(param_1 + 0x30) = (short)uVar19;
  }
  *(undefined4 **)(param_1 + 0x24) = param_2;
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  sVar4 = FUN_2c6033b4(param_1,0,0x12);
  sVar5 = FUN_2c6033b4(param_1,0,0x10);
  sVar6 = FUN_2c6033b4(param_1,0,0x14);
  sVar7 = FUN_2c6033b4(param_1,0,0x15);
  sVar8 = FUN_2c607404(param_1);
  sVar9 = FUN_2c607440(param_1);
  uVar19 = (uint)*(ushort *)(param_1 + 0x32);
  iVar11 = (int)(short)(sVar9 - (*(ushort *)(param_1 + 0x32) - 1) * sVar6);
  if (uVar19 == 0) {
LAB_2c635650:
    FUN_2c600bac(param_1);
    FUN_2c607df0(param_1);
    return;
  }
  local_58 = 0;
  pcVar14 = (char *)*param_2;
  local_54 = 0;
  local_5c = 1;
  do {
    if (pcVar14 == (char *)0x0) {
LAB_2c635548:
      param_2 = param_2 + 1;
    }
    else {
      uVar20 = 0;
      uVar16 = 0;
      do {
        iVar22 = uVar16 + local_54;
        if (((*pcVar14 == '\n') && (pcVar14[1] == '\0')) || (*pcVar14 == '\0')) break;
        uVar16 = uVar16 + 1 & 0xffff;
        uVar18 = *(ushort *)(*(int *)(param_1 + 0x2c) + iVar22 * 2);
        pcVar14 = (char *)param_2[uVar16];
        if ((uVar18 & 7) == 0) {
          uVar18 = (short)uVar20 + 1;
        }
        else {
          uVar18 = (short)uVar20 + (uVar18 & 7);
        }
        uVar20 = (uint)uVar18;
      } while (pcVar14 != (char *)0x0);
      if (uVar16 == 0) goto LAB_2c635548;
      uVar17 = (uint)(short)(sVar8 - ((short)uVar16 + -1) * sVar7);
      if (uVar16 != 0) {
        sVar9 = 0;
        iVar22 = local_54 << 1;
        local_54 = local_54 + uVar16;
        iVar23 = 0;
        uVar21 = 0;
        do {
          uVar18 = *(ushort *)(*(int *)(param_1 + 0x2c) + iVar22);
          if ((uVar18 & 7) == 0) {
            iVar23 = iVar23 + 1;
          }
          else {
            iVar23 = iVar23 + (uVar18 & 7);
          }
          uVar13 = uVar21 / uVar20;
          uVar21 = (uVar17 & ~((int)uVar17 >> 0x1f)) * iVar23;
          sVar2 = (short)uVar13 + sVar9;
          sVar15 = sVar9 + -1 + (short)(uVar21 / uVar20);
          sVar12 = sVar2;
          if (cVar3 == '\x01') {
            sVar12 = sVar8 - sVar15;
            sVar15 = sVar8 - sVar2;
          }
          iVar1 = iVar22 * 4;
          iVar22 = iVar22 + 2;
          FUN_2c62a624(*(int *)(param_1 + 0x28) + iVar1,(int)(short)(sVar12 + sVar4),
                       (int)(short)((short)(local_58 / uVar19) + sVar5),(int)(short)(sVar15 + sVar4)
                       ,(int)(short)(sVar5 + -1 + (short)((iVar11 + local_58) / uVar19)));
          sVar9 = sVar9 + sVar7;
        } while (iVar22 != local_54 * 2);
        uVar19 = (uint)*(ushort *)(param_1 + 0x32);
      }
      param_2 = param_2 + uVar16 + 1;
    }
    local_58 = iVar11 + local_58;
    sVar5 = sVar5 + sVar6;
    if (uVar19 <= local_5c) goto LAB_2c635650;
    pcVar14 = (char *)*param_2;
    local_5c = local_5c + 1;
  } while( true );
}

