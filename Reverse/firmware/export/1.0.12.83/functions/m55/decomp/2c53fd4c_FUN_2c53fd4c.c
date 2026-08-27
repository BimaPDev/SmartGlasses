/* FUN_2c53fd4c @ 0x2c53fd4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53fd4c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  piVar1 = _LAB_2c53ff60;
  iVar10 = *param_1;
  iVar6 = param_1[1];
  uVar7 = _LAB_2c53ff54 * (iVar6 - iVar10 >> 4);
  if (uVar7 - _LAB_2c53ff58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c53ff68);
  }
  uVar3 = uVar7;
  if (uVar7 == 0) {
    uVar3 = 1;
  }
  uVar8 = uVar7 + uVar3;
  iVar9 = _DAT_2c53ff64;
  if (!CARRY4(uVar7,uVar3)) {
    if (uVar8 == 0) {
      iVar5 = 0x250;
      iVar9 = 0;
      iVar2 = 0;
      goto LAB_2c53fd88;
    }
    if (_LAB_2c53ff58 <= uVar8) {
      uVar8 = _LAB_2c53ff58;
    }
    iVar9 = uVar8 * 0x250;
  }
  if (*_LAB_2c53ff60 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar2 = FUN_2c47245c(0,iVar9);
  iVar9 = iVar9 + iVar2;
  iVar5 = iVar2 + 0x250;
LAB_2c53fd88:
  iVar4 = iVar2 + (param_2 - iVar10);
  iVar4 = FUN_2c674268(iVar4,0,0x250,iVar4,param_4);
  *(undefined4 *)(iVar2 + (param_2 - iVar10)) = _LAB_2c53ff5c;
  *(undefined1 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 4) = iVar4 + 0xc;
  *(undefined1 *)(iVar4 + 0x30) = 0;
  *(int *)(iVar4 + 0x28) = iVar4 + 0x30;
  *(undefined1 *)(iVar4 + 0x48) = 0;
  *(int *)(iVar4 + 0x40) = iVar4 + 0x48;
  *(undefined1 *)(iVar4 + 0x60) = 0;
  *(int *)(iVar4 + 0x58) = iVar4 + 0x60;
  *(undefined1 *)(iVar4 + 0x78) = 0;
  *(int *)(iVar4 + 0x70) = iVar4 + 0x78;
  *(undefined1 *)(iVar4 + 0x90) = 0;
  *(int *)(iVar4 + 0x88) = iVar4 + 0x90;
  *(undefined1 *)(iVar4 + 0xa8) = 0;
  *(int *)(iVar4 + 0xa0) = iVar4 + 0xa8;
  *(undefined1 *)(iVar4 + 0xc0) = 0;
  *(int *)(iVar4 + 0xb8) = iVar4 + 0xc0;
  *(undefined1 *)(iVar4 + 0xd8) = 0;
  *(int *)(iVar4 + 0xd0) = iVar4 + 0xd8;
  *(undefined1 *)(iVar4 + 0xf0) = 0;
  *(int *)(iVar4 + 0xe8) = iVar4 + 0xf0;
  *(undefined1 *)(iVar4 + 0x108) = 0;
  *(int *)(iVar4 + 0x100) = iVar4 + 0x108;
  *(undefined1 *)(iVar4 + 0x120) = 0;
  *(int *)(iVar4 + 0x118) = iVar4 + 0x120;
  *(undefined1 *)(iVar4 + 0x138) = 0;
  *(int *)(iVar4 + 0x130) = iVar4 + 0x138;
  *(undefined1 *)(iVar4 + 0x150) = 0;
  *(int *)(iVar4 + 0x148) = iVar4 + 0x150;
  *(undefined1 *)(iVar4 + 0x168) = 0;
  *(int *)(iVar4 + 0x160) = iVar4 + 0x168;
  *(int *)(iVar4 + 0x178) = iVar4 + 0x180;
  *(undefined1 *)(iVar4 + 0x180) = 0;
  *(undefined1 *)(iVar4 + 0x198) = 0;
  *(undefined1 *)(iVar4 + 0x1b0) = 0;
  *(undefined1 *)(iVar4 + 0x1c8) = 0;
  *(undefined1 *)(iVar4 + 0x1e0) = 0;
  *(undefined1 *)(iVar4 + 0x1f8) = 0;
  *(undefined1 *)(iVar4 + 0x210) = 0;
  *(undefined1 *)(iVar4 + 0x228) = 0;
  *(undefined1 *)(iVar4 + 0x240) = 0;
  *(int *)(iVar4 + 400) = iVar4 + 0x198;
  *(int *)(iVar4 + 0x1a8) = iVar4 + 0x1b0;
  *(int *)(iVar4 + 0x1c0) = iVar4 + 0x1c8;
  *(int *)(iVar4 + 0x1d8) = iVar4 + 0x1e0;
  *(int *)(iVar4 + 0x1f0) = iVar4 + 0x1f8;
  *(int *)(iVar4 + 0x208) = iVar4 + 0x210;
  *(int *)(iVar4 + 0x220) = iVar4 + 0x228;
  *(int *)(iVar4 + 0x238) = iVar4 + 0x240;
  iVar4 = iVar2;
  iVar11 = iVar10;
  if (param_2 != iVar10) {
    do {
      iVar5 = iVar4;
      iVar12 = iVar11 + 0x250;
      FUN_2c53ed3c(iVar5,iVar11);
      iVar4 = iVar5 + 0x250;
      iVar11 = iVar12;
    } while (iVar12 != param_2);
    iVar5 = iVar5 + 0x4a0;
  }
  for (; iVar4 = iVar10, param_2 != iVar6; param_2 = param_2 + 0x250) {
    FUN_2c53ed3c(iVar5,param_2);
    iVar5 = iVar5 + 0x250;
  }
  for (; iVar4 != iVar6; iVar4 = iVar4 + 0x250) {
    FUN_2c53eb84(iVar4);
  }
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar10);
  }
  param_1[2] = iVar9;
  *param_1 = iVar2;
  param_1[1] = iVar5;
  return;
}

