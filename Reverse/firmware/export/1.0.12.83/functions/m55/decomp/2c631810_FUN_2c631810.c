/* FUN_2c631810 @ 0x2c631810 */

void FUN_2c631810(undefined4 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  int iVar19;
  short sVar20;
  int iVar21;
  uint uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short local_88;
  short local_86;
  int local_84;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  undefined1 local_60;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  byte local_30;
  undefined1 local_2f;
  int local_2c;
  
  local_2c = *DAT_2c631b30;
  iVar12 = FUN_2c602408();
  iVar13 = FUN_2c602400(param_1);
  if (iVar12 == 0x12) {
    pcVar17 = (char *)FUN_2c602410(param_1);
    if (*pcVar17 != '\x02') {
      if ((-1 < (int)((uint)*(byte *)(iVar13 + 0x5a) << 0x1e)) &&
         ((((uVar22 = *(byte *)(iVar13 + 0x5a) & 0x7c, uVar22 == 0x10 || (uVar22 == 4)) &&
           (cVar6 = FUN_2c6033b4(iVar13,0,0x46), cVar6 == -1)) && (*(short *)(iVar13 + 0x30) == 0)))
         ) {
        uVar14 = FUN_2c602410(param_1);
        if (*(short *)(iVar13 + 0x36) == 0x100) {
          iVar12 = FUN_2c62a998(uVar14,iVar13 + 0x14,0);
        }
        else {
          uVar15 = FUN_2c6073ec(iVar13);
          uVar18 = FUN_2c6073f8(iVar13);
          FUN_2c611f58(&local_68,uVar15,uVar18,0,*(undefined2 *)(iVar13 + 0x36),iVar13 + 0x32,
                       *(undefined1 *)(iVar13 + 0x5c));
          local_68 = local_68 + *(short *)(iVar13 + 0x14);
          local_66 = local_66 + *(short *)(iVar13 + 0x16);
          local_64 = *(short *)(iVar13 + 0x14) + local_64;
          local_62 = *(short *)(iVar13 + 0x16) + local_62;
          iVar12 = FUN_2c62a998(uVar14,&local_68,0);
        }
        if (iVar12 != 0) goto LAB_2c63183e;
      }
      *pcVar17 = '\x01';
    }
  }
  else if ((iVar12 == 0x15) || (iVar12 == 0x18)) {
    uVar14 = FUN_2c6073ec(iVar13);
    uVar15 = FUN_2c6073f8(iVar13);
    sVar7 = FUN_2c6033b4(iVar13,0,0x32);
    sVar8 = FUN_2c6033b4(iVar13,0,0x12);
    sVar8 = sVar8 + sVar7;
    sVar9 = FUN_2c6033b4(iVar13,0,0x13);
    sVar10 = FUN_2c6033b4(iVar13,0,0x10);
    sVar10 = sVar10 + sVar7;
    sVar11 = FUN_2c6033b4(iVar13,0,0x11);
    local_88 = *(short *)(iVar13 + 0x32) + sVar8;
    local_86 = *(short *)(iVar13 + 0x34) + sVar10;
    if ((*(byte *)(iVar13 + 0x5b) & 3) == 1) {
      FUN_2c607338(iVar13,&local_80);
      sVar25 = *(short *)(iVar13 + 0x14);
      sVar24 = *(short *)(iVar13 + 0x16);
    }
    else {
      FUN_2c611f58(&local_80,uVar14,uVar15,(int)*(short *)(iVar13 + 0x30),
                   *(undefined2 *)(iVar13 + 0x36),&local_88,*(undefined1 *)(iVar13 + 0x5c));
      sVar25 = *(short *)(iVar13 + 0x14);
      sVar24 = *(short *)(iVar13 + 0x16);
      local_80 = local_80 + sVar25;
      local_7c = sVar25 + local_7c;
      local_7e = local_7e + sVar24;
      local_7a = sVar24 + local_7a;
    }
    uVar2 = *(undefined2 *)(iVar13 + 0x18);
    uVar3 = *(undefined2 *)(iVar13 + 0x1a);
    *(short *)(iVar13 + 0x18) = local_7c;
    *(short *)(iVar13 + 0x1a) = local_7a;
    uVar14 = DAT_2c631b34;
    *(short *)(iVar13 + 0x14) = local_80;
    *(short *)(iVar13 + 0x16) = local_7e;
    iVar16 = FUN_2c602110(uVar14,param_1);
    if (iVar16 == 1) {
      *(short *)(iVar13 + 0x14) = sVar25;
      *(short *)(iVar13 + 0x16) = sVar24;
      *(undefined2 *)(iVar13 + 0x18) = uVar2;
      *(undefined2 *)(iVar13 + 0x1a) = uVar3;
      if (((iVar12 == 0x15) && (*(short *)(iVar13 + 0x2e) != 0)) &&
         ((*(short *)(iVar13 + 0x2c) != 0 && (*(short *)(iVar13 + 0x36) != 0)))) {
        iVar12 = FUN_2c602608(param_1);
        sVar24 = *(short *)(iVar13 + 0x18);
        sVar25 = *(short *)(iVar13 + 0x14);
        sVar23 = *(short *)(iVar13 + 0x16);
        sVar4 = *(short *)(iVar13 + 0x1a);
        iVar16 = FUN_2c6312f4(iVar13);
        sVar5 = (short)iVar16;
        if ((*(byte *)(iVar13 + 0x5b) & 3) == 1) {
          iVar19 = (int)*(short *)(iVar13 + 0x2c) - (int)sVar5;
          iVar21 = iVar19 + 1;
          if (iVar21 < 0) {
            iVar21 = iVar19 + 2;
          }
          sVar20 = -(short)(iVar21 >> 1);
          sVar25 = sVar25 + sVar20;
          sVar20 = sVar20 + sVar24;
          iVar19 = (int)*(short *)(iVar13 + 0x2e) - (iVar16 >> 0x10);
          iVar21 = iVar19 + 1;
          if (iVar21 < 0) {
            iVar21 = iVar19 + 2;
          }
          sVar24 = -(short)(iVar21 >> 1);
          sVar23 = sVar23 + sVar24;
          sVar24 = sVar24 + sVar4;
        }
        else {
          sVar20 = (local_7c - local_80) + sVar25;
          sVar24 = (local_7a - local_7e) + sVar23;
        }
        bVar1 = *(byte *)(iVar13 + 0x5a);
        local_84 = iVar16;
        if ((bVar1 & 2) == 0) {
          FUN_2c614a0c(&local_68);
          FUN_2c6008ac(iVar13,bVar1 & 2,&local_68);
          local_66 = *(short *)(iVar13 + 0x36);
          local_68 = *(short *)(iVar13 + 0x30);
          local_64 = *(short *)(iVar13 + 0x32);
          local_62 = *(short *)(iVar13 + 0x34);
          local_30 = local_30 & 0xfe | *(byte *)(iVar13 + 0x5a) >> 7;
          local_60 = *(undefined1 *)(iVar13 + 0x38);
          local_5e = *(undefined4 *)(iVar13 + 0x3a);
          local_5a = *(undefined4 *)(iVar13 + 0x3e);
          local_56 = *(undefined4 *)(iVar13 + 0x42);
          local_52 = *(undefined4 *)(iVar13 + 0x46);
          local_46 = *(undefined4 *)(iVar13 + 0x52);
          local_42 = *(undefined4 *)(iVar13 + 0x56);
          local_78 = local_80 + sVar8;
          local_4e = *(undefined4 *)(iVar13 + 0x4a);
          local_4a = *(undefined4 *)(iVar13 + 0x4e);
          local_2f = *(undefined1 *)(iVar13 + 0x5c);
          local_76 = local_7e + sVar10;
          uVar14 = *(undefined4 *)(iVar12 + 8);
          local_74 = local_7c - (sVar9 + sVar7);
          local_72 = local_7a - (sVar7 + sVar11);
          iVar19 = FUN_2c62a6b4(&local_78);
          if (iVar19 != 0) {
            *(short **)(iVar12 + 8) = &local_78;
            local_6e = *(short *)(iVar13 + 0x2a) + sVar10 + sVar23;
            if ((short)(sVar10 + sVar23) < local_6e) {
              local_6e = local_6e - *(short *)(iVar13 + 0x2e);
            }
            sVar24 = sVar24 - (sVar7 + sVar11);
            local_6a = *(short *)(iVar13 + 0x2e) + local_6e + -1;
            if (local_6e < sVar24) {
              sVar10 = (short)((uint)iVar16 >> 0x10);
              do {
                local_70 = *(short *)(iVar13 + 0x28) + sVar8 + sVar25;
                if ((short)(sVar8 + sVar25) < local_70) {
                  local_70 = local_70 - *(short *)(iVar13 + 0x2c);
                }
                local_6c = local_70 + *(short *)(iVar13 + 0x2c) + -1;
                for (; local_70 < (short)(sVar20 - (sVar9 + sVar7)); local_70 = local_70 + sVar5) {
                  FUN_2c614a3c(iVar12,&local_68,&local_70,*(undefined4 *)(iVar13 + 0x24));
                  local_6c = local_6c + sVar5;
                }
                local_6e = local_6e + sVar10;
                local_6a = local_6a + sVar10;
              } while (local_6e < sVar24);
            }
            *(undefined4 *)(iVar12 + 8) = uVar14;
          }
        }
        else if ((bVar1 & 3) == 2) {
          FUN_2c6129e4(&local_68);
          FUN_2c6007ec(iVar13,0,&local_68);
          FUN_2c612a20(iVar12,&local_68,iVar13 + 0x14,*(undefined4 *)(iVar13 + 0x24),0);
        }
        else {
          FUN_2c614a3c(iVar12,0,iVar13 + 0x14);
        }
      }
    }
  }
LAB_2c63183e:
  if (*DAT_2c631b30 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

