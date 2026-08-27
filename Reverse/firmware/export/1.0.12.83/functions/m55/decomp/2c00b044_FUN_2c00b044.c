/* FUN_2c00b044 @ 0x2c00b044 */

uint FUN_2c00b044(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c00b150;
  iVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    *DAT_2c00b150 = 0x2c00b058;
    puVar3[1] = unaff_lr;
  }
  puVar4 = DAT_2c00b154;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_2c00b154 + 7) != '\0') {
    bVar1 = false;
    goto LAB_2c00b092;
  }
  uVar6 = (uint)*DAT_2c00b154;
  *(undefined1 *)((int)DAT_2c00b154 + 7) = 1;
  uVar7 = (uint)puVar4[1];
  if (uVar6 < uVar7) {
    uVar5 = puVar4[2];
    uVar7 = (uVar7 - uVar6) - 1;
    if (uVar5 == 0) goto LAB_2c00b0be;
LAB_2c00b07c:
    if (param_2 + 0xd <= uVar7) {
      FUN_2c00ac24();
      uVar7 = 0;
      uVar6 = (uint)*puVar4;
      puVar4[2] = 0;
      goto LAB_2c00b0c2;
    }
    if (uVar5 != 0xffff) goto LAB_2c00b124;
    bVar1 = true;
  }
  else {
    uVar5 = puVar4[2];
    uVar7 = 0xfff - (uVar6 - uVar7);
    if (uVar5 != 0) goto LAB_2c00b07c;
LAB_2c00b0be:
    if (uVar7 < param_2) {
LAB_2c00b124:
      bVar1 = true;
      puVar4[2] = uVar5 + 1;
    }
    else {
LAB_2c00b0c2:
      uVar9 = 0x1000 - uVar6 & 0xffff;
      if (uVar9 < param_2) {
        FUN_2c00395c(DAT_2c00b158 + uVar6,param_1,uVar9,uVar7,param_4);
LAB_2c00b114:
        FUN_2c00395c(DAT_2c00b158,param_1 + uVar9,param_2 - uVar9);
      }
      else {
        uVar9 = param_2 & 0xffff;
        FUN_2c00395c(DAT_2c00b158 + uVar6,param_1,uVar9,uVar7,param_4);
        if (uVar9 < param_2) goto LAB_2c00b114;
      }
      uVar6 = (uint)*puVar4 + (param_2 & 0xffff);
      uVar5 = (ushort)uVar6;
      if ((uVar6 & 0xffff) < 0x1000) {
        *puVar4 = uVar5;
      }
      else {
        *puVar4 = uVar5 - 0x1000;
        *(undefined1 *)(puVar4 + 4) = 1;
      }
      if (*(char *)((int)puVar4 + 9) == '\0') {
        bVar1 = false;
        if (*DAT_2c00b15c - 2 < 2) {
          FUN_2c00aa48();
        }
      }
      else {
        bVar1 = false;
      }
    }
  }
  *(undefined1 *)((int)puVar4 + 7) = 0;
LAB_2c00b092:
  if (iVar8 == 0) {
    *DAT_2c00b150 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  if (bVar1) {
    param_2 = 0;
  }
  return param_2;
}

