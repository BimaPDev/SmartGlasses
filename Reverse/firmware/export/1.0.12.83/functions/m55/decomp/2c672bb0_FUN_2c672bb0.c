/* FUN_2c672bb0 @ 0x2c672bb0 */

/* WARNING: Removing unreachable block (ram,0x2c672da4) */

undefined8 FUN_2c672bb0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar6 = LZCOUNT(param_3);
      uVar7 = param_1;
      uVar12 = param_3;
      if (iVar6 != 0) {
        uVar12 = param_3 << iVar6;
        uVar7 = param_1 << iVar6;
        param_2 = param_2 << iVar6 | param_1 >> (0x20U - iVar6 & 0xff);
      }
      uVar4 = uVar12 >> 0x10;
      uVar8 = param_2 / uVar4;
      uVar3 = uVar8 * (uVar12 & 0xffff);
      uVar5 = uVar7 >> 0x10 | (param_2 - uVar4 * uVar8) * 0x10000;
      uVar11 = uVar8;
      if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
        bVar14 = CARRY4(uVar12,uVar5);
        uVar5 = uVar12 + uVar5;
        uVar11 = uVar8 - 1;
        if ((!bVar14) && (uVar5 <= uVar3 && uVar3 - uVar5 != 0)) {
          uVar11 = uVar8 - 2;
          uVar5 = uVar5 + uVar12;
        }
      }
      uVar8 = (uVar5 - uVar3) / uVar4;
      uVar13 = uVar8 * (uVar12 & 0xffff);
      uVar4 = uVar7 & 0xffff | ((uVar5 - uVar3) - uVar4 * uVar8) * 0x10000;
      uVar3 = uVar8;
      if (uVar4 <= uVar13 && uVar13 - uVar4 != 0) {
        bVar14 = CARRY4(uVar12,uVar4);
        uVar4 = uVar12 + uVar4;
        uVar3 = uVar8 - 1;
        if ((!bVar14) && (uVar4 <= uVar13 && uVar13 - uVar4 != 0)) {
          uVar4 = uVar4 + uVar12;
          uVar3 = uVar8 - 2;
        }
      }
      uVar3 = uVar3 | uVar11 << 0x10;
      uVar4 = uVar4 - uVar13;
      puVar9 = (uint *)0x0;
    }
    else {
      if (param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x2c672c8a);
        (*pcVar1)();
      }
      iVar6 = LZCOUNT(param_3);
      if (iVar6 == 0) {
        param_2 = param_2 - param_3;
        uVar13 = param_3 >> 0x10;
        uVar8 = param_3 & 0xffff;
        puVar9 = (uint *)0x1;
        uVar12 = param_3;
      }
      else {
        uVar12 = param_3 << iVar6;
        uVar7 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar13 = uVar12 >> 0x10;
        uVar4 = param_1 >> (0x20U - iVar6 & 0xff);
        uVar8 = uVar12 & 0xffff;
        param_1 = param_1 << iVar6;
        uVar4 = uVar4 | param_2 << iVar6;
        uVar3 = uVar7 / uVar13;
        uVar11 = uVar4 >> 0x10 | (uVar7 - uVar13 * uVar3) * 0x10000;
        uVar5 = uVar3 * uVar8;
        uVar7 = uVar3;
        if (uVar11 <= uVar5 && uVar5 - uVar11 != 0) {
          bVar14 = CARRY4(uVar12,uVar11);
          uVar11 = uVar12 + uVar11;
          uVar7 = uVar3 - 1;
          if ((uVar11 <= uVar5 && uVar5 - uVar11 != 0) && (!bVar14)) {
            uVar7 = uVar3 - 2;
            uVar11 = uVar11 + uVar12;
          }
        }
        uVar10 = (uVar11 - uVar5) / uVar13;
        param_2 = uVar4 & 0xffff | ((uVar11 - uVar5) - uVar13 * uVar10) * 0x10000;
        uVar4 = uVar10 * uVar8;
        uVar3 = uVar10;
        if (param_2 <= uVar4 && uVar4 - param_2 != 0) {
          bVar14 = CARRY4(uVar12,param_2);
          param_2 = uVar12 + param_2;
          uVar3 = uVar10 - 1;
          if ((!bVar14) && (param_2 <= uVar4 && uVar4 - param_2 != 0)) {
            uVar3 = uVar10 - 2;
            param_2 = param_2 + uVar12;
          }
        }
        param_2 = param_2 - uVar4;
        puVar9 = (uint *)(uVar3 | uVar7 << 0x10);
      }
      uVar11 = param_2 / uVar13;
      uVar4 = param_1 >> 0x10 | (param_2 - uVar13 * uVar11) * 0x10000;
      uVar3 = uVar8 * uVar11;
      uVar7 = uVar11;
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        bVar14 = CARRY4(uVar12,uVar4);
        uVar4 = uVar12 + uVar4;
        uVar7 = uVar11 - 1;
        if ((uVar4 <= uVar3 && uVar3 - uVar4 != 0) && (!bVar14)) {
          uVar7 = uVar11 - 2;
          uVar4 = uVar4 + uVar12;
        }
      }
      uVar11 = (uVar4 - uVar3) / uVar13;
      uVar8 = uVar11 * uVar8;
      uVar4 = param_1 & 0xffff | ((uVar4 - uVar3) - uVar13 * uVar11) * 0x10000;
      uVar3 = uVar11;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar14 = CARRY4(uVar12,uVar4);
        uVar4 = uVar12 + uVar4;
        uVar3 = uVar11 - 1;
        if ((!bVar14) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar4 = uVar4 + uVar12;
          uVar3 = uVar11 - 2;
        }
      }
      uVar4 = uVar4 - uVar8;
      uVar3 = uVar3 | uVar7 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar4 >> LZCOUNT(param_3);
      param_5[1] = 0;
    }
  }
  else {
    puVar9 = param_5;
    if (param_2 < param_4) {
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
        return 0;
      }
      uVar3 = 0;
    }
    else {
      iVar6 = LZCOUNT(param_4);
      if (iVar6 == 0) {
        if ((param_4 < param_2) || (param_3 <= param_1)) {
          bVar14 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = (param_2 - param_4) - (uint)bVar14;
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        puVar9 = (uint *)0x0;
        if (param_5 != (uint *)0x0) {
          *param_5 = param_1;
          param_5[1] = param_2;
        }
      }
      else {
        uVar11 = 0x20 - iVar6;
        uVar7 = param_2 >> (uVar11 & 0xff);
        uVar13 = param_3 >> (uVar11 & 0xff) | param_4 << iVar6;
        uVar8 = uVar13 >> 0x10;
        uVar4 = param_2 << iVar6 | param_1 >> (uVar11 & 0xff);
        param_1 = param_1 << iVar6;
        uVar5 = uVar7 / uVar8;
        uVar12 = uVar4 >> 0x10 | (uVar7 - uVar8 * uVar5) * 0x10000;
        uVar3 = uVar5 * (uVar13 & 0xffff);
        uVar7 = uVar5;
        if (uVar12 <= uVar3 && uVar3 - uVar12 != 0) {
          bVar14 = CARRY4(uVar13,uVar12);
          uVar12 = uVar13 + uVar12;
          uVar7 = uVar5 - 1;
          if ((uVar12 <= uVar3 && uVar3 - uVar12 != 0) && (!bVar14)) {
            uVar7 = uVar5 - 2;
            uVar12 = uVar12 + uVar13;
          }
        }
        uVar5 = (uVar12 - uVar3) / uVar8;
        uVar10 = uVar5 * (uVar13 & 0xffff);
        uVar12 = uVar4 & 0xffff | ((uVar12 - uVar3) - uVar8 * uVar5) * 0x10000;
        uVar3 = uVar5;
        if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) {
          bVar14 = CARRY4(uVar13,uVar12);
          uVar12 = uVar13 + uVar12;
          uVar3 = uVar5 - 1;
          if ((!bVar14) && (uVar12 <= uVar10 && uVar10 - uVar12 != 0)) {
            uVar3 = uVar5 - 2;
            uVar12 = uVar12 + uVar13;
          }
        }
        uVar3 = uVar3 | uVar7 << 0x10;
        uVar2 = (ulonglong)uVar3 * (ulonglong)(param_3 << iVar6);
        if (CONCAT44(uVar12 - uVar10,param_1) < uVar2) {
          uVar3 = uVar3 - 1;
          uVar2 = uVar2 - CONCAT44(uVar13,param_3 << iVar6);
        }
        if (param_5 != (uint *)0x0) {
          uVar7 = ((uVar12 - uVar10) - (int)(uVar2 >> 0x20)) - (uint)(param_1 < (uint)uVar2);
          *param_5 = uVar7 << (uVar11 & 0xff) | param_1 - (uint)uVar2 >> iVar6;
          param_5[1] = uVar7 >> iVar6;
          puVar9 = (uint *)0x0;
        }
      }
    }
  }
  return CONCAT44(puVar9,uVar3);
}

