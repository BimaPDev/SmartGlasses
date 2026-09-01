/* FUN_10001d50 @ 0x10001d50 */

undefined4 FUN_10001d50(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar4 = DAT_10001f04;
  uVar3 = DAT_10001f00;
  iVar7 = 0;
  bVar2 = false;
  bVar1 = false;
  while (iVar9 = *param_1, iVar9 == 0) {
LAB_10001ec0:
    iVar7 = iVar7 + 1;
    param_1 = param_1 + 6;
    if ((int)param_2 <= iVar7) {
      return 0;
    }
  }
  uVar5 = *(uint *)(iVar9 + 4);
  uVar6 = DAT_10001ed4;
  if ((uVar5 & DAT_10001ed0) == 0) goto LAB_10001d7c;
  uVar5 = *(uint *)(iVar9 + 0xc);
  uVar8 = (uint)*(ushort *)(iVar9 + 0x10);
  uVar10 = *(uint *)(iVar9 + 8);
  uVar6 = DAT_10001ed8;
  if (((0x200 < uVar5) || (0x200 < uVar8)) || (0xfff < uVar10)) goto LAB_10001d9e;
  iVar9 = FUN_10003148();
  if (iVar9 == 0x10) {
    if (-1 < *(int *)(*param_1 + 0x18) << 0x1f) {
      uVar5 = *(uint *)(*param_1 + 8) & 1;
LAB_10001dc6:
      if (uVar5 == 0) goto LAB_10001dea;
    }
  }
  else {
    if (iVar9 != 0x20) {
LAB_10001dea:
      uVar8 = (uint)(short)param_1[3];
      uVar10 = (uint)*(short *)((int)param_1 + 0xe);
      uVar6 = DAT_10001ee0;
      if ((0x1ff < (uVar8 - 1 & 0xffff)) || (0x1ff < (uVar10 - 1 & 0xffff))) {
LAB_10001e08:
        FUN_10003108(uVar6);
        return 0xffffffea;
      }
      if (param_1[5] == 0) {
        iVar11 = *param_1;
        uVar12 = *(uint *)(iVar11 + 0xc);
        if ((uVar8 != uVar12) || (uVar10 != *(ushort *)(iVar11 + 0x10))) {
          uVar6 = DAT_10001eec;
          if ((bVar2) || ((iVar7 == 0 && (2 < param_2)))) goto LAB_10001e20;
          uVar5 = *(uint *)(iVar11 + 4);
          uVar6 = DAT_10001ef0;
          if ((uVar5 & uVar4) == 0) {
LAB_10001d7c:
            FUN_10003108(uVar6,iVar7,uVar5);
            return 0xffffffea;
          }
          if ((uVar8 * 0xf < uVar12) ||
             ((int)(uVar10 * 0xf) < (int)(uint)*(ushort *)(iVar11 + 0x10))) {
            FUN_10003108(DAT_10001ef4,iVar7,uVar12,(uint)*(ushort *)(iVar11 + 0x10),uVar8,uVar10);
            return 0xffffffea;
          }
          if ((((uVar5 & uVar3) != 0) && (*(int *)(iVar11 + 8) == 0)) &&
             (uVar6 = DAT_10001ef8, (iVar9 * uVar12 & 7) != 0)) goto LAB_10001d7c;
          bVar2 = true;
        }
        if (((*(uint *)(iVar11 + 4) & uVar3) != 0) &&
           ((uVar6 = DAT_10001efc, 7 < (int)((uint)*(byte *)(iVar11 + 0x14) * iVar9) ||
            ((*(byte *)(iVar11 + 0x14) != 0 && (*(int *)(iVar11 + 8) == 0)))))) goto LAB_10001e08;
      }
      else {
        uVar6 = DAT_10001ee4;
        if ((bVar1) || ((iVar7 == 0 && (2 < param_2)))) {
LAB_10001e20:
          FUN_10003108(uVar6);
          return 0xffffffea;
        }
        uVar5 = *(uint *)(*param_1 + 4);
        uVar6 = DAT_10001ee8;
        if ((uVar5 & 0xa8) == 0) goto LAB_10001d7c;
        bVar1 = true;
      }
      goto LAB_10001ec0;
    }
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      uVar5 = *(uint *)(*param_1 + 8) & 3;
      goto LAB_10001dc6;
    }
  }
  iVar9 = *param_1;
  uVar10 = *(uint *)(iVar9 + 8);
  uVar8 = *(uint *)(iVar9 + 0x18);
  uVar5 = *(uint *)(iVar9 + 4);
  uVar6 = DAT_10001edc;
LAB_10001d9e:
  FUN_10003108(uVar6,iVar7,uVar5,uVar8,uVar10);
  return 0xffffffea;
}

