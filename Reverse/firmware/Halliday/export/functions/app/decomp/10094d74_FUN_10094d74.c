/* FUN_10094d74 @ 0x10094d74 */

uint FUN_10094d74(char *param_1,int param_2,int param_3,int param_4,uint *param_5,byte param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  uint local_60;
  int local_5c;
  undefined1 local_35;
  uint local_34;
  int local_30;
  int local_2c [2];
  
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == (char *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = 0;
    if (*param_1 != '\0') {
      if (param_2 == 0) {
        local_34 = 0;
      }
      else {
        local_60 = param_6 & 6;
        if ((param_6 & 6) == 0) {
          local_35 = 0;
          local_34 = local_60;
          if ((param_6 & 2) != 0) {
            param_4 = 0x1fffffff;
          }
          do {
            uVar2 = local_34;
            pcVar16 = param_1 + local_34;
            if ((param_1[local_34] == '\0') || (param_4 < 1)) goto LAB_10094f04;
            iVar10 = param_4;
            if ((param_6 & 2) != 0) {
              iVar10 = 0x1fffffff;
            }
            local_30 = 0;
            local_2c[0] = 0;
            uVar3 = (*(code *)*DAT_10094f5c)(pcVar16,&local_30);
            iVar15 = 0;
            uVar9 = 0;
            local_5c = 0;
            local_2c[0] = local_30;
            iVar5 = 0;
            local_30 = 0;
            iVar11 = local_5c;
            while (local_5c = iVar11, iVar14 = local_30, uVar13 = uVar3, iVar12 = iVar5,
                  local_30 = local_2c[0], pcVar16[iVar14] != '\0') {
              uVar9 = (*(code *)*DAT_10094f5c)(pcVar16,local_2c);
              iVar11 = local_5c + 1;
              uVar3 = uVar9;
              if (((param_6 & 1) == 0) ||
                 (iVar4 = FUN_1012b4fe(&local_35,uVar13), iVar5 = iVar12, iVar4 == 0)) {
                iVar5 = FUN_10092918(param_2,uVar13);
                iVar15 = iVar15 + iVar5;
                if (iVar5 != 0) {
                  iVar15 = iVar15 + param_3;
                }
                if (iVar10 < iVar15 - param_3) {
                  local_5c = iVar11;
                  if (iVar14 != -1) {
                    if (uVar2 != 0) {
                      iVar12 = 0;
                      iVar14 = iVar12;
                    }
                    goto LAB_10094ed4;
                  }
                  break;
                }
                if (((uVar13 == 10) || (uVar13 == 0xd)) || (uVar13 - 0x4e00 < 0x51a6)) {
LAB_10094ebc:
                  if (iVar14 == 0) {
                    iVar12 = iVar15;
                  }
                  break;
                }
                bVar8 = 0;
                while (uVar6 = (uint)bVar8, iVar5 = iVar15, *(byte *)(DAT_10094f60 + uVar6) != 0) {
                  bVar8 = bVar8 + 1;
                  if (uVar13 == *(byte *)(DAT_10094f60 + uVar6)) goto LAB_10094ebc;
                }
              }
            }
            if ((local_5c == 0) || ((uVar13 == 0xd && (uVar9 == 10)))) {
              iVar14 = local_30;
            }
LAB_10094ed4:
            param_4 = param_4 - iVar12;
            local_60 = local_60 + iVar12;
            if (iVar14 == 0) goto LAB_10094f04;
            local_34 = local_34 + iVar14;
            if ((*param_1 == '\n') || (*param_1 == '\r')) goto LAB_10094f04;
          } while ((param_1[local_34] != '\n') && (param_1[local_34] != '\r'));
          local_34 = local_34 + 1;
LAB_10094f04:
          if (local_34 == 0) {
            uVar7 = (*(code *)*DAT_10094f5c)(param_1,&local_34);
            if (param_5 == (uint *)0x0) {
              return local_34;
            }
            local_60 = FUN_10092918(param_2,uVar7,0);
          }
          else if (param_5 == (uint *)0x0) {
            return local_34;
          }
          *param_5 = local_60;
        }
        else {
          for (local_34 = 0; (cVar1 = param_1[local_34], cVar1 != '\n' && (cVar1 != '\r'));
              local_34 = local_34 + 1) {
            if (cVar1 == '\0') goto LAB_10094dc2;
          }
          local_34 = local_34 + 1;
LAB_10094dc2:
          if (param_5 != (uint *)0x0) {
            *param_5 = 0xffffffff;
          }
        }
      }
    }
  }
  return local_34;
}

