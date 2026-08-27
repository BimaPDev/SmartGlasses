/* FUN_2c4c16fe @ 0x2c4c16fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4c16fe(uint param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar19;
  byte bStack_21;
  uint uStack_20;
  uint uStack_1c;
  
  iVar9 = _LAB_2c4c1870;
  uVar8 = _LAB_2c4c1868;
  puVar5 = _LAB_2c4c1854;
  puVar4 = _LAB_2c4c1850;
  puVar3 = DAT_2c49c37c;
  puVar2 = DAT_2c49c374;
  if (in_CY && !in_ZR) {
    if (param_1 < 0x3c) {
      func_0x2c49dcbc();
      FUN_2c49c0cc(param_1,param_2);
      return 0;
    }
    if (param_1 == 0x3d) {
      uVar11 = (param_2 & 0xffff) >> 8;
      uVar12 = param_2 & 0xff;
      uVar10 = (param_2 & 0xffffff) >> 0x10;
      *_LAB_2c4c1850 = uVar10;
      *puVar5 = uVar11;
      uVar8 = _LAB_2c4c187c;
      puVar2 = _LAB_2c4c1858;
      if (uVar12 < uVar11) {
        *_LAB_2c4c1858 = uVar12;
      }
      else {
        *_LAB_2c4c1858 = 0;
        FUN_2c648600(uVar8,1);
        uVar10 = *puVar4;
        uVar11 = *puVar5;
        uVar12 = *puVar2;
      }
      uVar14 = 0;
      uStack_20 = param_2;
      FUN_2c648600(_LAB_2c4c185c,uVar10,uVar11,uVar12);
      FUN_2c4c1044();
    }
    else {
      iVar13 = (int)param_2 >> 0x1f;
      if (param_1 == 0x3e) {
        *_LAB_2c4c1874 = (int)((longlong)_LAB_2c4c186c * (longlong)(int)param_2 >> 0x25) - iVar13;
        iVar13 = (int)((longlong)iVar9 * (longlong)(int)param_2 >> 0x22) - iVar13;
        iVar15 = param_2 + iVar13 * -10;
        *_LAB_2c4c1878 =
             iVar13 + ((int)((longlong)iVar9 * (longlong)iVar13 >> 0x22) - (iVar13 >> 0x1f)) * -10;
        piVar6 = _LAB_2c4c1884;
        if (iVar15 == 1) {
          iVar9 = FUN_2c64418c(_LAB_2c4c188c,1,0);
          *_LAB_2c4c1884 = iVar9;
          if (iVar9 != 0) {
            FUN_2c6448b4(iVar9,5000);
            return 0;
          }
        }
        else if ((iVar15 == 0) && (*_LAB_2c4c1884 != 0)) {
          FUN_2c644958();
          puVar7 = _LAB_2c4c1888;
          *piVar6 = 0;
          *puVar7 = 0;
          return 0;
        }
        uVar14 = 0;
      }
      else if (param_1 == 0x3f) {
        if ((int)param_2 < 1000) {
          uVar14 = 0;
          FUN_2c648600(_LAB_2c4c1880);
        }
        else {
          uVar14 = 0;
          *_LAB_2c4c1864 =
               param_2 + ((int)((longlong)_LAB_2c4c1860 * (longlong)(int)param_2 >> 0x26) - iVar13)
                         * -1000;
          FUN_2c648600(uVar8);
        }
      }
      else {
        if (param_1 == 0x40) {
          FUN_2c648600(_LAB_2c4c184c,param_2 & 0xffff,param_2 >> 0x10);
          FUN_2c673d68(param_2 & 0xffff,param_2 >> 0x10);
          return 0;
        }
        uVar14 = 0xffffffff;
      }
    }
    return uVar14;
  }
  uStack_1c = *DAT_2c49c370;
  if (*(int *)(DAT_2c49c36c + 4) != 1) {
LAB_2c49c49c:
    param_1 = 0xffffffff;
    goto LAB_2c49c13e;
  }
  uVar10 = param_2;
  switch(param_1) {
  case 0x14:
    *DAT_2c49c378 = param_2;
    break;
  case 0x15:
    *DAT_2c49c37c = param_2;
    break;
  default:
    if (((int)*DAT_2c49c374 < 0) && (param_1 - 0x17 < 3)) goto LAB_2c49c2ea;
    break;
  case 0x17:
    *DAT_2c49c374 = param_2;
    if (0 < (int)param_2) {
      uVar8 = 0xf;
      if ((int)param_2 < 0x32) {
        param_2 = 0x32;
      }
      lVar1 = (ulonglong)DAT_2c49c4b8 * (ulonglong)(param_2 - 0x32);
      uVar16 = (undefined4)lVar1;
      uVar10 = ((uint)((ulonglong)lVar1 >> 0x20) & 0xfff) >> 4;
LAB_2c49c190:
      FUN_2c49b35c(0x10,uVar8,uVar10,uVar16);
      iVar9 = FUN_2c49b318(0x1d,&bStack_21);
      if ((iVar9 == 0) && ((char)bStack_21 < '\0')) {
        bStack_21 = bStack_21 & 0x7f;
        FUN_2c49b2c0(0x1d);
      }
      goto LAB_2c49c1ea;
    }
    goto LAB_2c49c162;
  case 0x18:
    *DAT_2c49c374 = param_2;
    if (0 < (int)param_2) {
      uVar8 = 0xf0;
      uVar10 = 0xf28;
      if (0xf28 < (int)param_2) {
        uVar10 = param_2;
      }
      lVar1 = (ulonglong)DAT_2c49c380 * (ulonglong)(uVar10 - 0xf28);
      uVar16 = (undefined4)lVar1;
      uVar10 = (uint)((ulonglong)lVar1 >> 0x22) & 0xf0;
      goto LAB_2c49c190;
    }
LAB_2c49c162:
    if (param_2 == 0) {
      FUN_2c49b5d0();
      param_2 = *puVar2;
    }
LAB_2c49c166:
    if ((int)param_2 < 0) {
LAB_2c49c2ea:
      FUN_2c49b35c(0x10,0xf);
      FUN_2c49b35c(0x10,0xf0,0x70);
      iVar9 = FUN_2c49b318(0x1d,&bStack_21);
      if ((iVar9 == 0) && ((char)bStack_21 < '\0')) {
        bStack_21 = bStack_21 & 0x7f;
        FUN_2c49b2c0(0x1d);
      }
      FUN_2c49b970();
    }
    break;
  case 0x19:
    *DAT_2c49c374 = param_2;
    if ((int)param_2 < 1) {
      if (param_2 == 0) {
        iVar9 = FUN_2c49b318(0x1d,&bStack_21);
        if ((iVar9 == 0) && (-1 < (int)((uint)bStack_21 << 0x19))) {
          bStack_21 = bStack_21 & 0xbf | 0x40;
          FUN_2c49b2c0(0x1d);
        }
        goto LAB_2c49c1ea;
      }
    }
    else {
      FUN_2c49b35c(0x12,0xff,(param_2 & 0x1ff) >> 1);
      iVar9 = FUN_2c49b318(0x1d,&bStack_21);
      if ((iVar9 == 0) && ((int)((uint)bStack_21 << 0x19) < 0)) {
        bStack_21 = bStack_21 & 0xbf;
        FUN_2c49b2c0(0x1d);
      }
LAB_2c49c1ea:
      param_2 = *puVar2;
    }
    goto LAB_2c49c166;
  case 0x1a:
    *DAT_2c49c374 = param_2;
    if ((int)param_2 < 1) {
      if (((param_2 == 0) && (iVar9 = FUN_2c49b318(0x1d,&bStack_21), iVar9 == 0)) &&
         (-1 < (int)((uint)bStack_21 << 0x19))) {
        bStack_21 = bStack_21 & 0xbf | 0x40;
        FUN_2c49b2c0(0x1d);
      }
    }
    else {
      FUN_2c49b530(param_2);
      iVar9 = FUN_2c49b318(0x1d,&bStack_21);
      if ((iVar9 == 0) && ((int)((uint)bStack_21 << 0x19) < 0)) {
        bStack_21 = bStack_21 & 0xbf;
        FUN_2c49b2c0(0x1d);
      }
    }
    break;
  case 0x1b:
    if (param_2 == 0) {
      uVar12 = 0;
      uVar11 = *DAT_2c49c370 ^ uStack_1c;
      if ((*DAT_2c49c370 ^ uStack_1c) == 0) {
        uVar8 = 0;
LAB_2c49c23c:
        uVar10 = FUN_2c49b620(8,uVar8,0,0);
        return uVar10;
      }
    }
    else {
      uVar12 = *DAT_2c49c4b4 ^ uStack_1c;
      uVar10 = 0;
      uVar11 = param_2;
      if (uVar12 == 0) {
        uVar8 = 1;
        goto LAB_2c49c23c;
      }
    }
    goto LAB_2c49c4ac;
  case 0x1c:
    uVar12 = 0;
    uVar11 = *DAT_2c49c370 ^ uStack_1c;
    if ((*DAT_2c49c370 ^ uStack_1c) == 0) {
      uVar10 = FUN_2c49b778(4,param_2 != 0,0);
      return uVar10;
    }
    goto LAB_2c49c4ac;
  case 0x1d:
    if ((param_2 == 1) || (param_2 == 0)) {
      FUN_2c49b778(0x10,param_2);
    }
    else if (param_2 == 3) {
      FUN_2c49b620(0x10,1);
    }
    else if (param_2 == 2) {
      FUN_2c49b620(0x10,0);
    }
    break;
  case 0x27:
    uVar11 = (param_2 & 0xffff) >> 8;
    uVar10 = (param_2 & 0xffffff) >> 0x10;
    uStack_20 = CONCAT31((int3)((uint)*(undefined4 *)(DAT_2c49c384 + 0x18) >> 8),
                         (char)(param_2 >> 8));
    if ((param_2 & 0xff0000) == 0) {
      FUN_2c648600(DAT_2c49c4bc,uVar11);
      FUN_2c673bc8(&uStack_20,1);
      FUN_2c4c0248(uVar11,1,param_2 & 0xff);
      uVar10 = extraout_r1_01;
    }
    else if (uVar10 == 1) {
      FUN_2c4c0248(0x58,1,0);
      for (param_2 = param_2 & 0xffff; 0x96 < param_2; param_2 = param_2 - 0x96) {
        FUN_2c6444fc(param_2);
      }
      FUN_2c6444fc(param_2);
      FUN_2c4c0248(0x58,1);
      uVar10 = extraout_r1_00;
    }
    goto LAB_2c49c13c;
  case 0x28:
    *DAT_2c49c378 = 0xffffffff;
    *puVar3 = 0xffffffff;
    *puVar2 = 0xffffffff;
    goto LAB_2c49c2ea;
  case 0x2a:
    FUN_2c49b444();
    FUN_2c4c1a28(1);
    uVar16 = *DAT_2c49c388;
    iVar9 = FUN_2c674658();
    uVar17 = *DAT_2c49c38c;
    uVar18 = *DAT_2c49c390;
    uVar8 = FUN_2c4c1638();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x590,DAT_2c49c39c,DAT_2c49c398,DAT_2c49c394,uVar16,iVar9 == 0,uVar17,uVar18,uVar8);
  case 0x2b:
    if ((param_2 & 0xffffff) >> 0x10 == 1) {
      uVar14 = (param_2 & 0xffff) >> 8;
      uVar19 = FUN_2c648600(DAT_2c49c4b0,uVar14,param_2 & 0xff);
      param_1 = (uint)uVar19;
      uVar12 = *DAT_2c49c4b4 ^ uStack_1c;
      uVar11 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar10 = 0;
      if (uVar12 == 0) {
        uVar10 = FUN_2c49b2c0(uVar14,param_2 & 0xff,0,0);
        return uVar10;
      }
      goto LAB_2c49c4ac;
    }
    goto LAB_2c49c49c;
  }
  FUN_2c4c15dc();
  uVar10 = extraout_r1;
LAB_2c49c13c:
  param_1 = 0;
  param_2 = uVar10;
LAB_2c49c13e:
  uVar12 = *DAT_2c49c370 ^ uStack_1c;
  uVar11 = param_2;
  uVar10 = 0;
  if (uVar12 == 0) {
    return param_1;
  }
LAB_2c49c4ac:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(param_1,uVar11,uVar12,uVar10);
}

