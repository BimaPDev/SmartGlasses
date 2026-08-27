/* FUN_2c00acfc @ 0x2c00acfc */

uint FUN_2c00acfc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c00ae0c;
  iVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    *DAT_2c00ae0c = 0x2c00ad10;
    puVar3[1] = unaff_lr;
  }
  puVar4 = DAT_2c00ae10;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_2c00ae10 + 7) != '\0') {
    bVar1 = false;
    goto LAB_2c00ad4e;
  }
  uVar10 = (uint)*DAT_2c00ae10;
  *(undefined1 *)((int)DAT_2c00ae10 + 7) = 1;
  uVar7 = (uint)puVar4[1];
  if (uVar10 < uVar7) {
    uVar6 = puVar4[2];
    uVar7 = (uVar7 - uVar10) - 1;
    if (uVar6 == 0) goto LAB_2c00ad7c;
LAB_2c00ad38:
    if (param_2 + 0xd <= uVar7) {
      FUN_2c00ac24();
      uVar7 = 0;
      uVar10 = (uint)*puVar4;
      puVar4[2] = 0;
      goto LAB_2c00ad80;
    }
    if (uVar6 != 0xffff) goto LAB_2c00addc;
    bVar1 = true;
  }
  else {
    uVar6 = puVar4[2];
    uVar7 = 0xfff - (uVar10 - uVar7);
    if (uVar6 != 0) goto LAB_2c00ad38;
LAB_2c00ad7c:
    if (uVar7 < param_2) {
LAB_2c00addc:
      bVar1 = true;
      puVar4[2] = uVar6 + 1;
    }
    else {
LAB_2c00ad80:
      iVar5 = DAT_2c00ae14;
      uVar9 = 0x1000 - uVar10 & 0xffff;
      if (uVar9 < param_2) {
        FUN_2c00395c(DAT_2c00ae14 + uVar10,param_1,uVar9,uVar7,param_4);
        FUN_2c00395c(iVar5,param_1 + uVar9,param_2 - uVar9);
      }
      else {
        FUN_2c00395c(DAT_2c00ae14 + uVar10,param_1,param_2,uVar7,param_4);
      }
      uVar7 = (uint)*puVar4 + (param_2 & 0xffff);
      uVar6 = (ushort)uVar7;
      if ((uVar7 & 0xffff) < 0x1000) {
        *puVar4 = uVar6;
      }
      else {
        *puVar4 = uVar6 - 0x1000;
        *(undefined1 *)(puVar4 + 4) = 1;
      }
      if (*(char *)((int)puVar4 + 9) == '\0') {
        bVar1 = false;
        if (*DAT_2c00ae18 - 2 < 2) {
          FUN_2c00aa48();
        }
      }
      else {
        bVar1 = false;
      }
    }
  }
  *(undefined1 *)((int)puVar4 + 7) = 0;
LAB_2c00ad4e:
  if (iVar8 == 0) {
    *DAT_2c00ae0c = 0xffffffff;
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

