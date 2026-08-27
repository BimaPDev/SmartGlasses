/* FUN_2c0164f4 @ 0x2c0164f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0164f4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  char cStack_28;
  char cStack_27;
  byte bStack_26;
  int iStack_24;
  
  piVar10 = _DAT_2c016770;
  iStack_24 = *_DAT_2c01676c;
  if (_DAT_2c016770[param_1] == 0) {
    func_0x2c00634c(param_1,&cStack_28,3);
    puVar1 = _FUN_2c016780;
    if (cStack_28 == -0x38) {
      if ((cStack_27 != '@') || (1 < bStack_26 - 0x12)) goto LAB_2c016554;
      if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(_DAT_2c01678c,_DAT_2c016790,param_1);
      }
      iVar2 = *piVar10;
      _FUN_2c016780[3] = 0x7c;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = param_2 - 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar3 = 0;
      puVar7 = puVar1;
      while( true ) {
        piVar10 = _DAT_2c016784;
        uVar8 = _DAT_2c016774;
        if (iVar2 == 0) {
          iVar6 = 8 << (uVar3 & 0xff);
        }
        else {
          iVar6 = 0x10 << (uVar3 & 0xff);
        }
        iVar6 = iVar6 << (param_2 >> 0x17 & 0xff);
        if (param_2 < (uint)(iVar6 << 0xb)) break;
        uVar3 = uVar3 + 1;
        puVar7[7] = 0;
        puVar7[8] = (param_2 - 1) + iVar6 * -0x400;
        puVar7[6] = uVar3 * 4;
        puVar7 = puVar7 + 3;
      }
      *_DAT_2c016784 = uVar3 + 2;
      if (param_2 - 0x10000 <= uVar8) goto LAB_2c01651a;
      if (param_2 != 0x2000000) goto LAB_2c016522;
    }
    else {
      if (((cStack_28 == '\v') && (cStack_27 == '`')) && (bStack_26 == 0x14)) {
        uVar3 = param_2 >> 0x17;
        if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(_DAT_2c01678c,_DAT_2c016794,param_1);
        }
        _FUN_2c016780[2] = 0;
        puVar1[3] = 0x7c;
        iVar6 = 0x40 << (uVar3 & 0xff);
        iVar2 = iVar6 << 10;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[4] = 0;
        puVar1[5] = param_2 - 1;
        if (param_2 < (uint)(iVar6 << 0xb)) {
          param_1 = 2;
        }
        else {
          puVar7 = puVar1;
          uVar8 = 0;
          iVar6 = iVar2;
          do {
            uVar11 = uVar8 + 1;
            iVar12 = uVar8 + 3;
            puVar7[7] = param_2 - iVar6;
            puVar7[8] = param_2 - 1;
            puVar7[6] = uVar11 * 4;
            puVar7 = puVar7 + 3;
            iVar9 = (0x40 << (uVar11 & 0xff)) << (uVar3 & 0xff);
            iVar6 = iVar9 << 10;
            uVar8 = uVar11;
          } while ((uint)(iVar9 << 0xb) <= param_2);
          puVar4 = puVar1 + iVar12 * 3;
          uVar8 = 0;
          do {
            uVar8 = uVar8 + 1;
            param_1 = uVar8 + iVar12;
            *puVar4 = uVar8 * 4 | 0x4000;
            iVar6 = (0x40 << (uVar8 & 0xff)) << (uVar3 & 0xff);
            puVar4[1] = 0;
            puVar4[2] = iVar2 - 1;
            puVar4 = puVar4 + 3;
            iVar2 = iVar6 << 10;
          } while ((uint)(iVar6 << 0xb) <= param_2);
        }
        *_DAT_2c016784 = param_1;
        goto LAB_2c016522;
      }
LAB_2c016554:
      if (param_2 - 0x10000 <= _DAT_2c016774) goto LAB_2c01651a;
      if (param_2 != 0x2000000) {
LAB_2c016564:
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(_DAT_2c01677c,_DAT_2c016778,param_2);
      }
      if (param_1 != 0) goto LAB_2c01674c;
      iVar2 = *piVar10;
      piVar10 = _DAT_2c016784;
    }
    uVar3 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x7c;
    puVar1[4] = 0;
    puVar1[5] = 0x1ffffff;
    puVar1 = _FUN_2c016780;
    puVar7 = _FUN_2c016780;
    while( true ) {
      param_1 = uVar3 + 2;
      if (iVar2 == 0) {
        iVar6 = 4 << (uVar3 & 0xff);
      }
      else {
        iVar6 = 2 << (uVar3 & 0xff);
      }
      if (0x2000000 < (uint)(iVar6 * 0x8000)) break;
      uVar3 = uVar3 + 1;
      puVar7[7] = iVar6 * -0x4000 + 0x2000000;
      puVar7[8] = 0x1ffffff;
      puVar7[6] = uVar3 * 4;
      puVar7 = puVar7 + 3;
    }
    uVar3 = 0;
    iVar6 = 0x24;
    piVar5 = puVar1 + param_1 * 3;
    while( true ) {
      if (iVar2 == 0) {
        iVar9 = 4 << (uVar3 & 0xff);
      }
      else {
        iVar9 = 2 << (uVar3 & 0xff);
      }
      if (0x2000000 < (uint)(iVar9 * 0x8000)) break;
      *piVar5 = iVar6;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 4;
      piVar5[2] = iVar9 * 0x4000 + -1;
      piVar5[1] = 0;
      piVar5 = piVar5 + 3;
    }
    *piVar10 = param_1 + uVar3;
  }
  else {
    if (0x1fe0000 < param_2 - 0x20000) goto LAB_2c016564;
LAB_2c01651a:
    func_0x2c015bc8(param_1,param_2);
  }
LAB_2c016522:
  if (*_DAT_2c01676c == iStack_24) {
    return;
  }
  FUN_2c00a1f8();
LAB_2c01674c:
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(_DAT_2c01678c,_DAT_2c016788,param_1);
}

