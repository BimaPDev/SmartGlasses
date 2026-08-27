/* FUN_2c636038 @ 0x2c636038 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c636038(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  short *psVar16;
  short sStack_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
  short sStack_fc;
  short sStack_fa;
  short sStack_f8;
  short sStack_f6;
  undefined1 auStack_f4 [40];
  short sStack_cc;
  short sStack_ca;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  short *psStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_98;
  undefined1 auStack_84 [88];
  int iStack_2c;
  
  uVar2 = _LAB_2c636340;
  iStack_2c = *_LAB_2c636344;
  iVar13 = FUN_2c602110(_LAB_2c636340,param_2,param_3,0);
  if (iVar13 == 1) {
    iVar13 = FUN_2c602408(param_2);
    iVar14 = FUN_2c602400(param_2);
    if (iVar13 == 0x2c) {
      psVar16 = (short *)FUN_2c602410(param_2);
      iVar13 = FUN_2c6033b4(iVar14,0,0x57);
      sVar1 = *(short *)(iVar13 + 8);
      sVar5 = FUN_2c6033b4(iVar14,0,0x59);
      sVar9 = FUN_2c6033b4(iVar14,0,0x58);
      FUN_2c62b954(&sStack_cc,*(undefined4 *)(iVar14 + 0x24),iVar13,(int)sVar9,(int)sVar5,0x1fff,0);
      sVar9 = FUN_2c6033b4(iVar14,0,0x15);
      sVar3 = FUN_2c6033b4(iVar14,0x20000,0x12);
      sVar4 = FUN_2c6033b4(iVar14,0x20000,0x13);
      sVar5 = FUN_2c6033b4(iVar14,0x20000,0x10);
      sVar6 = FUN_2c6033b4(iVar14,0x20000,0x11);
      sVar5 = sVar5 + sVar6 + sVar1;
      *psVar16 = sVar1 + sVar9 + sVar3 + sVar4 + sStack_cc;
      if (sVar5 < sStack_ca) {
        sVar5 = sStack_ca;
      }
      psVar16[1] = sVar5;
    }
    else if (iVar13 == 0x13) {
      psVar16 = (short *)FUN_2c602410(param_2);
      iVar13 = FUN_2c600ac0(iVar14,0x20000);
      if (iVar13 < *psVar16) {
        iVar13 = (int)*psVar16;
      }
      *psVar16 = (short)iVar13;
    }
    else if (iVar13 == 0x15) {
      iVar13 = FUN_2c602400(param_2);
      uVar15 = FUN_2c602608(param_2);
      iVar14 = FUN_2c6033b4(iVar13,0,0x57);
      sVar1 = *(short *)(iVar14 + 8);
      sVar3 = FUN_2c6033b4(iVar13,0,0x32);
      sVar4 = FUN_2c6033b4(iVar13,0,0x10);
      sVar5 = FUN_2c6033b4(iVar13,0,0x12);
      sVar6 = FUN_2c6033b4(iVar13,0,0x15);
      sVar7 = FUN_2c6033b4(iVar13,0x20000,0x12);
      sVar8 = FUN_2c6033b4(iVar13,0x20000,0x13);
      sVar9 = FUN_2c6033b4(iVar13,0x20000,0x10);
      sVar10 = FUN_2c6033b4(iVar13,0x20000,0x11);
      sVar11 = FUN_2c6033b4(iVar13,0x20000,0x68);
      sVar12 = FUN_2c6033b4(iVar13,0x20000,0x69);
      FUN_2c61314c(auStack_84);
      FUN_2c6004cc(iVar13,0x20000,auStack_84);
      sStack_104 = *(short *)(iVar13 + 0x14) + sVar5 + sVar3;
      sVar9 = sVar1 + sVar9 + sVar10 + -1;
      sVar5 = sVar1 + sVar7 + sVar8 + -1 + sStack_104;
      sStack_104 = sStack_104 - sVar11;
      sStack_100 = sVar5 + sVar11;
      sStack_fe = *(short *)(iVar13 + 0x16) + sVar4 + sVar3;
      sStack_102 = sStack_fe - sVar12;
      sStack_fe = sStack_fe + sVar12 + sVar9;
      FUN_2c600b9c(&sStack_cc,uVar15);
      uStack_c8 = uVar2;
      uStack_98 = 0x20000;
      uStack_c4 = 0;
      psStack_c0 = &sStack_104;
      puStack_bc = auStack_84;
      FUN_2c602340(iVar13,0x1a,&sStack_cc);
      FUN_2c61319c(uVar15,auStack_84,&sStack_104);
      FUN_2c602340(iVar13,0x1b,&sStack_cc);
      sVar7 = FUN_2c6033b4(iVar13,0,0x59);
      sVar8 = FUN_2c6033b4(iVar13,0,0x58);
      FUN_2c62b954(&sStack_108,*(undefined4 *)(iVar13 + 0x24),iVar14,(int)sVar8,(int)sVar7,0x1fff,0)
      ;
      FUN_2c6129e4(auStack_f4);
      FUN_2c6007ec(iVar13,0,auStack_f4);
      sStack_fc = sVar5 + sVar6;
      sStack_f8 = sStack_fc + sStack_108;
      iVar14 = (int)(short)(sVar9 + 1) - (int)sVar1;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 1;
      }
      sStack_fa = *(short *)(iVar13 + 0x16) + sVar4 + sVar3 + (short)(iVar14 >> 1);
      sStack_f6 = sStack_106 + sStack_fa;
      FUN_2c612a20(uVar15,auStack_f4,&sStack_fc,*(undefined4 *)(iVar13 + 0x24),0);
    }
  }
  if (*_LAB_2c636344 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

