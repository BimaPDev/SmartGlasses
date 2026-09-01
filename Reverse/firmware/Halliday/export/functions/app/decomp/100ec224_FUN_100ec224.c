/* FUN_100ec224 @ 0x100ec224 */

undefined4 FUN_100ec224(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  
  puVar2 = DAT_100ec344;
  piVar1 = DAT_100ec340;
  piVar9 = (int *)*DAT_100ec344;
  if (*DAT_100ec340 == param_3) {
    iVar3 = FUN_100eaeac(*DAT_100ec340,DAT_100ec348,DAT_100ec344,DAT_100ec340,param_4);
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_100ec350 - DAT_100ec34c) * 0x20 & 0xff00U | 0x25c0031,DAT_100ec358,
                   DAT_100ec354);
      FUN_100ebda8();
      return 0;
    }
    *DAT_100ec35c = *DAT_100ec35c + 1;
  }
  else {
    iVar3 = 0;
  }
  iVar7 = *piVar1;
  if (param_2[2] == 0) {
    for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[4]) {
      if (param_4 == *piVar9) {
        if (param_3 == iVar7) {
          if (0x3f < (uint)piVar9[1]) goto LAB_100ec29a;
        }
        else if (param_3 + 0x40U <= (uint)piVar9[1]) goto LAB_100ec29a;
      }
    }
  }
  else if (param_3 == iVar7) {
    piVar9 = (int *)FUN_100ebeb8(param_4,0x80);
    if (piVar9 == (int *)0x0) {
      FUN_100eaf40(iVar3);
      *DAT_100ec35c = *DAT_100ec35c + -1;
      return 0;
    }
    goto LAB_100ec29a;
  }
  piVar9 = (int *)FUN_100ebeb8(param_4,param_3 + 0x80);
  if (piVar9 == (int *)0x0) {
    return 0;
  }
LAB_100ec29a:
  iVar7 = *param_2;
  puVar8 = (undefined4 *)(piVar9[2] + piVar9[3]);
  uVar6 = *(undefined4 *)(iVar7 + 0xc);
  *puVar8 = param_1;
  puVar8[1] = uVar6;
  puVar8[3] = 0;
  puVar8[4] = (uint)*(ushort *)(iVar7 + 0x14);
  puVar8[5] = (uint)*(ushort *)(iVar7 + 0x16);
  puVar8[6] = (uint)*(ushort *)(iVar7 + 0x18);
  iVar5 = piVar9[2];
  puVar8[7] = (uint)*(ushort *)(iVar7 + 0x1a);
  bVar10 = param_3 == *piVar1;
  if (bVar10) {
    puVar8[2] = 0x40;
  }
  else {
    puVar8[8] = puVar8 + 0x10;
  }
  if (!bVar10) {
    param_3 = param_3 + 0x40;
  }
  puVar8[0xf] = puVar2[1];
  iVar7 = param_2[2];
  if (!bVar10) {
    puVar8[2] = param_3;
  }
  iVar4 = puVar8[2];
  puVar8[9] = iVar7;
  iVar7 = piVar9[1];
  if (bVar10) {
    puVar8[8] = iVar3;
  }
  puVar2[1] = puVar8;
  uVar6 = puVar8[8];
  piVar9[2] = iVar5 + iVar4;
  piVar9[1] = iVar7 - iVar4;
  return uVar6;
}

