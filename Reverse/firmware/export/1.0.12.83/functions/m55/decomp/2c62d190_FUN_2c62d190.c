/* FUN_2c62d190 @ 0x2c62d190 */

/* WARNING: Removing unreachable block (ram,0x2c62d34a) */

void FUN_2c62d190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  char cVar11;
  uint in_fpscr;
  uint uVar12;
  double in_d0;
  uint uVar13;
  int iVar17;
  double dVar14;
  double dVar15;
  double dVar16;
  char *local_58;
  char acStack_4d [33];
  int local_2c;
  
  uVar8 = in_fpscr & 0xfffffff;
  local_2c = *DAT_2c62d480;
  if (in_d0 < DAT_2c62d450) {
    FUN_2c62ca70();
  }
  else if (in_d0 <= DAT_2c62d458) {
    if ((DAT_2c62d460 < in_d0) || (in_d0 < DAT_2c62d468)) {
      if (*DAT_2c62d480 == local_2c) {
        FUN_2c62ce58(param_1,param_2,param_3,param_4);
        return;
      }
      goto LAB_2c62d4f4;
    }
    bVar1 = in_d0 < DAT_2c62d470;
    if (bVar1) {
      in_d0 = DAT_2c62d470 - in_d0;
    }
    if ((param_7 & 0x400) == 0) {
      param_5 = 6;
      uVar7 = 0;
      dVar16 = DAT_2c62d478;
    }
    else if (param_5 < 10) {
      uVar7 = 0;
      dVar16 = *(double *)(DAT_2c62d4f8 + param_5 * 8);
    }
    else {
      pcVar5 = acStack_4d;
      uVar7 = 0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar7 = uVar7 + 1;
        param_5 = param_5 - 1;
        *pcVar5 = '0';
        dVar16 = DAT_2c62d460;
        if (0x1f < uVar7) break;
      } while (9 < param_5);
    }
    local_58 = acStack_4d + 1;
    iVar17 = VectorFloatToSigned(in_d0,3);
    dVar14 = (double)VectorSignedToFloat(iVar17,(byte)(uVar8 >> 0x16) & 3);
    dVar15 = (in_d0 - dVar14) * dVar16;
    uVar13 = VectorFloatToUnsigned(dVar15,3);
    dVar14 = (double)VectorUnsignedToFloat(uVar13,(byte)(uVar8 >> 0x16) & 3);
    dVar15 = dVar15 - dVar14;
    uVar9 = uVar8 | (uint)(dVar15 < 0.5) << 0x1f | (uint)(dVar15 == 0.5) << 0x1e;
    uVar12 = uVar9 | (uint)NAN(dVar15) << 0x1c;
    bVar3 = (byte)(uVar9 >> 0x18);
    bVar10 = -((char)bVar3 >> 7);
    if ((bool)(bVar3 >> 6 & 1) || bVar10 != ((byte)(uVar12 >> 0x1c) & 1)) {
      if ((bVar10 == 0) && ((uVar13 == 0 || ((int)(uVar13 << 0x1f) < 0)))) {
        uVar13 = uVar13 + 1;
      }
    }
    else {
      uVar13 = uVar13 + 1;
      dVar14 = (double)VectorUnsignedToFloat(uVar13,(byte)(uVar12 >> 0x16) & 3);
      uVar8 = uVar8 | (uint)(dVar14 < dVar16) << 0x1f;
      uVar12 = uVar8 | (uint)(NAN(dVar14) || NAN(dVar16)) << 0x1c;
      if ((byte)(uVar8 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
        iVar17 = iVar17 + 1;
        uVar13 = 0;
      }
    }
    if (param_5 == 0) {
      dVar16 = (double)VectorSignedToFloat(iVar17,(byte)(uVar12 >> 0x16) & 3);
      dVar16 = in_d0 - dVar16;
      bVar3 = (byte)(((uint)(dVar16 == 0.5) << 0x1e) >> 0x18);
      cVar11 = -((char)((byte)(((uint)(dVar16 < 0.5) << 0x1f) >> 0x18) | bVar3) >> 7);
      if (((cVar11 == '\0') || (!(bool)(bVar3 >> 6) && (bool)cVar11 == NAN(dVar16))) &&
         (iVar17 << 0x1f < 0)) {
        iVar17 = iVar17 + 1;
      }
LAB_2c62d2a8:
      iVar4 = DAT_2c62d484;
      pcVar5 = local_58 + (uVar7 - 1);
      do {
        if (uVar7 == 0x20) goto LAB_2c62d3e0;
        uVar7 = uVar7 + 1;
        iVar6 = (int)((longlong)iVar4 * (longlong)iVar17 >> 0x22) - (iVar17 >> 0x1f);
        pcVar5 = pcVar5 + 1;
        *pcVar5 = (char)iVar17 + (char)iVar6 * -10 + '0';
        iVar17 = iVar6;
      } while (iVar6 != 0);
      if ((param_7 & 3) == 1) {
LAB_2c62d3ea:
        if (param_6 != 0) {
          if ((bVar1) || ((param_7 & 0xc) != 0)) {
            param_6 = param_6 - 1;
          }
          if ((uVar7 < 0x20) && (uVar7 < param_6)) {
            pcVar5 = local_58 + (uVar7 - 1);
            do {
              uVar7 = uVar7 + 1;
              pcVar5 = pcVar5 + 1;
              *pcVar5 = '0';
              if (param_6 <= uVar7) break;
            } while (uVar7 < 0x20);
          }
        }
      }
      if (uVar7 != 0x20) {
        if (bVar1) {
          cVar11 = '-';
        }
        else if ((param_7 & 4) == 0) {
          if ((param_7 & 8) == 0) goto LAB_2c62d2fa;
          cVar11 = ' ';
        }
        else {
          cVar11 = '+';
        }
        acStack_4d[uVar7 + 1] = cVar11;
        uVar7 = uVar7 + 1;
      }
    }
    else {
      pcVar5 = local_58 + (uVar7 - 1);
      do {
        uVar9 = param_5;
        uVar8 = uVar7;
        if (uVar8 == 0x20) goto LAB_2c62d3e0;
        param_5 = uVar9 - 1;
        uVar7 = uVar8 + 1;
        uVar12 = (uint)((ulonglong)DAT_2c62d498 * (ulonglong)uVar13 >> 0x23);
        pcVar5 = pcVar5 + 1;
        *pcVar5 = (char)uVar13 + (char)uVar12 * -10 + '0';
        bVar2 = 9 < uVar13;
        uVar13 = uVar12;
      } while (bVar2);
      if (uVar7 != 0x20) {
        uVar13 = uVar7;
        if (param_5 != 0) {
          pcVar5 = local_58 + uVar8;
          do {
            uVar13 = uVar13 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = '0';
            if (uVar13 == 0x20) goto LAB_2c62d3e0;
          } while (~uVar13 + uVar7 + uVar9 != 0);
        }
        uVar7 = uVar13 + 1;
        acStack_4d[uVar13 + 1] = '.';
        goto LAB_2c62d2a8;
      }
LAB_2c62d3e0:
      uVar7 = 0x20;
      if ((param_7 & 3) == 1) goto LAB_2c62d3ea;
    }
LAB_2c62d2fa:
    FUN_2c62ca70(param_1,param_2,param_3,param_4,local_58,uVar7,param_6,param_7);
  }
  else {
    FUN_2c62ca70();
  }
  if (*DAT_2c62d480 == local_2c) {
    return;
  }
LAB_2c62d4f4:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

