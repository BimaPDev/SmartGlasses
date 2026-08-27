/* FUN_2c62b56c @ 0x2c62b56c */

uint FUN_2c62b56c(char *param_1,int param_2,int param_3,int param_4,short *param_5,byte param_6)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int local_78;
  int local_74;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_5c;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar3 = DAT_2c62b7f4;
  local_34 = *DAT_2c62b7ec;
  uVar12 = param_6 & 6;
  if ((param_6 & 6) == 0) {
    if ((param_6 & 2) != 0) {
      param_4 = 0x1fff;
    }
    cVar11 = *param_1;
    local_74 = param_4;
    local_68 = uVar12;
    local_5c = uVar12;
    do {
      puVar2 = DAT_2c62b7f0;
      local_40 = uVar12;
      sVar1 = (short)local_5c;
      if (((local_74 < 1) || (cVar11 == '\0')) || (param_2 == 0)) goto joined_r0x2c62b776;
      pcVar17 = param_1 + uVar12;
      iVar13 = 0x1fff;
      if ((param_6 & 2) == 0) {
        iVar13 = local_74;
      }
      local_3c = 0;
      local_38 = 0;
      iVar6 = (*(code *)*DAT_2c62b7f0)(pcVar17,&local_3c);
      local_38 = local_3c;
      local_6c._0_2_ = 0;
      iVar16 = local_3c;
      if (param_1[uVar12] != '\0') {
        iVar16 = -1;
        iVar15 = 0;
        local_6c = 0;
        local_78 = 0;
        iVar18 = 0;
        do {
          local_3c = local_38;
          iVar7 = (*(code *)*puVar2)(pcVar17,&local_38);
          local_64 = iVar18 + 1;
          iVar4 = local_6c;
          if ((param_6 & 1) == 0) {
LAB_2c62b650:
            sVar5 = FUN_2c6298c0(param_2,iVar6,iVar7);
            sVar14 = (short)iVar15 + sVar5;
            if (0 < sVar5) {
              sVar14 = sVar14 + (short)param_3;
            }
            iVar15 = (int)sVar14;
            if ((iVar16 == -1) && (iVar13 < iVar15 - param_3)) {
              iVar16 = local_78;
            }
            if (((iVar6 == 10) || (iVar6 == 0xd)) || (iVar6 - 0x4e00U < 0x51a6)) {
LAB_2c62b6b0:
              local_64 = iVar18;
              if (local_78 == 0) {
                if (iVar16 != -1) goto LAB_2c62b76c;
                local_78 = 0;
                local_6c._0_2_ = sVar14;
                goto LAB_2c62b6c2;
              }
              break;
            }
            iVar8 = 0x20;
            uVar10 = 0;
            do {
              if (iVar8 == iVar6) goto LAB_2c62b6b0;
              uVar10 = uVar10 + 1 & 0xff;
              iVar8 = (int)*(char *)(iVar3 + uVar10);
            } while (iVar8 != 0);
            uVar10 = local_68;
            if (iVar16 == -1) {
              iVar4 = iVar15;
            }
          }
          else if (iVar6 == 0x23) {
            uVar10 = param_6 & 1;
            if (local_68 != 0) {
              if (local_68 == 1) {
                local_68 = 0;
              }
              else if (local_68 == 2) {
                local_68 = 0;
                uVar10 = local_68;
                goto LAB_2c62b74a;
              }
              goto LAB_2c62b650;
            }
          }
          else {
            if (local_68 != 1) goto LAB_2c62b650;
            uVar10 = local_68;
            if (iVar6 == 0x20) {
              uVar10 = 2;
            }
          }
LAB_2c62b74a:
          local_68 = uVar10;
          local_6c = iVar4;
          iVar4 = local_3c;
          local_78 = local_3c;
          local_3c = local_38;
          iVar6 = iVar7;
          iVar18 = local_64;
        } while (pcVar17[iVar4] != '\0');
        if (iVar16 == -1) {
LAB_2c62b6c2:
          iVar16 = local_3c;
          if (((local_64 != 0) && (iVar16 = local_78, iVar6 == 0xd)) &&
             (iVar16 = local_78, iVar7 == 10)) {
            iVar16 = local_3c;
          }
        }
        else {
LAB_2c62b76c:
          if (uVar12 != 0) goto joined_r0x2c62b776;
        }
      }
      sVar1 = (short)local_6c + (short)local_5c;
      local_74 = (int)(short)((short)local_74 - (short)local_6c);
      local_5c = (uint)sVar1;
      if (iVar16 == 0) goto joined_r0x2c62b776;
      uVar12 = local_40 + iVar16;
      local_40 = uVar12;
      if ((*param_1 == '\n') || (*param_1 == '\r')) goto joined_r0x2c62b776;
      cVar11 = param_1[uVar12];
    } while ((cVar11 != '\n') && (cVar11 != '\r'));
    local_40 = uVar12 + 1;
joined_r0x2c62b776:
    local_5c._0_2_ = sVar1;
    if (local_40 == 0) {
      uVar9 = (*(code *)*DAT_2c62b7f0)(param_1,&local_40);
      uVar12 = local_40;
      if (param_5 == (short *)0x0) goto LAB_2c62b724;
      local_5c._0_2_ = FUN_2c6298c0(param_2,uVar9,0);
    }
    else {
      uVar12 = local_40;
      if (param_5 == (short *)0x0) goto LAB_2c62b724;
    }
    *param_5 = (short)local_5c;
    uVar12 = local_40;
  }
  else {
    uVar12 = 0;
    cVar11 = *param_1;
    while ((cVar11 != '\n' && (cVar11 != '\r'))) {
      if (cVar11 == '\0') goto LAB_2c62b80c;
      param_1 = param_1 + 1;
      uVar12 = uVar12 + 1;
      cVar11 = *param_1;
    }
    if (cVar11 != '\0') {
      uVar12 = uVar12 + 1;
    }
LAB_2c62b80c:
    if (param_5 != (short *)0x0) {
      *param_5 = -1;
    }
  }
LAB_2c62b724:
  if (*DAT_2c62b7ec != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar12;
}

