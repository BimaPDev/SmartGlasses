/* FUN_2c6033b4 @ 0x2c6033b4 */

void FUN_2c6033b4(int *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int local_30;
  uint local_2c;
  
  local_2c = *DAT_2c60353c;
  uVar13 = FUN_2c62b1c8(param_3,param_2,param_3,0);
  uVar5 = (uint)(uVar13 >> 0x20);
  if (param_1 != (int *)0x0) {
LAB_2c6033dc:
    uVar3 = FUN_2c62b1b8(param_3);
    uVar1 = *(ushort *)(param_1 + 8);
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
    bVar2 = *(byte *)((int)param_1 + 0x22);
    uVar3 = 1 << (uVar3 & 0xff) & 0xff;
    if ((*(ushort *)((int)param_1 + 0x22) & 0x1f8) != 0) {
      uVar10 = 0;
      do {
        iVar8 = param_1[3];
        piVar6 = (int *)(iVar8 + uVar10 * 8);
        if (-1 < (int)((uint)*(byte *)((int)piVar6 + 7) << 0x1e)) {
          if (uVar10 < (uVar5 & 0x1ff) >> 3) {
            uVar11 = 0xffffffff;
            goto LAB_2c603472;
          }
          break;
        }
        if (((-1 < (int)((uint)bVar2 << 0x1d)) && ((piVar6[1] & 0xff0000U) == param_2)) &&
           ((uVar3 & *(byte *)(*piVar6 + 6)) != 0)) {
          uVar14 = FUN_2c62b108(*piVar6,param_3,&local_30);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          uVar15 = CONCAT44(uVar5,local_30);
          if ((int)uVar14 == 1) goto LAB_2c6034d0;
          if ((int)uVar14 == 2) goto LAB_2c6034e4;
          uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uVar5 & 0x1ff) >> 3);
    }
    goto LAB_2c6034be;
  }
LAB_2c6034f6:
  if ((param_2 == 0) && ((param_3 == 1 || (param_3 == 4)))) {
    for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
      while (param_3 != 1) {
        uVar15 = CONCAT44(uVar5,(int)*(short *)((int)param_1 + 0x16));
        if (*(short *)((int)param_1 + 0x16) != 0) goto LAB_2c6034d0;
        param_1 = (int *)*param_1;
        if (param_1 == (int *)0x0) goto LAB_2c603532;
      }
      uVar15 = CONCAT44(uVar5,(int)(short)param_1[5]);
      if ((short)param_1[5] != 0) goto LAB_2c6034d0;
    }
LAB_2c603532:
    uVar15 = (ulonglong)uVar5 << 0x20;
  }
  else {
    uVar15 = FUN_2c62b068(param_3);
  }
LAB_2c6034d0:
  if ((*DAT_2c60353c ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar15,(int)(uVar15 >> 0x20),*DAT_2c60353c ^ local_2c,0);
LAB_2c603472:
  uVar10 = uVar10 + 1;
  iVar7 = uVar10 * 8 + -8;
  iVar4 = *(int *)(iVar8 + iVar7);
  if ((uVar3 & *(byte *)(iVar4 + 6)) == 0) {
LAB_2c603466:
    uVar15 = CONCAT44(uVar5,local_30);
    uVar12 = uVar11;
    if ((uVar5 & 0x1ff) >> 3 <= uVar10) goto LAB_2c6034c8;
  }
  else {
    uVar9 = *(uint *)(iVar8 + iVar7 + 4);
    if ((((uVar9 & 0xff0000) != param_2) ||
        (uVar12 = uVar9 & 0xffff, (uVar9 & 0xffffff & ~(uint)uVar1 & 0xffff) != 0)) ||
       ((int)uVar12 <= (int)uVar11)) goto LAB_2c603466;
    uVar14 = FUN_2c62b108(iVar4,param_3,&local_30);
    uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar15 = CONCAT44(uVar5,local_30);
    if ((int)uVar14 != 1) {
      if ((int)uVar14 != 2) {
        uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
        goto LAB_2c603466;
      }
LAB_2c6034e4:
      if ((uVar13 & 1) == 0) goto LAB_2c6034f6;
      goto LAB_2c6034e8;
    }
    if (uVar1 == uVar12) goto LAB_2c6034d0;
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x22);
    uVar15 = (ulonglong)CONCAT24(*(ushort *)((int)param_1 + 0x22),local_30);
    if ((uVar5 & 0x1ff) >> 3 <= uVar10) goto LAB_2c6034d0;
  }
  iVar8 = param_1[3];
  uVar11 = uVar12;
  goto LAB_2c603472;
LAB_2c6034c8:
  if (uVar11 != 0xffffffff) goto LAB_2c6034d0;
LAB_2c6034be:
  if ((uVar13 & 1) == 0) goto LAB_2c6034f6;
  if (param_2 != 0) {
    param_2 = 0;
    goto LAB_2c6033dc;
  }
LAB_2c6034e8:
  uVar14 = FUN_2c6041d4(param_1);
  uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
  param_1 = (int *)uVar14;
  if (param_1 == (int *)0x0) goto LAB_2c6034f6;
  goto LAB_2c6033dc;
}

