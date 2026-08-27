/* FUN_2c64c3a6 @ 0x2c64c3a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64c3a6(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_r2;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar16;
  bool bVar17;
  uint uStack_48;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 *puStack_20;
  int iStack_1c;
  
  if (in_ZR || in_NG != in_OV) {
LAB_2c64c3ac:
    FUN_2c648600(_DAT_2c64c490);
    FUN_2c648600(_LAB_2c64c494);
    uVar8 = _LAB_2c64c498;
  }
  else {
    uVar9 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
    uVar11 = (uint)((ulonglong)_LAB_2c64c49c * (ulonglong)uVar9 >> 0x23);
    uVar8 = _LAB_2c64c4a4;
    if ((uVar9 + uVar11 * -10 < 8) &&
       (uStack_48 = (uVar9 & 7) + uVar11 * 8, uVar8 = _DAT_2c64c4a8, uStack_48 < 0x51)) {
      pcVar12 = *(char **)(param_2 + 4);
      bVar1 = (byte)uStack_48;
      if ((*pcVar12 == 's') && ((pcVar12[1] == 'e' && (pcVar12[2] == 't')))) {
        if (param_1 == 3) {
          iVar6 = 0x14;
          uVar8 = 0x73;
        }
        else {
          iVar6 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
          uVar8 = extraout_r2;
        }
        uVar9 = uStack_48 & 0xff;
        uVar13 = iVar6 * 2;
        iStack_2c = *_LAB_2c64c1a4;
        uStack_30 = CONCAT31((int3)((uint)*_LAB_2c64c1a0 >> 8),bVar1);
        FUN_2c673bc8(&uStack_30,1,uVar8,0);
        FUN_2c4c0248(uVar9,1,0);
        uVar3 = _LAB_2c64c1b8;
        uVar2 = _LAB_2c64c1b4;
        uVar8 = _LAB_2c64c1b0;
        uVar11 = (uint)(bVar1 >> 3);
        if (uVar13 != 0) {
          uVar14 = 1;
          iStack_38 = uVar11 << 2;
          bVar17 = true;
          uStack_34 = uVar13 + 1;
          do {
            uVar15 = uVar14;
            if (bVar17) {
              FUN_2c4c0158(uVar9);
              cVar5 = FUN_2c4c02f4(uVar9);
              uVar10 = uVar2;
              if (cVar5 != '\x01') break;
            }
            else {
              FUN_2c4c01d0();
              cVar5 = FUN_2c4c02f4(uVar9);
              uVar10 = uVar8;
              if (cVar5 != '\0') break;
            }
            bVar17 = (bool)(bVar17 ^ 1);
            FUN_2c648600(uVar3,uVar14,(uStack_48 & 7) + uVar11 * 10,uVar10);
            FUN_2c6444fc(1000);
            bVar16 = uVar14 != uVar13;
            uVar14 = uVar14 + 1;
            uVar15 = uStack_34;
          } while (bVar16);
          if (uVar15 < uVar13) {
            uVar8 = FUN_2c648600(_LAB_2c64c1a8,(uStack_48 & 7) + (iStack_38 + uVar11) * 2);
            goto LAB_2c64c16c;
          }
        }
        uStack_48 = uStack_48 & 7;
        uVar8 = FUN_2c648600(_LAB_2c64c1ac,uStack_48 + uVar11 * 10);
LAB_2c64c16c:
        if (*_LAB_2c64c1a4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return uVar8;
      }
      if (((*pcVar12 != 'i') || (pcVar12[1] != 'r')) || (pcVar12[2] != 'q')) goto LAB_2c64c3ac;
      if (param_1 == 3) {
        iStack_1c = 2;
        iVar6 = 0x14;
      }
      else {
        pcVar12 = *(char **)(param_2 + 0xc);
        iVar6 = FUN_2c66c540(pcVar12,_LAB_2c64c4a0,4);
        if (iVar6 == 0) {
          iStack_1c = 1;
        }
        else {
          if (((*pcVar12 != 'l') || (pcVar12[1] != 'o')) || (pcVar12[2] != 'w')) goto LAB_2c64c3ac;
          iStack_1c = 2;
        }
        if (param_1 == 4) {
          iVar6 = 0x14;
        }
        else {
          iVar6 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
        }
      }
      uVar9 = uStack_48 & 0xff;
      uVar11 = 1;
      iStack_2c = *_LAB_2c64c370;
      uVar13 = iVar6 * 2;
      if (iStack_1c == 1) {
        uStack_30._0_3_ = (uint3)CONCAT11(1,bVar1);
        uStack_30 = CONCAT13(2,(uint3)uStack_30);
        FUN_2c673bc8(&uStack_30);
        FUN_2c4c0248(uVar9,0,0);
        piVar4 = _DAT_2c64c378;
        iVar6 = (uStack_48 & 7) + (uint)(bVar1 >> 3) * 10;
        FUN_2c648600(_LAB_2c64c38c,iVar6);
        iStack_38 = _LAB_2c64c390;
        uStack_34 = _LAB_2c64c37c;
        *piVar4 = 0;
        FUN_2c4c0370(uVar9,&iStack_38);
        if (uVar13 == 0) {
          iStack_38 = _LAB_2c64c394;
          uStack_34 = uVar13;
          FUN_2c4c0370(uVar9,&iStack_38);
          uVar8 = _LAB_2c64c39c;
          if (*piVar4 != 0) goto LAB_2c64c362;
        }
        else {
          uVar11 = 1;
          do {
            uVar14 = uVar11;
            if (*piVar4 != 0) break;
            FUN_2c6444fc(500);
            bVar17 = uVar13 != uVar11;
            uVar11 = uVar11 + 1;
            uVar14 = uVar13 + 1;
          } while (bVar17);
          iStack_38 = _LAB_2c64c394;
          uStack_34 = 0;
          FUN_2c4c0370(uVar9,&iStack_38);
          if (*piVar4 != 0) {
LAB_2c64c362:
            uVar8 = FUN_2c648600(_LAB_2c64c3a0,iVar6);
            goto LAB_2c64c278;
          }
          uVar8 = _LAB_2c64c39c;
          if (uVar14 < uVar13) {
            uVar8 = _LAB_2c64c380;
          }
        }
        uVar8 = FUN_2c648600(_LAB_2c64c398,iVar6,uVar8);
        goto LAB_2c64c278;
      }
      uStack_30._0_3_ = (uint3)CONCAT11(1,bVar1);
      uStack_30 = CONCAT13(1,(uint3)uStack_30);
      FUN_2c673bc8(&uStack_30,1,iVar6,0);
      FUN_2c4c0248(uVar9,0,1);
      piVar4 = _DAT_2c64c378;
      iVar6 = (uStack_48 & 7) + (uint)(bVar1 >> 3) * 10;
      FUN_2c648600(_LAB_2c64c374,iVar6);
      uStack_34 = _LAB_2c64c37c;
      *piVar4 = 0;
      iStack_38 = 0x101;
      FUN_2c4c0370(uVar9,&iStack_38);
      if (uVar13 == 0) {
        iStack_38 = 0x100;
        uStack_34 = uVar13;
        FUN_2c4c0370(uVar9,&iStack_38);
        uVar8 = _LAB_2c64c39c;
        if (*piVar4 != 0) goto LAB_2c64c2a4;
      }
      else {
        do {
          uVar14 = uVar11;
          if (*piVar4 != 0) break;
          FUN_2c6444fc(500);
          bVar17 = uVar13 != uVar11;
          uVar11 = uVar11 + 1;
          uVar14 = uVar13 + 1;
        } while (bVar17);
        uStack_34 = 0;
        iStack_38 = 0x100;
        FUN_2c4c0370(uVar9,&iStack_38);
        if (*piVar4 != 0) {
LAB_2c64c2a4:
          uVar8 = FUN_2c648600(_LAB_2c64c388,iVar6);
          goto LAB_2c64c278;
        }
        uVar8 = _LAB_2c64c39c;
        if (uVar14 < uVar13) {
          uVar8 = _LAB_2c64c380;
        }
      }
      uVar8 = FUN_2c648600(_LAB_2c64c384,iVar6,uVar8);
LAB_2c64c278:
      if (*_LAB_2c64c370 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return uVar8;
    }
  }
  iStack_1c = *DAT_2c648674;
  puStack_20 = &stack0xfffffff4;
  iVar6 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar8);
  if (-1 < iVar6) {
    if (iVar6 < 0x7ff) {
      if (iVar6 == 0) goto LAB_2c648630;
    }
    else {
      iVar6 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar7 = (code *)FUN_2c648328();
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(_LAB_2c648678,iVar6);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar6);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

