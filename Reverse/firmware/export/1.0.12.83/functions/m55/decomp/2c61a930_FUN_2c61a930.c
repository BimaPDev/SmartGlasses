/* FUN_2c61a930 @ 0x2c61a930 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61a930(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_r1;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  int *piStack_6c;
  int iStack_60;
  short sStack_4e;
  uint uStack_4c;
  int *piStack_48;
  char *pcStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  uStack_34 = *_LAB_2c61ac14;
  iVar11 = param_1 + 0x30;
  uVar22 = FUN_2c62ca10(iVar11);
  iVar9 = (int)((ulonglong)uVar22 >> 0x20);
  if (((int)uVar22 != 0) && (0 < param_2)) {
    sVar4 = FUN_2c6033b4(param_1,0,0x59);
    sVar14 = *(short *)(param_1 + 0x28);
    uVar12 = (uint)sVar14;
    uVar3 = CONCAT44(uVar12,extraout_r1) & 0x6000ffffffff;
    if (((uVar12 & 0x6000) == 0x2000) &&
       (uVar7 = uVar12 & 0xffff9fff, uVar3 = CONCAT44(uVar12,extraout_r1) & 0x6000ffffffff,
       (int)uVar7 < 0x7d1)) {
      uVar3 = (ulonglong)CONCAT14(*(byte *)(param_1 + 0x3c),extraout_r1) & 0x3ffffffff;
      if ((*(byte *)(param_1 + 0x3c) & 3) == 1) {
        sVar14 = 0;
      }
      else {
        if (1000 < (int)uVar7) {
          uVar7 = 1000 - uVar7;
        }
        uVar3 = (longlong)_LAB_2c61ac9c * (longlong)(int)(param_2 * uVar7);
        sVar14 = (short)(int)((longlong)uVar3 >> 0x25) - (short)((int)(param_2 * uVar7) >> 0x1f);
      }
    }
    piStack_6c = (int *)FUN_2c62ca10(iVar11,(int)uVar3);
    iVar19 = *piStack_6c;
    if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c61aca4,0x2da,_LAB_2c61aca8,_LAB_2c61aca0);
    }
    iVar9 = *(int *)(param_1 + 0x24);
    iVar17 = 0;
    uStack_38 = 0;
    sVar10 = 0;
    iStack_60 = 0;
    if (iVar9 < 0) {
      iVar9 = 0x7fffffff;
    }
    piStack_48 = (int *)0x0;
    pcStack_44 = (char *)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    iVar15 = (int)(short)((short)param_2 - sVar14);
LAB_2c61a9c8:
    sVar14 = 0;
    iVar20 = 0;
    while( true ) {
      cVar2 = *(char *)(iVar19 + iVar17);
      uVar12 = uStack_40;
      while (uStack_40 = uVar12, cVar2 != '\0') {
        pcVar18 = (char *)(iVar19 + iVar17);
        if (iVar17 == 0) {
          piStack_48 = piStack_6c;
          iVar8 = FUN_2c62b108(piStack_6c + 2,0x57,&uStack_4c);
          uVar12 = uStack_4c;
          if (iVar8 != 1) {
            uVar12 = FUN_2c6033b4(param_1,0,0x57);
          }
          uStack_40 = uVar12;
          iVar8 = FUN_2c62b108(piStack_6c + 2,0x58,&uStack_4c);
          if (iVar8 == 1) {
            sVar6 = (short)uStack_4c;
          }
          else {
            sVar6 = FUN_2c6033b4(param_1,0,0x58);
          }
          uStack_38 = CONCAT22(sVar6,*(short *)(uVar12 + 8) + sVar4);
        }
        else {
          uStack_38._2_2_ = (short)((uint)uStack_38 >> 0x10);
          sVar6 = uStack_38._2_2_;
        }
        sStack_4e = 0;
        if (*pcVar18 == '\0') {
          iVar15 = (int)(short)((short)iVar15 - sVar6);
          uVar5 = 0;
          if (iVar15 < 1) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          uVar12 = FUN_2c62b834(pcVar18,uVar12,(int)sVar6,iVar15,&sStack_4e,0);
          uVar5 = (undefined2)uVar12;
          if ((pcVar18[uVar12] != '\0') || (iVar15 <= sStack_4e)) {
            uVar21 = 0;
            if (uVar12 == 0) goto LAB_2c61aae4;
            uVar21 = uVar5;
            if (iVar20 == 0) {
              iVar17 = iVar17 + uVar12;
              goto LAB_2c61aae4;
            }
            if (iVar15 < sStack_4e) goto LAB_2c61aaf8;
            uStack_4c = uVar12;
            uVar7 = (*(code *)*_LAB_2c61ac18)(pcVar18,&uStack_4c);
            iVar15 = _LAB_2c61ac30;
            if (uVar7 < 0xe) {
              if ((int)((0x2401U >> (uVar7 & 0xff)) << 0x1f) < 0) goto LAB_2c61aadc;
            }
            else if (uVar7 - 0x4e00 < 0x51a6) goto LAB_2c61aadc;
            uVar13 = 0;
            uVar16 = 0x20;
            goto LAB_2c61aad6;
          }
          iVar17 = iVar17 + uVar12;
          iVar15 = (int)(short)(((short)iVar15 - sStack_4e) - sVar6);
          bVar1 = iVar15 < 1;
        }
        iVar20 = iVar20 + 1;
        uStack_3c = CONCAT22(sStack_4e,uVar5);
        if (sVar14 < (short)uStack_38) {
          sVar14 = (short)uStack_38;
        }
        pcStack_44 = pcVar18;
        if (bVar1) goto LAB_2c61aaf8;
        uVar12 = uStack_40;
        cVar2 = *(char *)(iVar19 + iVar17);
      }
      uVar22 = FUN_2c62ca20(iVar11,piStack_6c);
      piStack_6c = (int *)uVar22;
      if (piStack_6c == (int *)0x0) break;
      iVar19 = *piStack_6c;
      if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c61ac20,0x2da,_LAB_2c61ac24,_LAB_2c61ac1c);
      }
      iVar17 = 0;
    }
    sVar10 = sVar10 + sVar14;
    iVar9 = (int)((ulonglong)uVar22 >> 0x20);
    goto LAB_2c61abd0;
  }
  iVar11 = 0;
LAB_2c61aa46:
  if ((*_LAB_2c61ac14 ^ uStack_34) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar11,iVar9,*_LAB_2c61ac14 ^ uStack_34,0);
  }
  return;
  while( true ) {
    uVar13 = uVar13 + 1 & 0xff;
    uVar16 = (uint)*(char *)(_LAB_2c61ac30 + uVar13);
    if (uVar16 == 0) break;
LAB_2c61aad6:
    if (uVar7 == uVar16) goto LAB_2c61aadc;
  }
  uStack_4c = uVar16;
  uVar7 = (*(code *)*_LAB_2c61ac2c)(iVar19 + iVar17 + uVar12,&uStack_4c);
  if (uVar7 < 0xe) {
    if (-1 < (int)((0x2401U >> (uVar7 & 0xff)) << 0x1f)) goto LAB_2c61abfa;
  }
  else if (0x51a5 < uVar7 - 0x4e00) {
LAB_2c61abfa:
    uVar16 = 0x20;
    uVar13 = 0;
    do {
      if (uVar7 == uVar16) goto LAB_2c61aadc;
      uVar13 = uVar13 + 1 & 0xff;
      uVar16 = (uint)*(char *)(iVar15 + uVar13);
    } while (uVar16 != 0);
    goto LAB_2c61aaf8;
  }
LAB_2c61aadc:
  iVar17 = iVar17 + uVar12;
LAB_2c61aae4:
  uStack_3c = CONCAT22(sStack_4e,uVar21);
  pcStack_44 = pcVar18;
  if (sVar14 < (short)uStack_38) {
    sVar14 = (short)uStack_38;
  }
LAB_2c61aaf8:
  sVar10 = sVar10 + sVar14;
  iStack_60 = iStack_60 + 1;
  iVar15 = param_2;
  if (iVar9 <= iStack_60) goto LAB_2c61abd0;
  goto LAB_2c61a9c8;
LAB_2c61abd0:
  iVar11 = (int)(short)(sVar10 - sVar4);
  goto LAB_2c61aa46;
}

