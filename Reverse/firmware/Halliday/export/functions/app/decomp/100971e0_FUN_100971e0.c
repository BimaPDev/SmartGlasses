/* FUN_100971e0 @ 0x100971e0 */

int FUN_100971e0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  uint local_68;
  undefined1 local_55;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  int local_48 [2];
  int local_40;
  
  if (param_2 == (int *)0x0) {
    uVar19 = FUN_10094174(3,DAT_10097498,0x193,DAT_1009749c,DAT_10097494,DAT_10097490,DAT_1009748c);
    FUN_10119dc2(DAT_100974a4,DAT_100974a0,DAT_10097498,0x193,uVar19);
    FUN_10119dc2(DAT_100974a8);
    FUN_1011a1f0(DAT_10097498,0x193,extraout_r2,extraout_r3);
  }
  iVar11 = *param_2;
  iVar2 = FUN_1012691c(param_1,0,0x12);
  iVar13 = param_2[1];
  iVar3 = FUN_1012691c(param_1,0,0x10);
  FUN_101257f6(param_1,local_48);
  iVar17 = (local_40 + 1) - local_48[0];
  iVar18 = *(int *)(param_1 + 0x2c);
  iVar4 = FUN_1012bea2(param_1);
  iVar5 = FUN_1012be8a(param_1);
  iVar6 = FUN_1012be96(param_1);
  iVar14 = *(int *)(iVar4 + 8);
  local_68 = (*(byte *)(param_1 + 0x54) & 0x1f) >> 4;
  if ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1a) < 0) {
    local_68 = local_68 | 2;
  }
  iVar7 = FUN_1012beae(param_1);
  if ((iVar7 == DAT_100974ac) && (-1 < (int)((uint)*(byte *)(param_1 + 0x2b) << 0x1c))) {
    local_68 = local_68 | 4;
  }
  iVar7 = FUN_10126d52(param_1,0,*(undefined4 *)(param_1 + 0x2c));
  iVar5 = iVar5 + iVar14;
  uVar16 = 0;
  while (iVar12 = iVar18 + uVar16, uVar15 = uVar16, *(char *)(iVar18 + uVar16) != '\0') {
    iVar8 = FUN_10094d74(iVar12,iVar4,iVar6,iVar17,0,local_68);
    uVar15 = uVar16 + iVar8;
    if (iVar13 - iVar3 <= iVar14) {
      local_4c = uVar15;
      iVar3 = (*(code *)*DAT_100974b0)(iVar18,&local_4c);
      if ((iVar3 != 10) && (*(char *)(iVar18 + uVar15) == '\0')) {
        uVar15 = uVar15 + 1;
      }
      break;
    }
    iVar14 = iVar14 + iVar5;
    uVar16 = uVar15;
  }
  iVar13 = uVar15 - uVar16;
  iVar5 = FUN_100942d8(iVar13 + 1);
  iVar3 = iVar13;
  if (((uVar15 != 0) && (*(char *)(iVar18 + uVar15 + -1) == '\0')) && (iVar13 != 0)) {
    iVar3 = iVar13 + -1;
  }
  uVar9 = FUN_1012be7c(param_1);
  iVar14 = 0;
  FUN_100938d0(iVar12,iVar5,iVar3,uVar9,0,0);
  if (iVar7 == 2) {
    iVar13 = FUN_1012b53a(iVar5,iVar13,iVar4,iVar6,local_68);
    iVar14 = ((local_40 + 1) - local_48[0]) / 2 - iVar13 / 2;
  }
  else if (iVar7 == 3) {
    iVar14 = FUN_1012b53a(iVar5,iVar13,iVar4,iVar6,local_68);
    iVar14 = ((local_40 + 1) - local_48[0]) - iVar14;
  }
  local_55 = 0;
  local_54 = 0;
  iVar13 = local_54;
  if (uVar15 != 0) {
    iVar17 = 0;
    while (iVar13 = local_54, local_54 + uVar16 < uVar15) {
      FUN_100950f8(iVar5,&local_50,&local_4c,&local_54);
      if (((local_68 & 1) == 0) ||
         (iVar13 = FUN_1012b4fe(&local_55,*(undefined1 *)(iVar5 + local_54)), iVar13 == 0)) {
        iVar7 = FUN_10092918(iVar4,local_50,local_4c);
        iVar13 = iVar17;
        if ((iVar11 - iVar2 < iVar7 + iVar14) ||
           ((local_54 + uVar16 == uVar15 || (*(char *)(iVar18 + uVar16 + iVar17) == '\0')))) break;
        iVar14 = iVar7 + iVar14 + iVar6;
        iVar17 = local_54;
      }
    }
  }
  local_54 = iVar13;
  puVar1 = DAT_100974b4;
  uVar9 = (*(code *)*DAT_100974b4)(iVar5,local_54);
  iVar2 = local_54;
  if (*(char *)(iVar18 + local_54 + uVar16) != '\0') {
    uVar10 = FUN_1012be7c(param_1);
    iVar2 = FUN_1012adde(iVar12,0,iVar3,uVar10,uVar9,&local_4c);
    if ((local_4c & 0xff) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  FUN_10094444(iVar5);
  iVar3 = (*(code *)*puVar1)(iVar18,uVar16);
  return iVar3 + iVar2;
}

