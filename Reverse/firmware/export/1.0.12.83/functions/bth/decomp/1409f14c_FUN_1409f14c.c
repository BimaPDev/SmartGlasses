/* FUN_1409f14c @ 0x1409f14c */

void FUN_1409f14c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_lr;
  undefined8 uVar12;
  
  piVar3 = DAT_1409f2b8;
  piVar2 = DAT_1409f2b4;
  uVar10 = *DAT_1409f2b0;
  if (*DAT_1409f2b4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    FUN_140a2d2c();
    iVar5 = *piVar3;
    if (iVar5 == 0) {
      FUN_140a2e68(piVar3,0x1000);
      iVar5 = *piVar3;
    }
    iVar11 = *piVar2;
    FUN_140e5278(iVar5,iVar11,0x1000);
    if (*DAT_1409f2bc == '\x01') {
      FUN_1402a6e8(4,0x18c,DAT_1409f2c8,DAT_1409f2cc,DAT_1409f2dc,DAT_1409f2c0,iVar11 + 0x10,param_1
                  );
      iVar5 = *piVar3;
      FUN_140e5278(iVar5 + 0x10,param_1,param_2);
      uVar6 = FUN_140a2edc(0,iVar5 + 8,0x28c);
      *(undefined4 *)(iVar5 + 4) = uVar6;
    }
    else {
      FUN_1402a6e8(4,0x192,DAT_1409f2c8,DAT_1409f2cc,DAT_1409f2c4,DAT_1409f2c0,iVar11 + 0x13c,
                   param_1);
      iVar5 = *piVar3;
      FUN_140e5278(iVar5 + 0x13c,param_1,param_2);
      uVar6 = *DAT_1409f2d0;
      uVar8 = DAT_1409f2d0[1];
      *(char *)(iVar5 + 0x25c) = (char)DAT_1409f2d0[2];
      *(undefined4 *)(iVar5 + 0x254) = uVar6;
      *(undefined4 *)(iVar5 + 600) = uVar8;
      uVar6 = FUN_140a2edc(0,iVar5 + 0x134,*(undefined4 *)(iVar5 + 300));
      *(undefined4 *)(iVar5 + 0x130) = uVar6;
    }
    puVar4 = DAT_1409f2d8;
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = isIRQinterruptsEnabled();
    }
    if ((uVar7 & 1) == 0) {
      *DAT_1409f2d8 = 0x1409f236;
      puVar4[1] = unaff_lr;
      disableIRQinterrupts();
    }
    uVar9 = DAT_1409f2d4 & 0xffffff;
    iVar5 = FUN_140e53c8(0xc,uVar9,0x1000,0);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1409f2e4,iVar5);
    }
    uVar12 = FUN_140e50a8(0xc,uVar9,*piVar3,0x1000,0);
    param_2 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1409f2e0,(int)uVar12);
    }
    uVar6 = 0;
    if ((uVar7 & 1) == 0) {
      *DAT_1409f2d8 = 0xffffffff;
      enableIRQinterrupts();
      uVar6 = 0;
    }
  }
  if ((*DAT_1409f2b0 ^ uVar10) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar6,param_2,*DAT_1409f2b0 ^ uVar10,0);
}

