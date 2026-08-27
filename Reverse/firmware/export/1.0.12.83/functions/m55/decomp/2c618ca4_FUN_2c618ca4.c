/* FUN_2c618ca4 @ 0x2c618ca4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c618ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  undefined4 uVar15;
  int iVar16;
  uint unaff_r9;
  int iVar17;
  short sVar18;
  undefined4 uStack_7c;
  short sStack_78;
  ushort uStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  ushort uStack_6e;
  short sStack_6c;
  short sStack_6a;
  uint auStack_68 [15];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c618f9c;
  iVar6 = FUN_2c602110(_LAB_2c618fa0,param_2,param_3,0);
  if (iVar6 != 1) goto LAB_2c618cc0;
  uVar7 = FUN_2c602408(param_2);
  iVar6 = FUN_2c602400(param_2);
  if (((uVar7 & 0xfd) == 1) || (uVar7 == 8)) {
    if (*_LAB_2c618f9c == iStack_2c) {
      iVar10 = *_LAB_2c618c90;
      iVar13 = func_0x2c618be4();
      iVar16 = *(int *)(iVar6 + iVar13 * 4 + 0x24);
      if (iVar16 == 0) {
        iVar13 = func_0x2c618b88(iVar6,iVar13);
        iVar16 = *(int *)(iVar6 + iVar13 * 4 + 0x24);
        if (iVar16 == 0) goto LAB_2c618c44;
      }
      iVar13 = FUN_2c612838(iVar16,&stack0xfffffff0);
      if (iVar13 == 1) {
        *(byte *)(iVar6 + 0x6c) = (byte)((unaff_r9 << 0x1b) >> 0x1b);
        FUN_2c607588(iVar6);
        FUN_2c60710c(iVar6,unaff_r9 >> 0x15);
      }
      else {
        *(undefined1 *)(iVar6 + 0x6c) = 0;
      }
      FUN_2c607df0(iVar6);
LAB_2c618c44:
      if (*_LAB_2c618c90 != iVar10) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    goto LAB_2c618f98;
  }
  if (uVar7 == 0x15) {
    iVar6 = FUN_2c602400(param_2);
    iVar13 = FUN_2c602608(param_2);
    iVar10 = func_0x2c618be4(iVar6);
    if (*(int *)(iVar6 + iVar10 * 4 + 0x24) == 0) {
      iVar10 = func_0x2c618b88(iVar6,iVar10);
    }
    iVar16 = iVar6 + iVar10 * 4;
    iVar17 = *(int *)(iVar16 + 0x3c);
    sVar4 = FUN_2c6033b4(iVar6,0,0x68);
    sVar5 = FUN_2c6033b4(iVar6,0,0x69);
    iVar10 = (int)*(short *)(iVar6 + 0x1a);
    uVar1 = *(short *)(iVar6 + 0x16) - sVar5;
    uVar7 = (uint)uVar1;
    sVar3 = *(short *)(iVar6 + 0x14) - sVar4;
    sVar4 = sVar4 + *(short *)(iVar6 + 0x18);
    FUN_2c614a0c(auStack_68);
    FUN_2c6008ac(iVar6,0,auStack_68);
    sVar14 = 0;
    if (iVar17 != 0) {
      FUN_2c612838(iVar17,&uStack_7c);
      sStack_72 = ((uStack_7c._2_2_ >> 5) - 1) + (short)uVar7;
      sVar14 = (short)((uStack_7c & 0x1fffff) >> 10);
      sStack_74 = ((ushort)((uStack_7c << 0xb) >> 0x15) - 1) + sVar3;
      sStack_78 = sVar3;
      uStack_76 = uVar1;
      FUN_2c614a3c(iVar13,auStack_68,&sStack_78,iVar17,uVar7,iVar10);
    }
    iVar6 = *(int *)(iVar16 + 0x54);
    sVar12 = 0;
    if (iVar6 != 0) {
      FUN_2c612838(iVar6,&uStack_7c);
      sStack_72 = ((uStack_7c._2_2_ >> 5) - 1) + (short)uVar7;
      sVar12 = (short)((uStack_7c & 0x1fffff) >> 10);
      sStack_78 = (1 - (ushort)((uStack_7c << 0xb) >> 0x15)) + sVar4;
      uStack_76 = uVar1;
      sStack_74 = sVar4;
      FUN_2c614a3c(iVar13,auStack_68,&sStack_78,iVar6,uVar7,iVar10);
    }
    sVar18 = (short)uVar7;
    iVar6 = *(int *)(iVar16 + 0x24);
    if (iVar6 != 0) {
      sStack_6c = sVar4 - sVar12;
      sVar14 = sVar14 + sVar3;
      sStack_6a = sVar5 + (short)iVar10;
      sStack_70 = sVar14;
      uStack_6e = uVar1;
      iVar10 = FUN_2c62a6b4(&sStack_70,&sStack_70,*(undefined4 *)(iVar13 + 8));
      if (iVar10 != 0) {
        FUN_2c612838(iVar6,&uStack_7c);
        uVar15 = *(undefined4 *)(iVar13 + 8);
        sStack_72 = sVar18 + ((uStack_7c._2_2_ >> 5) - 1);
        uVar2 = (ushort)((uStack_7c << 0xb) >> 0x10);
        sStack_74 = ((uVar2 >> 5) - 1) + sVar14;
        *(short **)(iVar13 + 8) = &sStack_70;
        sStack_78 = sVar14;
        uStack_76 = uVar1;
        if (sVar14 < (short)(sStack_6c + (uVar2 >> 5) + -1)) {
          do {
            FUN_2c614a3c(iVar13,auStack_68,&sStack_78,iVar6);
            uVar1 = (ushort)((uStack_7c << 0xb) >> 0x10);
            sVar14 = sVar14 + (uVar1 >> 5);
            sVar4 = (short)((uStack_7c & 0x1fffff) >> 10) + sStack_74;
            sStack_78 = sStack_74 + 1;
            sStack_74 = sVar4;
          } while (sVar14 < (short)(sStack_6c + (uVar1 >> 5) + -1));
        }
        *(undefined4 *)(iVar13 + 8) = uVar15;
      }
    }
  }
  else if (uVar7 == 0x12) {
    pcVar11 = (char *)FUN_2c602410(param_2);
    if (*pcVar11 != '\x02') {
      *pcVar11 = '\x01';
    }
  }
  else if (uVar7 == 0x2c) {
    psVar8 = (short *)func_0x2c602650(param_2);
    uVar9 = func_0x2c618be4(iVar6);
    uVar7 = uVar9;
    if (*(int *)(iVar6 + uVar9 * 4 + 0x24) == 0) {
      switch(uVar9) {
      case 1:
        uVar9 = (uint)(*(int *)(iVar6 + 0x24) == 0);
        break;
      case 2:
      case 3:
        if (*(int *)(iVar6 + 0x24) != 0) {
          uVar7 = 0;
          goto LAB_2c618d1e;
        }
        break;
      case 4:
        if (*(int *)(iVar6 + 0x30) == 0) {
          if (*(int *)(iVar6 + 0x28) == 0) goto LAB_2c618f8a;
          uVar7 = 1;
        }
        else {
LAB_2c618f94:
          uVar7 = 3;
        }
        goto LAB_2c618d1e;
      case 5:
        if (*(int *)(iVar6 + 0x30) != 0) goto LAB_2c618f94;
LAB_2c618f8a:
        uVar7 = 0;
        if (*(int *)(iVar6 + 0x24) != 0) goto LAB_2c618d1e;
      }
      iVar13 = iVar6 + uVar9 * 4;
      if ((*(int *)(iVar13 + 0x3c) == 0) && (iVar13 = *(int *)(iVar13 + 0x24), iVar13 != 0)) {
LAB_2c618d2a:
        if (*(int *)(iVar6 + uVar9 * 4 + 0x54) == 0) {
          FUN_2c612838(iVar13,auStack_68);
          uVar7 = (auStack_68[0] & 0x1fffff) >> 10;
          if ((int)uVar7 < (int)*psVar8) {
            uVar7 = (int)*psVar8;
          }
          *psVar8 = (short)uVar7;
        }
      }
    }
    else {
LAB_2c618d1e:
      iVar13 = iVar6 + uVar7 * 4;
      if (*(int *)(iVar13 + 0x3c) == 0) {
        iVar13 = *(int *)(iVar13 + 0x24);
        uVar9 = uVar7;
        goto LAB_2c618d2a;
      }
    }
  }
LAB_2c618cc0:
  if (*_LAB_2c618f9c == iStack_2c) {
    return;
  }
LAB_2c618f98:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

