/* FUN_1008a2dc @ 0x1008a2dc */

void FUN_1008a2dc(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  
  iVar1 = FUN_10126fae(param_2);
  iVar2 = FUN_10124cb8(iVar1,0x10);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10125fd0(iVar1);
  iVar3 = FUN_10125ff0(iVar1);
  piVar18 = param_1;
  if (iVar3 != 0) {
    piVar18 = (int *)(param_2 + 0x14);
  }
  iVar4 = FUN_1012691c(iVar1,0,0x32);
  iVar5 = FUN_1012691c(iVar1,0,0x10);
  iVar5 = iVar5 + iVar4;
  iVar6 = FUN_1012691c(iVar1,0,0x11);
  iVar6 = iVar6 + iVar4;
  iVar12 = iVar5 + *(int *)(iVar1 + 0x18);
  iVar13 = piVar18[1];
  iVar9 = param_3[1];
  uVar16 = (iVar12 - iVar9) - iVar13;
  iVar14 = piVar18[3];
  iVar15 = *(int *)(iVar1 + 0x20);
  iVar8 = ((iVar9 + iVar6) - iVar15) + iVar14;
  iVar7 = FUN_10125790(iVar1);
  if ((int)uVar16 < 0) {
    if ((iVar8 < 1) || (iVar12 = FUN_10089f60(iVar1), iVar12 - iVar8 < 0)) goto LAB_1008a3a2;
    uVar16 = (iVar15 - (iVar9 + iVar6)) - iVar14;
  }
  else if (((-1 < iVar8) || (uVar16 == 0)) ||
          (iVar8 = FUN_10126008(iVar1), (iVar9 - iVar12) + iVar13 + iVar8 < 0)) {
LAB_1008a3a2:
    uVar16 = 0;
  }
  if (iVar3 == 2) {
    iVar3 = piVar18[3];
    iVar5 = *(int *)(iVar1 + 0x20) - iVar6;
LAB_1008a3bc:
    uVar16 = iVar5 - iVar3;
  }
  else if (iVar3 == 3) {
    uVar16 = ((iVar5 + *(int *)(iVar1 + 0x18) + (iVar7 - (iVar6 + iVar5)) / 2) - piVar18[1]) -
             ((piVar18[3] + 1) - piVar18[1]) / 2;
  }
  else if (iVar3 == 1) {
    iVar3 = piVar18[1];
    iVar5 = *(int *)(iVar1 + 0x18) + iVar5;
    goto LAB_1008a3bc;
  }
  iVar3 = FUN_10125fe2(iVar1);
  if (iVar3 != 0) {
    param_1 = (int *)(param_2 + 0x14);
  }
  iVar5 = FUN_1012691c(iVar1,0,0x12);
  iVar5 = iVar4 + iVar5;
  iVar6 = FUN_1012691c(iVar1,0,0x13);
  iVar7 = *param_3;
  iVar8 = *(int *)(iVar1 + 0x14) + iVar5;
  iVar9 = param_1[2];
  iVar4 = iVar4 + iVar6;
  iVar12 = *(int *)(iVar1 + 0x1c);
  iVar6 = *param_1;
  uVar17 = (iVar8 - iVar7) - iVar6;
  iVar13 = ((iVar7 + iVar4) - iVar12) + iVar9;
  if ((int)uVar17 < 0) {
    if ((iVar13 < 1) || (iVar6 = FUN_1008a0c0(iVar1), iVar6 - iVar13 < 0)) goto LAB_1008a43a;
    uVar17 = (iVar12 - (iVar7 + iVar4)) - iVar9;
  }
  else if (((-1 < iVar13) || (uVar17 == 0)) ||
          (iVar9 = FUN_1008a000(iVar1), iVar6 + (iVar7 - iVar8) + iVar9 < 0)) {
LAB_1008a43a:
    uVar17 = 0;
  }
  iVar6 = FUN_10125786(iVar1);
  if (iVar3 == 2) {
    iVar3 = param_1[2];
    iVar5 = *(int *)(iVar1 + 0x1c) - iVar4;
  }
  else {
    if (iVar3 == 3) {
      uVar17 = (((*(int *)(iVar1 + 0x14) + iVar5) - *param_1) - ((param_1[2] + 1) - *param_1) / 2) +
               (iVar6 - (iVar5 + iVar4)) / 2;
      goto LAB_1008a45e;
    }
    if (iVar3 != 1) goto LAB_1008a45e;
    iVar3 = *param_1;
    iVar5 = *(int *)(iVar1 + 0x14) + iVar5;
  }
  uVar17 = iVar5 - iVar3;
LAB_1008a45e:
  iVar3 = FUN_100932b0(iVar1,DAT_1008a5b0);
  iVar4 = FUN_100932b0(iVar1,DAT_1008a5b4);
  if (((iVar3 != 0) || (iVar4 != 0)) && (iVar3 = FUN_10086f50(iVar1,10,0), iVar3 != 1)) {
    return;
  }
  if (-1 < iVar2 << 0x1f) {
    uVar17 = uVar17 & ~((int)uVar17 >> 0x1f);
  }
  if (-1 < iVar2 << 0x1e) {
    uVar17 = uVar17 & (int)uVar17 >> 0x1f;
  }
  if (-1 < iVar2 << 0x1d) {
    uVar16 = uVar16 & ~((int)uVar16 >> 0x1f);
  }
  if (-1 < iVar2 << 0x1c) {
    uVar16 = uVar16 & (int)uVar16 >> 0x1f;
  }
  uVar10 = uVar17;
  if (param_4 == 0) {
    uVar10 = 0;
  }
  uVar11 = uVar16;
  if (param_4 == 0) {
    uVar11 = 0;
  }
  *param_3 = *param_3 + uVar10;
  param_3[1] = param_3[1] + uVar11;
  FUN_1008a178(iVar1,uVar17,uVar16,param_4);
  return;
}

