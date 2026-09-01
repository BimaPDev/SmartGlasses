/* FUN_10004268 @ 0x10004268 */

/* WARNING: Removing unreachable block (ram,0x100044dc) */

undefined8 FUN_10004268(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar5 = LZCOUNT(param_3);
      uVar10 = param_3;
      if (iVar5 != 0) {
        uVar10 = param_3 << iVar5;
        uVar3 = param_1 >> (0x20U - iVar5 & 0xff);
        param_1 = param_1 << iVar5;
        param_2 = uVar3 | param_2 << iVar5;
      }
      uVar11 = uVar10 >> 0x10;
      uVar7 = param_2 / uVar11;
      uVar3 = uVar7 * (uVar10 & 0xffff);
      uVar6 = param_1 >> 0x10 | (param_2 - uVar11 * uVar7) * 0x10000;
      uVar4 = uVar7;
      if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
        bVar15 = CARRY4(uVar10,uVar6);
        uVar6 = uVar10 + uVar6;
        uVar4 = uVar7 - 1;
        if ((!bVar15) && (uVar6 <= uVar3 && uVar3 - uVar6 != 0)) {
          uVar4 = uVar7 - 2;
          uVar6 = uVar6 + uVar10;
        }
      }
      uVar7 = (uVar6 - uVar3) / uVar11;
      uVar13 = uVar7 * (uVar10 & 0xffff);
      uVar6 = param_1 & 0xffff | ((uVar6 - uVar3) - uVar11 * uVar7) * 0x10000;
      uVar3 = uVar7;
      if (uVar6 <= uVar13 && uVar13 - uVar6 != 0) {
        bVar15 = CARRY4(uVar10,uVar6);
        uVar6 = uVar10 + uVar6;
        uVar3 = uVar7 - 1;
        if ((!bVar15) && (uVar6 <= uVar13 && uVar13 - uVar6 != 0)) {
          uVar3 = uVar7 - 2;
          uVar6 = uVar6 + uVar10;
        }
      }
      uVar3 = uVar3 | uVar4 << 0x10;
      uVar6 = uVar6 - uVar13;
      puVar8 = (uint *)0x0;
    }
    else {
      if (param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x10004308);
        (*pcVar1)();
      }
      iVar5 = LZCOUNT(param_3);
      if (iVar5 == 0) {
        param_2 = param_2 - param_3;
        uVar14 = param_3 >> 0x10;
        uVar11 = param_3 & 0xffff;
        puVar8 = (uint *)0x1;
        uVar4 = param_3;
      }
      else {
        uVar4 = param_3 << iVar5;
        uVar14 = uVar4 >> 0x10;
        uVar10 = param_2 >> (0x20U - iVar5 & 0xff);
        uVar7 = param_1 >> (0x20U - iVar5 & 0xff);
        uVar11 = uVar4 & 0xffff;
        param_1 = param_1 << iVar5;
        uVar7 = uVar7 | param_2 << iVar5;
        uVar3 = uVar10 / uVar14;
        uVar13 = uVar3 * uVar11;
        uVar6 = uVar7 >> 0x10 | (uVar10 - uVar14 * uVar3) * 0x10000;
        uVar10 = uVar3;
        if (uVar6 <= uVar13 && uVar13 - uVar6 != 0) {
          bVar15 = CARRY4(uVar4,uVar6);
          uVar6 = uVar4 + uVar6;
          uVar10 = uVar3 - 1;
          if ((uVar6 <= uVar13 && uVar13 - uVar6 != 0) && (!bVar15)) {
            uVar10 = uVar3 - 2;
            uVar6 = uVar6 + uVar4;
          }
        }
        uVar9 = (uVar6 - uVar13) / uVar14;
        uVar12 = uVar9 * uVar11;
        param_2 = uVar7 & 0xffff | ((uVar6 - uVar13) - uVar14 * uVar9) * 0x10000;
        uVar3 = uVar9;
        if (param_2 <= uVar12 && uVar12 - param_2 != 0) {
          bVar15 = CARRY4(uVar4,param_2);
          param_2 = uVar4 + param_2;
          uVar3 = uVar9 - 1;
          if ((!bVar15) && (param_2 <= uVar12 && uVar12 - param_2 != 0)) {
            uVar3 = uVar9 - 2;
            param_2 = param_2 + uVar4;
          }
        }
        param_2 = param_2 - uVar12;
        puVar8 = (uint *)(uVar3 | uVar10 << 0x10);
      }
      uVar7 = param_2 / uVar14;
      uVar6 = uVar11 * uVar7;
      uVar3 = param_1 >> 0x10 | (param_2 - uVar14 * uVar7) * 0x10000;
      uVar10 = uVar7;
      if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
        bVar15 = CARRY4(uVar4,uVar3);
        uVar3 = uVar4 + uVar3;
        uVar10 = uVar7 - 1;
        if ((uVar3 <= uVar6 && uVar6 - uVar3 != 0) && (!bVar15)) {
          uVar10 = uVar7 - 2;
          uVar3 = uVar3 + uVar4;
        }
      }
      uVar7 = (uVar3 - uVar6) / uVar14;
      uVar11 = uVar11 * uVar7;
      uVar6 = param_1 & 0xffff | ((uVar3 - uVar6) - uVar14 * uVar7) * 0x10000;
      uVar3 = uVar7;
      if (uVar6 <= uVar11 && uVar11 - uVar6 != 0) {
        bVar15 = CARRY4(uVar4,uVar6);
        uVar6 = uVar4 + uVar6;
        uVar3 = uVar7 - 1;
        if ((!bVar15) && (uVar6 <= uVar11 && uVar11 - uVar6 != 0)) {
          uVar3 = uVar7 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar6 = uVar6 - uVar11;
      uVar3 = uVar3 | uVar10 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar6 >> LZCOUNT(param_3);
      param_5[1] = 0;
    }
  }
  else {
    puVar8 = param_5;
    if (param_2 < param_4) {
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
        return 0;
      }
      uVar3 = 0;
    }
    else {
      iVar5 = LZCOUNT(param_4);
      if (iVar5 == 0) {
        if ((param_4 < param_2) || (param_3 <= param_1)) {
          bVar15 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = (param_2 - param_4) - (uint)bVar15;
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        puVar8 = (uint *)0x0;
        if (param_5 != (uint *)0x0) {
          *param_5 = param_1;
          param_5[1] = param_2;
        }
      }
      else {
        uVar11 = 0x20 - iVar5;
        uVar10 = param_2 >> (uVar11 & 0xff);
        uVar6 = param_1 << iVar5;
        uVar4 = param_3 >> (uVar11 & 0xff) | param_4 << iVar5;
        uVar7 = param_1 >> (uVar11 & 0xff) | param_2 << iVar5;
        uVar13 = uVar4 >> 0x10;
        uVar14 = uVar10 / uVar13;
        uVar3 = uVar14 * (uVar4 & 0xffff);
        uVar9 = uVar7 >> 0x10 | (uVar10 - uVar13 * uVar14) * 0x10000;
        uVar10 = uVar14;
        if (uVar9 <= uVar3 && uVar3 - uVar9 != 0) {
          bVar15 = CARRY4(uVar4,uVar9);
          uVar9 = uVar4 + uVar9;
          uVar10 = uVar14 - 1;
          if ((uVar9 <= uVar3 && uVar3 - uVar9 != 0) && (!bVar15)) {
            uVar10 = uVar14 - 2;
            uVar9 = uVar9 + uVar4;
          }
        }
        uVar14 = (uVar9 - uVar3) / uVar13;
        uVar12 = uVar14 * (uVar4 & 0xffff);
        uVar7 = uVar7 & 0xffff | ((uVar9 - uVar3) - uVar13 * uVar14) * 0x10000;
        uVar3 = uVar14;
        if (uVar7 <= uVar12 && uVar12 - uVar7 != 0) {
          bVar15 = CARRY4(uVar4,uVar7);
          uVar7 = uVar4 + uVar7;
          uVar3 = uVar14 - 1;
          if ((!bVar15) && (uVar7 <= uVar12 && uVar12 - uVar7 != 0)) {
            uVar3 = uVar14 - 2;
            uVar7 = uVar7 + uVar4;
          }
        }
        uVar3 = uVar3 | uVar10 << 0x10;
        uVar2 = (ulonglong)uVar3 * (ulonglong)(param_3 << iVar5);
        if (CONCAT44(uVar7 - uVar12,uVar6) < uVar2) {
          uVar3 = uVar3 - 1;
          uVar2 = uVar2 - CONCAT44(uVar4,param_3 << iVar5);
        }
        if (param_5 != (uint *)0x0) {
          uVar10 = ((uVar7 - uVar12) - (int)(uVar2 >> 0x20)) - (uint)(uVar6 < (uint)uVar2);
          *param_5 = uVar10 << (uVar11 & 0xff) | uVar6 - (uint)uVar2 >> iVar5;
          param_5[1] = uVar10 >> iVar5;
          puVar8 = (uint *)0x0;
        }
      }
    }
  }
  return CONCAT44(puVar8,uVar3);
}

