/* FUN_2c667690 @ 0x2c667690 */

uint FUN_2c667690(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double in_d0;
  double in_d1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  uStack_2c = (uint)((ulonglong)in_d1 >> 0x20);
  local_30 = SUB84(in_d1,0);
  uVar4 = uStack_2c & 0x7fffffff;
  uStack_24 = (uint)((ulonglong)in_d0 >> 0x20);
  if (((ulonglong)in_d1 & 0x7fffffff00000000) == 0 && local_30 == 0) {
LAB_2c667718:
    return SUB84((in_d0 * in_d1) / (in_d0 * in_d1),0);
  }
  uVar7 = uStack_24 & 0x7fffffff;
  if ((DAT_2c66791c < (int)uVar7) || (DAT_2c667920 < (uVar4 | (-local_30 | local_30) >> 0x1f)))
  goto LAB_2c667718;
  local_28 = SUB84(in_d0,0);
  if (uVar7 <= uVar4) {
    if (uVar7 < uVar4) {
      return local_28;
    }
    if (local_28 < local_30) {
      return local_28;
    }
    if (local_28 == local_30) {
      return (uint)*(undefined8 *)(DAT_2c667928 + ((uStack_24 & 0x80000000) >> 0x1c));
    }
  }
  if ((DAT_2c667920 & uStack_24) == 0) {
    if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0) {
      iVar2 = DAT_2c667930;
      if (0 < (int)local_28) {
        iVar2 = -0x413;
        uVar6 = local_28;
        do {
          uVar6 = uVar6 * 2;
          iVar2 = iVar2 + -1;
        } while (0 < (int)uVar6);
      }
    }
    else {
      iVar1 = DAT_2c667924;
      for (iVar5 = uStack_24 * 0x800;
          (iVar2 = iVar1, 0 < iVar5 && (iVar2 = iVar1 + -1, 0 < iVar5 * 2)); iVar5 = iVar5 * 4) {
        iVar1 = iVar1 + -2;
      }
    }
  }
  else {
    iVar2 = ((int)uVar7 >> 0x14) + -0x3ff;
  }
  if ((DAT_2c667920 & uStack_2c) == 0) {
    if (((ulonglong)in_d1 & 0x7fffffff00000000) == 0) {
      iVar5 = DAT_2c667930;
      if (0 < (int)local_30) {
        iVar5 = -0x413;
        uVar6 = local_30;
        do {
          uVar6 = uVar6 * 2;
          iVar5 = iVar5 + -1;
        } while (0 < (int)uVar6);
      }
    }
    else {
      iVar8 = DAT_2c667924;
      for (iVar1 = uStack_2c * 0x800;
          (iVar5 = iVar8, 0 < iVar1 && (iVar5 = iVar8 + -1, 0 < iVar1 * 2)); iVar1 = iVar1 * 4) {
        iVar8 = iVar8 + -2;
      }
    }
  }
  else {
    iVar5 = ((int)uVar4 >> 0x14) + -0x3ff;
  }
  if (iVar2 < DAT_2c667924) {
    uVar6 = DAT_2c667924 - iVar2;
    if ((int)uVar6 < 0x20) {
      uVar3 = local_28 << (uVar6 & 0xff);
      uVar7 = local_28 >> (iVar2 + 0x41eU & 0xff) | uVar7 << (uVar6 & 0xff);
    }
    else {
      uVar3 = 0;
      uVar7 = local_28 << (DAT_2c66792c - iVar2 & 0xffU);
    }
  }
  else {
    uVar7 = uStack_24 & 0xfffff | 0x100000;
    uVar3 = local_28;
  }
  if (iVar5 < DAT_2c667924) {
    uVar6 = DAT_2c667924 - iVar5;
    if ((int)uVar6 < 0x20) {
      uVar9 = local_30 << (uVar6 & 0xff);
      uVar4 = local_30 >> (iVar5 + 0x41eU & 0xff) | uVar4 << (uVar6 & 0xff);
      goto LAB_2c667776;
    }
    iVar2 = iVar2 - iVar5;
    uVar4 = local_30 << (DAT_2c66792c - iVar5 & 0xffU);
    if (iVar2 == 0) {
      uVar4 = uVar7 - uVar4;
      uVar6 = uVar3;
      goto LAB_2c6677c2;
    }
    uVar9 = 0;
LAB_2c66778e:
    do {
      while( true ) {
        iVar1 = uVar7 - uVar4;
        iVar8 = uVar3 - uVar9;
        if (uVar3 < uVar9) {
          iVar1 = iVar1 + -1;
        }
        uVar7 = uVar7 * 2 - ((int)uVar3 >> 0x1f);
        if (-1 < iVar1) break;
        iVar2 = iVar2 + -1;
        uVar3 = uVar3 << 1;
        if (iVar2 == 0) goto LAB_2c6677b4;
      }
      uVar3 = iVar8 * 2;
      uVar7 = iVar1 * 2 - (iVar8 >> 0x1f);
      if (iVar1 == 0 && iVar8 == 0) goto LAB_2c66780c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
LAB_2c6677b4:
    uVar6 = uVar3 - uVar9;
  }
  else {
    uVar4 = uStack_2c & 0xfffff | 0x100000;
    uVar9 = local_30;
LAB_2c667776:
    uVar6 = uVar3 - uVar9;
    iVar2 = iVar2 - iVar5;
    if (iVar2 != 0) goto LAB_2c66778e;
  }
  uVar4 = uVar7 - uVar4;
  if (uVar3 < uVar9) {
    uVar4 = uVar4 - 1;
  }
LAB_2c6677c2:
  if (-1 < (int)uVar4) {
    uVar3 = uVar6;
    uVar7 = uVar4;
  }
  if (uVar7 != 0 || uVar3 != 0) {
    for (; (int)uVar7 < 0x100000; uVar7 = uVar7 * 2 - iVar1) {
      iVar1 = (int)uVar3 >> 0x1f;
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 << 1;
    }
    if (DAT_2c667924 <= iVar5) {
      return uVar3;
    }
    uVar4 = DAT_2c667924 - iVar5;
    if ((int)uVar4 < 0x15) {
      return uVar7 << (iVar5 + 0x41eU & 0xff) | uVar3 >> (uVar4 & 0xff);
    }
    if ((int)uVar4 < 0x20) {
      return uVar3 >> (uVar4 & 0xff) | uVar7 << (iVar5 + 0x41eU & 0xff);
    }
    return (int)uVar7 >> (DAT_2c66792c - iVar5 & 0xffU);
  }
LAB_2c66780c:
  return (uint)*(undefined8 *)(DAT_2c667928 + ((int)uStack_24 >> 0x1f) * -8);
}

