/* FUN_1404320c @ 0x1404320c */

undefined4 FUN_1404320c(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  sbyte *psVar9;
  sbyte *psVar10;
  sbyte *psVar11;
  uint uVar12;
  uint uVar13;
  sbyte sVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 unaff_lr;
  sbyte *psVar17;
  int iVar18;
  
  iVar7 = FUN_1404feb4();
  iVar6 = DAT_14043480;
  if (iVar7 == 0) {
    if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14043470,param_2);
    }
  }
  else if (param_2 != 3) {
    uVar15 = FUN_1402a6e8(4,0x9f2,DAT_14043450,DAT_14043454,DAT_14043484,param_1,
                          *(undefined4 *)(DAT_14043480 + param_1 * 4),param_2,param_3);
    return uVar15;
  }
  uVar15 = *(undefined4 *)(DAT_14043480 + param_1 * 4);
  iVar7 = param_1;
  uVar13 = param_2;
  iVar18 = param_3;
  FUN_1402a6e8(4,0xa07,DAT_14043450,DAT_14043454,DAT_1404344c,param_1,uVar15,param_2,param_3);
  uVar8 = DAT_14043460;
  puVar5 = DAT_1404345c;
  pbVar1 = DAT_14043458;
  iVar16 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar16 = getBasePriority();
  }
  if (iVar16 != 0x40) {
    bVar2 = *DAT_14043458;
    *DAT_1404345c = 0x14043258;
    puVar5[1] = unaff_lr;
    uVar12 = bVar2 + 1;
    *pbVar1 = (char)uVar12 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar12 >> 0x23) * -10;
    *(undefined4 *)(DAT_14043464 + (uint)bVar2 * 4) = unaff_lr;
  }
  psVar9 = DAT_14043468;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  if ((param_2 == 3) && (*(short *)(DAT_14043478 + param_1 * 0x38 + 0x450) == 0xc)) {
    if (iVar16 == 0) {
      *DAT_1404345c = 0xffffffff;
    }
    pbVar1 = DAT_1404346c;
    bVar2 = *DAT_1404346c;
    *(undefined4 *)(DAT_14043474 + (uint)bVar2 * 4) = unaff_lr;
    uVar8 = bVar2 + 1;
    *pbVar1 = (char)uVar8 + (char)(uint)((ulonglong)DAT_14043460 * (ulonglong)uVar8 >> 0x23) * -10;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar16);
    }
    uVar15 = FUN_1402a6e8(4,0xa12,DAT_14043450,DAT_14043454,DAT_1404347c,iVar7,uVar15,uVar13,iVar18)
    ;
  }
  else {
    if (param_3 == 0) {
      uVar8 = *(uint *)(iVar6 + param_1 * 4);
      uVar13 = 1 << (param_2 & 0xff);
      if ((uVar13 & uVar8) == 0) goto LAB_14043388;
      uVar8 = uVar8 & ~uVar13;
      *(uint *)(iVar6 + param_1 * 4) = uVar8;
      pbVar1 = (byte *)(psVar9 + param_2 * 8 + 1);
      if (uVar8 != 0) {
        psVar17 = psVar9 + 0x40;
        sVar14 = 0;
        psVar10 = (sbyte *)0x0;
        psVar11 = psVar9;
        while( true ) {
          psVar9 = psVar10;
          if ((((int)((uVar8 >> sVar14) << 0x1f) < 0) && (psVar9 = psVar11, psVar10 != (sbyte *)0x0)
              ) && (psVar9 = psVar10, (byte)psVar10[1] < (byte)psVar11[1])) {
            psVar9 = psVar11;
          }
          if (psVar11 == psVar17) break;
          psVar11 = psVar11 + 8;
          sVar14 = *psVar11;
          psVar10 = psVar9;
        }
        if ((psVar9 != (sbyte *)0x0) && (*pbVar1 < (byte)psVar9[1])) goto LAB_14043388;
      }
    }
    else {
      uVar8 = *(uint *)(iVar6 + param_1 * 4);
      uVar13 = 1 << (param_2 & 0xff);
      if ((uVar8 & uVar13) != 0) {
LAB_14043388:
        if (iVar16 == 0) {
          *DAT_1404345c = 0xffffffff;
        }
        pbVar1 = DAT_1404346c;
        bVar2 = *DAT_1404346c;
        *(undefined4 *)(DAT_14043474 + (uint)bVar2 * 4) = unaff_lr;
        uVar8 = bVar2 + 1;
        lVar4 = (ulonglong)DAT_14043460 * (ulonglong)uVar8;
        *pbVar1 = (char)uVar8 + (char)(uint)((ulonglong)lVar4 >> 0x23) * -10;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(iVar16);
        }
        return (int)lVar4;
      }
      uVar8 = uVar8 | uVar13;
      *(uint *)(iVar6 + param_1 * 4) = uVar8;
      sVar14 = 0;
      psVar11 = psVar9;
      while( true ) {
        if (((int)((uVar8 >> sVar14) << 0x1f) < 0) &&
           ((byte)psVar9[param_2 * 8 + 1] < (byte)psVar11[1])) goto LAB_14043388;
        if (psVar11 == psVar9 + 0x40) break;
        psVar11 = psVar11 + 8;
        sVar14 = *psVar11;
      }
      psVar9 = psVar9 + param_2 * 8;
    }
    if (iVar16 == 0) {
      *DAT_1404345c = 0xffffffff;
    }
    pbVar1 = DAT_1404346c;
    uVar8 = DAT_14043460;
    bVar2 = *DAT_1404346c;
    *(undefined4 *)(DAT_14043474 + (uint)bVar2 * 4) = unaff_lr;
    uVar13 = bVar2 + 1;
    *pbVar1 = (char)uVar13 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x23) * -10;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar16);
    }
    if (psVar9 == (sbyte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14043488,param_1,param_2,param_3);
    }
    uVar15 = FUN_140429b8(param_1,*(undefined2 *)(psVar9 + 2),*(undefined2 *)(psVar9 + 4),6000,
                          psVar9[6]);
  }
  return uVar15;
}

