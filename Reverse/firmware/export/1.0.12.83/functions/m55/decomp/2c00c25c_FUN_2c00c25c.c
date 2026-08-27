/* FUN_2c00c25c @ 0x2c00c25c */

/* WARNING: Removing unreachable block (ram,0x2c00af44) */
/* WARNING: Removing unreachable block (ram,0x2c00afae) */
/* WARNING: Removing unreachable block (ram,0x2c00af54) */
/* WARNING: Removing unreachable block (ram,0x2c00af82) */
/* WARNING: Removing unreachable block (ram,0x2c00af34) */
/* WARNING: Removing unreachable block (ram,0x2c00c39e) */
/* WARNING: Removing unreachable block (ram,0x2c00c3ae) */
/* WARNING: Removing unreachable block (ram,0x2c00c3e2) */
/* WARNING: Removing unreachable block (ram,0x2c00c36e) */

void FUN_2c00c25c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined1 *puVar10;
  undefined4 extraout_r1_00;
  undefined4 uVar11;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 unaff_r4;
  undefined4 uVar14;
  undefined4 unaff_r5;
  int iVar15;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 auStack_b8 [48];
  undefined4 uStack_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  puVar3 = puRam2c00c2b0;
  puVar8 = puRam2c00c2b0 + 1;
  *puRam2c00c2b0 = param_1;
  *puVar8 = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  puVar3[4] = unaff_r4;
  puVar3[5] = unaff_r5;
  puVar3[6] = unaff_r6;
  puVar3[7] = unaff_r7;
  puVar3[8] = unaff_r8;
  puVar3[9] = unaff_r9;
  puVar3[10] = unaff_r10;
  puVar3[0xb] = unaff_r11;
  puVar3[0xc] = in_r12;
  puVar3[0xd] = register0x00000054;
  puVar3[0xe] = unaff_lr;
  isThreadModePrivileged();
  cVar2 = isUsingMainStack();
  if (cVar2 == '\x01') {
    puVar12 = (undefined1 *)getProcessStackPointer();
    puVar10 = (undefined1 *)register0x00000054;
  }
  else {
    puVar10 = (undefined1 *)getMainStackPointer();
    puVar12 = (undefined1 *)register0x00000054;
  }
  puVar3[0xf] = puVar10;
  puVar3[0x10] = puVar12;
  local_80 = param_1;
  local_7c = param_2;
  uStack_78 = param_3;
  uStack_74 = param_4;
  FUN_2c00c094(param_1,param_2,param_3,param_4);
  puVar6 = DAT_2c00c3fc;
  puVar8 = DAT_2c00c3f8;
  pbVar4 = DAT_2c00c3f0;
  puVar3 = DAT_2c00afb8;
  local_84 = *DAT_2c00c3ec;
  if (*DAT_2c00c3f0 < 4) {
    uVar13 = *DAT_2c00c3ec ^ local_84;
    uVar9 = extraout_r1_00;
    if (uVar13 == 0) {
      uStack_88 = 0;
      iVar15 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar15 = getBasePriority();
      }
      uVar9 = 0;
      if (iVar15 != 0x40) {
        uVar9 = 0x2c00aeee;
        *DAT_2c00afb8 = 0x2c00aeee;
        puVar3[1] = 0x2c00c2af;
      }
      pbVar4 = DAT_2c00afbc;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      uVar13 = (uint)*DAT_2c00afbc;
      uVar11 = extraout_r1_00;
      if (uVar13 < 4) {
        if (uVar13 == 0) {
          uVar14 = 0;
        }
        else {
          if (uVar13 - 2 < 2) {
            if (*DAT_2c00afcc != -1) {
              FUN_2c013d1c();
            }
            FUN_2c013bcc(*DAT_2c00afc0);
            uVar11 = extraout_r1;
            uVar9 = extraout_r2;
          }
          iVar5 = DAT_2c00afd0;
          *pbVar4 = 0;
          uVar14 = 0;
          *(undefined1 *)(iVar5 + 6) = 0;
        }
      }
      else {
        uVar14 = 1;
      }
      if (iVar15 == 0) {
        uVar9 = 0xffffffff;
        *DAT_2c00afb8 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x2c00af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x2c00c2af)(uVar14,uVar11,uVar9,uStack_88);
      return;
    }
  }
  else {
    uVar9 = *DAT_2c00c3f4;
    uVar11 = DAT_2c00c3f4[1];
    *(undefined2 *)(DAT_2c00c3fc + 2) = 0;
    *puVar8 = uVar9;
    *(short *)(puVar8 + 1) = (short)uVar11;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar3 = DAT_2c00c400;
    *pbVar4 = 0;
    uVar9 = DAT_2c00c410;
    pcVar7 = DAT_2c00c40c;
    puVar10 = DAT_2c00c404;
    *DAT_2c00c408 = 0;
    *puVar3 = 0xffffffff;
    puVar3[1] = 0xffffffff;
    *puVar10 = 4;
    FUN_2c013b2c(uVar9);
    if ((*pcVar7 != '\0') && (FUN_2c00acfc(DAT_2c00c414,1), *pcVar7 != '\0')) {
      FUN_2c00acfc(DAT_2c00c414,1);
      uVar9 = FUN_2c013b1c(DAT_2c00c418);
      if ((*pcVar7 != '\0') && (FUN_2c00acfc(DAT_2c00c418,uVar9), *pcVar7 != '\0')) {
        FUN_2c00acfc(DAT_2c00c414,1);
      }
    }
    uVar9 = FUN_2c01384c();
    uVar9 = FUN_2c00b47c(auStack_b8,0x32,DAT_2c00c41c,uVar9);
    if (*pcVar7 != '\0') {
      FUN_2c00acfc(auStack_b8,uVar9);
      uVar9 = extraout_r1_01;
    }
    uVar13 = *DAT_2c00c3ec ^ local_84;
    if (uVar13 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c00c380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x2c00c2af)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(0,uVar9,uVar13,0);
}

