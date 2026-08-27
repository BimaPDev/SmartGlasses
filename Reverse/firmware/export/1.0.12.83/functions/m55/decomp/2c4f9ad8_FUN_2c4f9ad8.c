/* FUN_2c4f9ad8 @ 0x2c4f9ad8 */

void FUN_2c4f9ad8(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *extraout_r1;
  int iVar14;
  uint uVar15;
  undefined4 *extraout_r1_00;
  undefined4 *puVar16;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  uint uVar17;
  char *pcVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  undefined8 uVar22;
  uint local_78;
  char *local_74 [3];
  uint local_68;
  int local_50;
  undefined4 local_4c;
  uint uStack_48;
  int local_44;
  uint local_2c;
  
  local_2c = *DAT_2c4f9db0;
  if ((*(int *)(DAT_2c4f9db4 + 0xc) == 0) && (iVar11 = FUN_2c4fb39c(1), iVar11 != 0)) {
    uVar12 = FUN_2c673c88();
    *(undefined4 *)(DAT_2c4f9db4 + 0xc) = uVar12;
  }
  if ((*(int *)(DAT_2c4f9db4 + 0x14) == 0) && (iVar11 = FUN_2c4fb39c(1), iVar11 != 0)) {
    uVar12 = FUN_2c673c88();
    pcVar21 = DAT_2c4f9db4;
    *(undefined4 *)(DAT_2c4f9db4 + 0x14) = uVar12;
    pcVar21[1] = '\x01';
  }
  puVar5 = DAT_2c4f9e00;
  puVar2 = DAT_2c4f9dbc;
  pcVar21 = DAT_2c4f9db8;
  if (*DAT_2c4f9db8 == '\x02') {
    uVar12 = *DAT_2c4f9dbc;
    iVar13 = FUN_2c4c34c0(uVar12);
    iVar11 = DAT_2c4f9dfc;
    puVar16 = (undefined4 *)*puVar5;
    uVar17 = iVar13 + (int)puVar16;
    local_78 = 0;
    if (uVar17 < 0x400) {
LAB_2c4f9d26:
      FUN_2c4c3474(uVar12,(int)puVar16 + DAT_2c4f9dfc,iVar13);
      for (; (*(char *)(iVar11 + local_78) != 'G' || (*(char *)(local_78 + iVar11 + 1) != -4));
          local_78 = local_78 + 1) {
        puVar16 = extraout_r1_01;
        if (uVar17 <= local_78 + 2) goto LAB_2c4f9d68;
      }
      uVar22 = FUN_2c4f9958(local_78 + iVar11,uVar17 - local_78);
      puVar6 = DAT_2c4f9ff4;
      puVar16 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
      if ((uint)uVar22 <= uVar17 - local_78) {
        iVar13 = ((uint)uVar22 & 0xffff) + (local_78 & 0xffff);
        *DAT_2c4f9ff4 = (short)local_78;
        pbVar9 = DAT_2c4fa024;
        puVar6[1] = (short)uVar22;
        *pbVar9 = 1;
        FUN_2c490270();
        uVar12 = FUN_2c490268();
        FUN_2c674668(uVar12,DAT_2c4fa028,iVar13);
        *puVar5 = uVar17 - iVar13;
        if (uVar17 - iVar13 < 0x400) {
          FUN_2c674668(DAT_2c4fa028,iVar11 + iVar13);
        }
        goto LAB_2c4f9b84;
      }
    }
    else if (puVar16 < (undefined4 *)0x400) {
      iVar13 = 0x400 - (int)puVar16;
      uVar17 = 0x400;
      goto LAB_2c4f9d26;
    }
LAB_2c4f9d68:
    pcVar18 = DAT_2c4f9dc0;
    *puVar5 = 0;
    if (*pcVar18 == '\0') {
      uVar12 = 0;
      goto LAB_2c4f9c9e;
    }
LAB_2c4f9b20:
    puVar3 = DAT_2c4f9dc4;
    iVar11 = FUN_2c48fcac(*DAT_2c4f9dc4);
    puVar8 = DAT_2c4fa020;
    puVar7 = DAT_2c4fa010;
    puVar5 = DAT_2c4f9dcc;
    pcVar4 = DAT_2c4f9dc8;
    if (iVar11 == 0) {
      uVar1 = *puVar3;
      uVar17 = *DAT_2c4fa010;
      *DAT_2c4fa014 = 0;
      uVar12 = FUN_2c490280();
      uVar17 = uVar17 >> 1;
      FUN_2c48fcc8(uVar1,uVar12,*puVar7);
    }
    else {
      if (*DAT_2c4f9dc8 == '\0') {
        *pcVar18 = '\0';
        *puVar8 = 1;
        goto LAB_2c4f9b8c;
      }
      uVar17 = *DAT_2c4f9dcc;
      *DAT_2c4f9dcc = uVar17 + 1;
      puVar7 = DAT_2c4fa010;
      if (4 < uVar17) {
        *DAT_2c4f9dd0 = 0;
        *pcVar4 = '\0';
        *pcVar18 = '\0';
        FUN_2c493560(1,0,0,0);
        FUN_2c48f478(1,*DAT_2c4f9dd4,2);
        uVar12 = 0;
        *puVar5 = 0;
        puVar16 = extraout_r1;
        goto LAB_2c4f9c9e;
      }
      uVar12 = FUN_2c490280();
      FUN_2c674268(uVar12,0,*puVar7);
      uVar17 = *puVar7 >> 1;
    }
  }
  else {
    uVar22 = FUN_2c4c34c0(*DAT_2c4f9dbc);
    puVar16 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
    if ((int)uVar22 < 0x24a) {
      pcVar18 = DAT_2c4f9dc0;
      if (*DAT_2c4f9dc0 == '\0') {
LAB_2c4f9cf0:
        uVar12 = 0;
        goto LAB_2c4f9c9e;
      }
      goto LAB_2c4f9b20;
    }
    uVar19 = *puVar2;
    uVar12 = FUN_2c490268();
    FUN_2c4c3474(uVar19,uVar12,0x24a);
LAB_2c4f9b84:
    pcVar18 = DAT_2c4f9dc0;
    if (*DAT_2c4f9dc0 != '\0') goto LAB_2c4f9b20;
LAB_2c4f9b8c:
    if (*pcVar21 == '\x02') {
      iVar11 = FUN_2c490268();
      pbVar9 = DAT_2c4fa024;
      iVar13 = FUN_2c490280();
      FUN_2c674268(local_74,0,0x24);
      FUN_2c674268(&local_50,0,0x24);
      piVar10 = DAT_2c4fa02c;
      puVar2 = DAT_2c4f9ff8;
      puVar6 = DAT_2c4f9ff4;
      if (*pbVar9 == 0) {
        uVar20 = 0;
        uVar17 = 0;
      }
      else {
        uVar20 = 0;
        uVar17 = 0;
        puVar16 = extraout_r1_02;
        do {
          local_74[0] = (char *)((uint)(ushort)puVar6[uVar17 * 2] + iVar11);
          local_68 = (uint)(ushort)puVar6[uVar17 * 2 + 1];
          if (local_68 == 0) {
            if (*DAT_2c4f9ff0 != '\0') {
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x440,DAT_2c4fa004,DAT_2c4fa000,DAT_2c4f9ffc);
            }
            goto LAB_2c4f9ce6;
          }
          uVar12 = *puVar2;
          local_4c = 0x1000;
          *piVar10 = *piVar10 + 1;
          local_50 = iVar13 + uVar20;
          iVar14 = thunk_FUN_2c4e382c(uVar12,local_74);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x448,DAT_2c4fa004,DAT_2c4fa000,DAT_2c4fa01c);
          }
          uVar17 = uVar17 + 1;
          uVar20 = uVar20 + local_44;
          local_44 = 0;
          puVar16 = puVar2;
        } while (uVar17 < *pbVar9);
        uVar17 = uVar20 >> 1;
      }
      FUN_2c4e3964(*puVar2);
      iVar11 = *DAT_2c4fa018;
    }
    else {
      iVar11 = FUN_2c490268();
      iVar13 = FUN_2c490280();
      uVar20 = 0;
      pcVar21 = (char *)0x0;
      FUN_2c674268(local_74,0,0x24);
      FUN_2c674268(&local_50,0,0x24);
      do {
        pcVar18 = pcVar21 + iVar11;
        local_74[0] = pcVar18;
        if (pcVar21[iVar11] != -100) {
          iVar14 = (int)pcVar21 - (int)pcVar18;
          do {
            pcVar18 = pcVar18 + 1;
            pcVar21 = pcVar18 + iVar14;
          } while (*pcVar18 != -100);
          local_74[0] = pcVar21 + iVar11;
        }
        uVar15 = (uint)(byte)pcVar18[1];
        uVar17 = (uint)*(byte *)(DAT_2c4f9ddc + (uVar15 & 1));
        local_50 = iVar13 + uVar20;
        if ((uVar15 & 0xc) == 0xc) {
          iVar14 = uVar17 + 0x20;
        }
        else {
          iVar14 = 0x20;
        }
        uVar17 = (int)((uint)*(byte *)(DAT_2c4f9de0 + ((uVar15 & 0x3f) >> 4)) *
                       (uint)(byte)pcVar18[2] +
                       iVar14 + uVar17 * *(byte *)(DAT_2c4f9dd8 + ((uVar15 & 0xf) >> 2)) * 4 + 7) >>
                 3;
        local_68 = uVar17;
        iVar14 = thunk_FUN_2c4e382c(*DAT_2c4f9de4,local_74,&local_50);
        if (iVar14 == 0) {
          FUN_2c4e0504(DAT_2c4f9df8,7,0,0,DAT_2c4f9df4,0x420,DAT_2c4f9df0,0x1300,DAT_2c4f9dec);
          *(int *)(DAT_2c4f9db4 + 0x28) = *(int *)(DAT_2c4f9db4 + 0x28) + 1;
          FUN_2c48d298();
          puVar16 = extraout_r1_00;
LAB_2c4f9ce6:
          if (3 < *DAT_2c4f9de8) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x152,DAT_2c4fa004,DAT_2c4fa000,DAT_2c4fa00c,DAT_2c4fa008,0,0);
          }
          goto LAB_2c4f9cf0;
        }
        pcVar21 = pcVar21 + uVar17;
        uVar20 = uVar20 + local_44;
        local_44 = 0;
      } while (pcVar21 < (char *)0x24a);
      uVar17 = uVar20 >> 1;
      FUN_2c4e3964(*DAT_2c4f9de4);
      iVar11 = *DAT_2c4f9de8;
    }
    if (3 < iVar11) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x152,DAT_2c4fa004,DAT_2c4fa000,DAT_2c4fa00c,DAT_2c4fa008,uVar20,1);
    }
  }
  pcVar21 = DAT_2c4f9ff0;
  if (*DAT_2c4f9db4 == '\0') {
    *DAT_2c4f9ff0 = '\x01';
    uVar12 = FUN_2c673c88();
    *(undefined4 *)(pcVar21 + 8) = uVar12;
  }
  local_50 = 0;
  local_4c = 0;
  local_50 = FUN_2c490280();
  uStack_48 = uVar17;
  uVar22 = FUN_2c4fb2e0(1,&local_50);
  puVar16 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
  if ((int)uVar22 == 0) {
    if (DAT_2c4f9db4[1] != '\0') {
      uVar12 = 1;
      *(int *)(DAT_2c4f9db4 + 0x24) = *(int *)(DAT_2c4f9db4 + 0x24) + 1;
      goto LAB_2c4f9c9e;
    }
  }
  else if (*(int *)(DAT_2c4f9ff0 + 0x18) == 0) {
    uVar22 = FUN_2c673c88();
    puVar16 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
    uVar12 = 1;
    *(int *)(DAT_2c4f9ff0 + 0x18) = (int)uVar22;
    goto LAB_2c4f9c9e;
  }
  uVar12 = 1;
LAB_2c4f9c9e:
  if ((*DAT_2c4f9db0 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar12,puVar16,*DAT_2c4f9db0 ^ local_2c,0);
  }
  return;
}

