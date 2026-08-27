/* FUN_2c015bce @ 0x2c015bce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c015bce(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int in_r12;
  uint uVar15;
  
  puVar1 = _FUN_2c015e70;
  iVar8 = *(int *)(param_4 + param_1 * 4);
  uVar15 = in_r12 << (param_2 >> 0x17 & 0xff);
  if (iVar8 != 0) {
    uVar15 = uVar15 >> (param_2 >> 0x19);
  }
  if (param_1 == 0) {
    uVar5 = param_2 - 1;
    _FUN_2c015e70[3] = 0x7c;
    uVar13 = uVar15 << 0x10;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = uVar5;
    *puVar1 = 0;
    puVar1[1] = 0;
    if (param_2 < uVar15 << 0x11) {
      iVar10 = 2;
    }
    else {
      uVar2 = 0;
      puVar9 = puVar1;
      uVar14 = uVar13;
      do {
        uVar12 = uVar2;
        uVar2 = uVar12 + 1;
        puVar9[8] = uVar5;
        puVar9[7] = param_2 - uVar14;
        puVar9[6] = uVar2 * 4;
        iVar10 = uVar15 * (0x40 << (uVar2 & 0xff));
        uVar14 = iVar10 * 0x400;
        puVar9 = puVar9 + 3;
      } while ((uint)(iVar10 * 0x800) <= param_2);
      uVar14 = 0;
      iVar11 = 0x24;
      piVar6 = puVar1 + (uVar12 + 3) * 3;
      uVar2 = uVar13;
      do {
        iVar10 = uVar12 + 4 + uVar14;
        uVar14 = uVar14 + 1;
        piVar6[1] = 0;
        piVar6[2] = uVar2 - 1;
        *piVar6 = iVar11;
        iVar11 = iVar11 + 4;
        iVar3 = uVar15 * (0x40 << (uVar14 & 0xff));
        uVar2 = iVar3 * 0x400;
        piVar6 = piVar6 + 3;
      } while ((uint)(iVar3 * 0x800) <= param_2);
    }
    uVar2 = 0;
    puVar4 = puVar1 + iVar10 * 3;
    while( true ) {
      if (iVar8 == 0) {
        iVar11 = 4 << (uVar2 & 0xff);
      }
      else {
        iVar11 = 8 << (uVar2 & 0xff);
      }
      if (0x8000 < (uint)(iVar11 * 0x400)) break;
      uVar2 = uVar2 + 1;
      puVar4[1] = param_2 + iVar11 * -0x400;
      puVar4[2] = uVar5;
      *puVar4 = uVar2 * 4 | 0x40;
      puVar4 = puVar4 + 3;
    }
    uVar14 = 0;
    uVar12 = 0x24;
    puVar4 = puVar1 + (uVar2 + iVar10) * 3;
    while( true ) {
      iVar11 = uVar2 + iVar10 + uVar14;
      if (iVar8 == 0) {
        iVar3 = 4 << (uVar14 & 0xff);
      }
      else {
        iVar3 = 8 << (uVar14 & 0xff);
      }
      if (0x8000 < (uint)(iVar3 * 0x400)) break;
      uVar14 = uVar14 + 1;
      puVar4[1] = 0;
      puVar4[2] = iVar3 * 0x400 - 1;
      uVar7 = uVar12 | 0x40;
      uVar12 = uVar12 + 4;
      *puVar4 = uVar7;
      puVar4 = puVar4 + 3;
    }
    if (uVar15 << 0x11 <= param_2) {
      uVar14 = 0;
      puVar4 = puVar1 + iVar11 * 3;
      uVar2 = uVar13;
      do {
        uVar14 = uVar14 + 1;
        puVar4[1] = 0;
        iVar3 = uVar14 + iVar11;
        puVar4[2] = ~uVar2 + param_2;
        *puVar4 = uVar14 * 4 | 0x4000;
        iVar10 = uVar15 * (0x40 << (uVar14 & 0xff));
        uVar2 = iVar10 * 0x400;
        puVar4 = puVar4 + 3;
      } while ((uint)(iVar10 * 0x800) <= param_2);
      puVar4 = puVar1 + iVar3 * 3;
      uVar14 = 0x24;
      uVar2 = 0;
      do {
        iVar11 = iVar3 + 1 + uVar2;
        uVar2 = uVar2 + 1;
        puVar4[1] = uVar13;
        puVar4[2] = uVar5;
        *puVar4 = uVar14 | 0x4000;
        uVar14 = uVar14 + 4;
        iVar10 = uVar15 * (0x40 << (uVar2 & 0xff));
        puVar4 = puVar4 + 3;
        uVar13 = iVar10 * 0x400;
      } while ((uint)(iVar10 * 0x800) <= param_2);
    }
    uVar15 = 0;
    puVar4 = puVar1 + iVar11 * 3;
    while( true ) {
      if (iVar8 == 0) {
        iVar10 = 4 << (uVar15 & 0xff);
      }
      else {
        iVar10 = 8 << (uVar15 & 0xff);
      }
      if (0x8000 < (uint)(iVar10 * 0x400)) break;
      uVar15 = uVar15 + 1;
      puVar4[1] = 0;
      puVar4[2] = uVar5 + iVar10 * -0x400;
      *puVar4 = uVar15 * 4 | 0x4040;
      puVar4 = puVar4 + 3;
    }
    uVar2 = 0x24;
    uVar13 = 0;
    puVar4 = puVar1 + (uVar15 + iVar11) * 3;
    while( true ) {
      if (iVar8 == 0) {
        iVar10 = 4 << (uVar13 & 0xff);
      }
      else {
        iVar10 = 8 << (uVar13 & 0xff);
      }
      if (0x8000 < (uint)(iVar10 * 0x400)) break;
      uVar14 = uVar2 | 0x4040;
      uVar13 = uVar13 + 1;
      uVar2 = uVar2 + 4;
      puVar4[2] = uVar5;
      *puVar4 = uVar14;
      puVar4[1] = iVar10 * 0x400;
      puVar4 = puVar4 + 3;
    }
    *_DAT_2c015e64 = uVar15 + iVar11 + uVar13;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(_DAT_2c015e6c,_DAT_2c015e68,param_1);
}

