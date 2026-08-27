/* FUN_1409eea8 @ 0x1409eea8 */

undefined4 FUN_1409eea8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  piVar3 = DAT_1409efe8;
  if (*DAT_1409efe8 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    FUN_1402a6e8(4,0x112,DAT_1409efc4,DAT_1409efc8,DAT_1409efc0);
    FUN_1402a9fc(DAT_1409efcc,1,6,param_1);
    iVar4 = FUN_140a2d10();
    iVar5 = FUN_140a2e40();
    puVar2 = DAT_1409efd8;
    uVar9 = iVar5 + iVar4 + -0x2001 & 0xfffff000;
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = isIRQinterruptsEnabled();
    }
    if ((uVar6 & 1) == 0) {
      *DAT_1409efd8 = 0x1409ef82;
      puVar2[1] = unaff_lr;
      disableIRQinterrupts();
    }
    iVar4 = *piVar3;
    FUN_140e5278(uVar9,iVar4,0x1000);
    if (*DAT_1409efd0 == '\x01') {
      *(undefined4 *)(uVar9 + 0x10c) = *param_1;
      *(undefined2 *)(uVar9 + 0x110) = *(undefined2 *)(param_1 + 1);
      uVar7 = FUN_140a2edc(0,uVar9 + 8,0x28c);
      *(undefined4 *)(uVar9 + 4) = uVar7;
    }
    else {
      *(undefined4 *)(uVar9 + 0x238) = *param_1;
      *(undefined2 *)(uVar9 + 0x23c) = *(undefined2 *)(param_1 + 1);
      *(undefined4 *)(uVar9 + 0x240) = *param_1;
      *(undefined2 *)(uVar9 + 0x244) = *(undefined2 *)(param_1 + 1);
      uVar7 = FUN_140a2edc(0,uVar9 + 0x134,*(undefined4 *)(iVar4 + 300));
      *(undefined4 *)(uVar9 + 0x130) = uVar7;
    }
    uVar8 = DAT_1409efd4 & 0xffffff;
    iVar4 = FUN_140e53c8(0xc,uVar8,0x1000,0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1409efe0,DAT_1409efdc,iVar4);
    }
    iVar4 = FUN_140e50a8(0xc,uVar8,uVar9,0x1000,0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1409efe4,DAT_1409efdc,iVar4);
    }
    uVar7 = 0;
    if ((uVar6 & 1) == 0) {
      *DAT_1409efd8 = 0xffffffff;
      enableIRQinterrupts();
      uVar7 = 0;
    }
  }
  return uVar7;
}

