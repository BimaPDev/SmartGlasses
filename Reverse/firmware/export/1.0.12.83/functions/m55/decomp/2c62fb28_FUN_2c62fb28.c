/* FUN_2c62fb28 @ 0x2c62fb28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62fb28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  short sStack_120;
  short sStack_11e;
  short sStack_11c;
  short sStack_11a;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 auStack_d4 [88];
  undefined1 auStack_7c [88];
  int iStack_24;
  
  iStack_24 = *_LAB_2c62fe1c;
  iVar8 = FUN_2c602110(_LAB_2c62fe20,param_2,param_3,0);
  if (iVar8 == 1) {
    iVar8 = FUN_2c602408(param_2);
    iVar9 = FUN_2c602400(param_2);
    if (iVar8 == 0x13) {
      sVar2 = FUN_2c6033b4(iVar9,0x30000,0x12);
      sVar3 = FUN_2c6033b4(iVar9,0x30000,0x13);
      sVar4 = FUN_2c6033b4(iVar9,0x30000,0x10);
      sVar5 = FUN_2c6033b4(iVar9,0x30000,0x11);
      sVar6 = FUN_2c600ac0(iVar9,0x30000);
      if (sVar2 < sVar3) {
        sVar2 = sVar3;
      }
      if (sVar2 < sVar4) {
        sVar2 = sVar4;
      }
      if (sVar2 < sVar5) {
        sVar2 = sVar5;
      }
      psVar11 = (short *)FUN_2c602410(param_2);
      iVar8 = (int)(short)(sVar2 + 2 + sVar6);
      if (iVar8 < *psVar11) {
        iVar8 = (int)*psVar11;
      }
      *psVar11 = (short)iVar8;
      iVar12 = FUN_2c600ac0(iVar9,0x20000);
      if (iVar12 < iVar8) {
        sVar2 = *psVar11;
      }
      else {
        sVar2 = FUN_2c600ac0(iVar9,0x20000);
      }
      *psVar11 = sVar2;
    }
    else {
      if (iVar8 == 0x1c) {
        iVar8 = FUN_2c6033b4(iVar9,0,100);
        if (iVar8 != 0) {
          uStack_f0 = FUN_2c606bb0(iVar9);
          uStack_f8 = *(uint *)(iVar9 + 0x24);
          uStack_f0 = uStack_f0 & 1;
          if (uStack_f8 == 0xffffffff) {
            uStack_f8 = 0x100;
            uVar13 = uStack_f8;
            if (uStack_f0 != 0) {
              uStack_f0 = uStack_f8;
              uStack_f8 = 0;
              uVar13 = 0x100;
            }
          }
          else if (uStack_f0 == 0) {
            uVar13 = (uStack_f8 ^ (int)uStack_f8 >> 0x1f) - ((int)uStack_f8 >> 0x1f);
          }
          else {
            uVar13 = uStack_f8 - 0x100;
            uStack_f0 = 0x100;
            if ((int)uVar13 < 0) {
              uVar13 = -uVar13;
            }
          }
          FUN_2c62e838(iVar9,0);
          FUN_2c62e7b4(&uStack_118);
          uStack_ec = uVar13 * iVar8 >> 8;
          uStack_10c = _DAT_2c62fe24;
          uStack_114 = _DAT_2c62fe28;
          uStack_118 = iVar9;
          uStack_f4 = uStack_f8;
          FUN_2c62e8ec(&uStack_118);
        }
        if (*_LAB_2c62fe1c == iStack_24) {
          iVar8 = *DAT_2c607e4c;
          FUN_2c600c2c();
          FUN_2c6078f0(iVar9,&stack0xffffffec);
          if (*DAT_2c607e4c != iVar8) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
        goto LAB_2c62fe16;
      }
      if (iVar8 == 0x15) {
        iVar8 = FUN_2c602400(param_2);
        uVar10 = FUN_2c602608(param_2);
        sVar2 = FUN_2c6033b4(iVar8,0,0x12);
        sVar3 = FUN_2c6033b4(iVar8,0,0x13);
        sVar4 = FUN_2c6033b4(iVar8,0,0x10);
        sStack_11a = FUN_2c6033b4(iVar8,0,0x11);
        sStack_120 = sVar2 + *(short *)(iVar8 + 0x14);
        sStack_11e = *(short *)(iVar8 + 0x16) + sVar4;
        sStack_11a = *(short *)(iVar8 + 0x1a) - sStack_11a;
        sStack_11c = *(short *)(iVar8 + 0x18) - sVar3;
        FUN_2c61314c(auStack_d4);
        FUN_2c6004cc(iVar8,0x20000,auStack_d4);
        FUN_2c61319c(uVar10,auStack_d4,&sStack_120);
        sVar3 = FUN_2c6073f8(iVar8);
        sVar2 = ((*(short *)(iVar8 + 0x18) - sVar3) + 1) - *(short *)(iVar8 + 0x14);
        if (*(int *)(iVar8 + 0x24) == -1) {
          uVar7 = FUN_2c606bb0(iVar8);
          uStack_118._0_2_ = 0;
          if ((uVar7 & 1) != 0) {
            uStack_118._0_2_ = sVar2;
          }
        }
        else {
          iVar9 = *(int *)(iVar8 + 0x24) * (int)sVar2;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 0xff;
          }
          uStack_118._0_2_ = (short)((uint)iVar9 >> 8);
        }
        cVar1 = FUN_2c6033b4(iVar8,0,0x16);
        if (cVar1 == '\x01') {
          uStack_118._0_2_ = sVar2 - (short)uStack_118;
        }
        uStack_118._0_2_ = (short)uStack_118 + *(short *)(iVar8 + 0x14);
        uStack_114._0_2_ = sVar3 + (short)uStack_118;
        uStack_118._2_2_ = *(short *)(iVar8 + 0x16);
        uStack_114._2_2_ = *(short *)(iVar8 + 0x1a);
        sVar2 = FUN_2c6033b4(iVar8,0x30000,0x12);
        sVar3 = FUN_2c6033b4(iVar8,0x30000,0x13);
        sVar4 = FUN_2c6033b4(iVar8,0x30000,0x10);
        sVar5 = FUN_2c6033b4(iVar8,0x30000,0x11);
        uStack_118 = CONCAT22(uStack_118._2_2_ - sVar4,(short)uStack_118 - sVar2);
        uStack_114 = CONCAT22(sVar5 + uStack_114._2_2_,sVar3 + (short)uStack_114);
        FUN_2c61314c(auStack_7c);
        FUN_2c6004cc(iVar8,0x30000,auStack_7c);
        FUN_2c61319c(uVar10,auStack_7c,&uStack_118);
      }
    }
  }
  if (*_LAB_2c62fe1c == iStack_24) {
    return;
  }
LAB_2c62fe16:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

