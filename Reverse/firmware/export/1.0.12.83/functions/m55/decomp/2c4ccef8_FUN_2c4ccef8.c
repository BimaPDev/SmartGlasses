/* FUN_2c4ccef8 @ 0x2c4ccef8 */

int FUN_2c4ccef8(uint *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                uint param_6,int param_7,undefined4 param_8,byte param_9,char param_10,int param_11)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined4 *local_60;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_34;
  
  uVar10 = (uint)param_9;
  local_60 = (undefined4 *)FUN_2c4d7394(param_4,(int)param_10,uVar10,0,param_7);
  if (local_60 == (undefined4 *)0x0) {
    return 0x2003;
  }
  FUN_2c4ce868(*(int *)(*param_2 + 0xc0) + 0x300);
  *(undefined1 *)(*(int *)(*param_2 + 0xc0) + 0x563) = 0;
  if (uVar10 == 2) {
    FUN_2c4ce868(*(int *)(param_2[1] + 0xc0) + 0x300);
    *(undefined1 *)(*(int *)(param_2[1] + 0xc0) + 0x563) = 0;
  }
  pcVar4 = (char *)*local_60;
  local_48 = 0;
  cVar7 = *pcVar4;
  local_40 = 0xffffffff;
  local_4c = 0;
  local_44 = 0xffffffff;
  local_34 = 0;
  local_54 = 0;
  iVar16 = 0;
  do {
    iVar13 = DAT_2c4cdb48;
    iVar15 = DAT_2c4cd73c;
    switch(cVar7) {
    case '\0':
      uVar14 = param_1[1];
      uVar17 = 4 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        bVar9 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)(*param_1 << (uVar17 & 0xff));
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar13 = DAT_2c4cd73c;
      iVar15 = iVar16 + 1;
      param_1[1] = uVar14 - 4;
      *(byte *)(*param_2 + 0xbc) =
           ((byte)(uVar17 >> (uVar14 - 4 & 0xff)) | bVar9) & (byte)*(undefined4 *)(iVar13 + 0x10);
      if (uVar10 != 2) goto LAB_2c4cd0de;
      *(undefined1 *)(param_2[1] + 0xbc) = *(undefined1 *)(*param_2 + 0xbc);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x01':
      uVar14 = param_1[1];
      uVar17 = 1 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        bVar9 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)(*param_1 << (uVar17 & 0xff));
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar13 = DAT_2c4cd73c;
      iVar15 = iVar16 + 1;
      param_1[1] = uVar14 - 1;
      bVar9 = ((byte)(uVar17 >> (uVar14 - 1 & 0xff)) | bVar9) & (byte)*(undefined4 *)(iVar13 + 4);
      *(byte *)(*(int *)(param_2[local_54] + 0xc0) + 0x563) = bVar9;
      local_34 = (uint)bVar9;
      if (uVar10 != 2) goto LAB_2c4cd0de;
      *(undefined1 *)(*(int *)(param_2[1] + 0xc0) + 0x563) =
           *(undefined1 *)(*(int *)(*param_2 + 0xc0) + 0x563);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x02':
      uVar14 = param_1[1];
      uVar17 = 8 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        bVar9 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)(*param_1 << (uVar17 & 0xff));
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar13 = DAT_2c4cd73c;
      iVar15 = iVar16 + 1;
      param_1[1] = uVar14 - 8;
      *(byte *)(*(int *)(param_2[local_54] + 0xc0) + 0x564) =
           ((byte)(uVar17 >> (uVar14 - 8 & 0xff)) | bVar9) & (byte)*(undefined4 *)(iVar13 + 0x20);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x03':
      iVar15 = FUN_2c4cdbb8(param_1,param_2[local_54] + 0xa8,param_5,param_6);
      if ((-1 < param_7 << 0x12) || (*(char *)(param_2[local_54] + 0xb3) == '\0')) {
        if ((uVar10 == 2) && (iVar13 = *param_2, *(char *)(*(int *)(iVar13 + 0xc0) + 0x563) != '\0')
           ) {
          iVar23 = param_2[1];
          uVar3 = *(undefined4 *)(iVar13 + 0xac);
          uVar5 = *(undefined4 *)(iVar13 + 0xb0);
          uVar12 = *(undefined4 *)(iVar13 + 0xb4);
          *(undefined4 *)(iVar23 + 0xa8) = *(undefined4 *)(iVar13 + 0xa8);
          *(undefined4 *)(iVar23 + 0xac) = uVar3;
          *(undefined4 *)(iVar23 + 0xb0) = uVar5;
          *(undefined4 *)(iVar23 + 0xb4) = uVar12;
        }
        goto LAB_2c4cd0d4;
      }
LAB_2c4cd19e:
      iVar15 = 0x4002;
      goto LAB_2c4ccfc4;
    default:
      iVar15 = 0x2003;
      goto LAB_2c4ccfc4;
    case '\x05':
      bVar9 = *(byte *)(*param_2 + 0xb4);
      bVar8 = *(byte *)(param_2[1] + 0xb4);
      if (*(byte *)(param_2[1] + 0xb4) < bVar9) {
        bVar8 = bVar9;
      }
      *(byte *)(*param_2 + 0xb5) = bVar8;
      *(byte *)(param_2[1] + 0xb5) = bVar8;
      iVar15 = *param_2;
      iVar15 = FUN_2c4cdf04(param_1,*(int *)(iVar15 + 0xc4) + 0x1370,*(undefined1 *)(iVar15 + 0xb0),
                            bVar8,0x40,0,0,*(undefined1 *)(iVar15 + 0xb7),
                            *(undefined1 *)(iVar15 + 0xb3),param_6);
      if (iVar15 != 0) goto LAB_2c4cd19e;
      goto LAB_2c4cd0de;
    case '\x06':
      uVar14 = param_1[1];
      uVar17 = 1 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        uVar20 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          uVar20 = 0;
        }
        else {
          uVar20 = *param_1 << (uVar17 & 0xff);
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar15 = DAT_2c4cd73c;
      param_1[1] = uVar14 - 1;
      if (((uVar17 >> (uVar14 - 1 & 0xff) | uVar20) & *(uint *)(iVar15 + 4)) != 0) {
        iVar15 = 0x4007;
        goto LAB_2c4ccfc4;
      }
      goto LAB_2c4cd0de;
    case '\b':
      iVar15 = FUN_2c4cbe0c(param_1,param_2[local_54],param_5,param_6);
      goto LAB_2c4cd0d4;
    case '\t':
      goto LAB_2c4cd0c8;
    case '\n':
      iVar15 = FUN_2c4d10e0(param_1,*(int *)(param_2[local_54] + 0xc0) + 0x566,*param_5,
                            param_2[local_54] + 0xa8,(int)(short)param_8);
      if (iVar15 != 0) {
        iVar15 = 0x4004;
        goto LAB_2c4ccfc4;
      }
      goto LAB_2c4cd0de;
    case '\v':
      FUN_2c4ce88c(param_1,*(int *)(param_2[local_54] + 0xc0) + 0x300);
      if ((param_7 << 0x12 < 0) && (*(char *)(*(int *)(param_2[local_54] + 0xc0) + 0x560) != '\0'))
      goto LAB_2c4cd19e;
      goto LAB_2c4cd0de;
    case '\f':
      iVar15 = FUN_2c4ce8d8(param_1,*(int *)(param_2[local_54] + 0xc0) + 0x300,
                            param_2[local_54] + 0xa8,param_6);
      goto LAB_2c4cd0d4;
    case '\r':
      uVar14 = param_1[1];
      uVar17 = 1 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        uVar20 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          uVar20 = 0;
        }
        else {
          uVar20 = *param_1 << (uVar17 & 0xff);
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar15 = DAT_2c4cd73c;
      param_1[1] = uVar14 - 1;
      if (((uVar17 >> (uVar14 - 1 & 0xff) | uVar20) & *(uint *)(iVar15 + 4)) != 0) {
        iVar15 = 0x400a;
        goto LAB_2c4ccfc4;
      }
      goto LAB_2c4cd0de;
    case '\x0e':
    case '\x14':
    case '\x16':
switchD_2c4ccf6c_caseD_e:
      iVar15 = iVar16 + 1;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x11':
      iVar15 = FUN_2c4cc508(param_1,param_2[local_54],param_5,param_6);
      if ((int)(param_6 << 0x1b) < 0) {
        *(undefined1 *)(param_2[local_54] + 0xbd) = 2;
      }
      else {
        iVar13 = param_2[local_54];
        if ((param_6 & 0x400) == 0) goto LAB_2c4cd5ea;
        *(undefined1 *)(iVar13 + 0xbd) = 4;
      }
      goto LAB_2c4cd0d4;
    case '\x12':
      *(undefined4 *)(param_2[local_54] + 0xcc) = 0;
      FUN_2c4cce8c(param_2[local_54]);
LAB_2c4cd0c8:
      iVar15 = FUN_2c4cb9bc(param_2[local_54],param_1,param_6);
      goto LAB_2c4cd0d4;
    case '\x13':
      uVar14 = param_1[1];
      uVar17 = 1 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        uVar20 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          uVar20 = 0;
        }
        else {
          uVar20 = *param_1 << (uVar17 & 0xff);
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar13 = DAT_2c4cd73c;
      iVar15 = iVar16 + 1;
      param_1[1] = uVar14 - 1;
      local_34 = (uVar17 >> (uVar14 - 1 & 0xff) | uVar20) & *(uint *)(iVar13 + 4);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x17':
      if (-1 < param_7 << 0x1e) goto switchD_2c4ccf6c_caseD_e;
      uVar14 = param_1[1];
      uVar17 = 8 - uVar14;
      if ((int)uVar17 < 1) {
        uVar17 = *param_1;
        bVar9 = 0;
      }
      else {
        if (uVar17 == 0x20) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)(*param_1 << (uVar17 & 0xff));
        }
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar17;
        uVar14 = param_1[1] + 0x20;
      }
      iVar13 = DAT_2c4cdb48;
      iVar15 = iVar16 + 1;
      param_1[1] = uVar14 - 8;
      *(byte *)(*(int *)(param_2[local_54] + 0xc0) + 0x566) =
           ((byte)(uVar17 >> (uVar14 - 8 & 0xff)) | bVar9) & (byte)*(undefined4 *)(iVar13 + 0x20);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x18':
      iVar15 = FUN_2c4cc91c(param_1,param_2[local_54],*(undefined4 *)(param_3 + local_54 * 4),
                            param_5,param_8,param_6);
      iVar13 = param_2[local_54];
LAB_2c4cd5ea:
      *(undefined1 *)(iVar13 + 0xbd) = 1;
LAB_2c4cd0d4:
      if (iVar15 == 0) goto LAB_2c4cd0de;
LAB_2c4ccfc4:
      if ((local_44 & local_40) == 0xffffffff) {
        return iVar15;
      }
      goto LAB_2c4cd77e;
    case '\x1a':
      if (param_1[1] == 0) {
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        bVar9 = (byte)(uVar17 >> 0x1f);
        *param_1 = uVar17;
        param_1[1] = 0x1f;
      }
      else {
        uVar17 = param_1[1] - 1;
        param_1[1] = uVar17;
        bVar9 = (byte)(*param_1 >> (uVar17 & 0xff)) & 1;
      }
      iVar15 = iVar16 + 1;
      *(byte *)(*(int *)(*param_2 + 0xc0) + 0x567) = bVar9;
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x1b':
      iVar13 = *(int *)(*param_2 + 0xc0);
      if (*(char *)(iVar13 + 0x567) == '\0') {
        iVar15 = iVar16 + 1;
        *(undefined1 *)(iVar13 + 0x568) = 1;
        pcVar4 = (char *)*local_60;
        pcVar11 = pcVar4 + iVar15;
      }
      else {
        iVar15 = iVar16 + 1;
        FUN_2c4ce8e8(param_1,iVar13 + 0x300,*(int *)(param_2[1] + 0xc0) + 0x300,iVar13 + 0x568,
                     *param_2 + 0xa8,param_6,param_7,*(undefined1 *)(iVar13 + 0x563));
        pcVar4 = (char *)*local_60;
        pcVar11 = pcVar4 + iVar15;
      }
      break;
    case '\x1c':
      if (param_1[1] == 0) {
        uVar17 = FUN_2c4d74d4(param_1 + 2);
        uVar14 = uVar17 >> 0x1f;
        *param_1 = uVar17;
        param_1[1] = 0x1f;
      }
      else {
        uVar17 = param_1[1] - 1;
        param_1[1] = uVar17;
        uVar14 = *param_1 >> (uVar17 & 0xff) & 1;
      }
      if (uVar14 == 0) {
        iVar15 = FUN_2c4cdb4c(param_1,param_2[1] + 0xa8,param_5);
        goto LAB_2c4cd0d4;
      }
LAB_2c4cd0de:
      pcVar4 = (char *)*local_60;
LAB_2c4cd0e2:
      iVar15 = iVar16 + 1;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x1d':
      uVar17 = param_1[1];
      if (uVar17 == 0) {
        uVar14 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar14;
        local_4c = uVar14 >> 0x1f;
        uVar17 = 0x1c;
        uVar14 = *(uint *)(iVar13 + 0xc) & uVar14 >> 0x1c;
        param_1[1] = 0x1c;
LAB_2c4cd48a:
        iVar13 = 0;
        puVar19 = param_1 + 2;
        iVar15 = local_48;
        do {
          local_48 = iVar15 + 1;
          if (uVar17 == 0) {
            uVar20 = FUN_2c4d74d4(puVar19);
            *param_1 = uVar20;
            param_1[1] = 0x1b;
            if ((int)uVar20 < 0) {
              uVar21 = (uVar20 & 0x7ffffff) >> 0x1a;
              uVar6 = 0x1a;
LAB_2c4cd7c8:
              uVar17 = uVar6 - 1;
LAB_2c4cd7ca:
              param_1[1] = uVar17;
              uVar20 = uVar20 >> (uVar17 & 0xff) & 1;
              goto LAB_2c4cd7d4;
            }
            uVar17 = 0x1b;
          }
          else {
            uVar6 = uVar17 - 1;
            uVar20 = *param_1;
            uVar21 = uVar20 >> (uVar6 & 0xff);
            param_1[1] = uVar6;
            if ((int)(4 - uVar6) < 1) {
              uVar17 = uVar17 - 5;
            }
            else {
              uVar20 = FUN_2c4d74d4(puVar19);
              *param_1 = uVar20;
              uVar6 = param_1[1] + 0x20;
              uVar17 = param_1[1] + 0x1c;
            }
            param_1[1] = uVar17;
            if ((uVar21 & 1) != 0) {
              if (uVar17 == 0) {
                uVar20 = FUN_2c4d74d4(puVar19);
                uVar17 = 0x1e;
                uVar21 = uVar20 >> 0x1f;
                *param_1 = uVar20;
                goto LAB_2c4cd7ca;
              }
              uVar6 = uVar6 - 5;
              param_1[1] = uVar6;
              uVar21 = uVar20 >> (uVar6 & 0xff) & 1;
              if (uVar6 != 0) goto LAB_2c4cd7c8;
              uVar20 = FUN_2c4d74d4(puVar19);
              uVar17 = 0x1f;
              *param_1 = uVar20;
              param_1[1] = 0x1f;
              uVar20 = uVar20 >> 0x1f;
LAB_2c4cd7d4:
              if ((uVar21 & uVar20) != 0) {
                local_48 = iVar15 + 2;
              }
            }
          }
          iVar13 = iVar13 + 1;
          iVar15 = local_48;
        } while (iVar13 <= (int)uVar14);
      }
      else {
        uVar20 = uVar17 - 1;
        uVar14 = *param_1;
        uVar6 = 3 - uVar20;
        param_1[1] = uVar20;
        local_4c = uVar14 >> (uVar20 & 0xff) & 1;
        if ((int)uVar6 < 1) {
          uVar17 = uVar17 - 4;
          uVar20 = 0;
        }
        else {
          if (uVar6 == 0x20) {
            uVar20 = 0;
          }
          else {
            uVar20 = uVar14 << (uVar6 & 0xff);
          }
          uVar14 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar14;
          uVar17 = param_1[1] + 0x1d;
        }
        iVar15 = DAT_2c4cd73c;
        param_1[1] = uVar17;
        uVar14 = (uVar14 >> (uVar17 & 0xff) | uVar20) & *(uint *)(iVar15 + 0xc);
        if (-1 < (int)uVar14) goto LAB_2c4cd48a;
      }
      if (uVar17 == 0) {
        uVar14 = FUN_2c4d74d4(param_1 + 2);
        uVar17 = 0x1e;
        *param_1 = uVar14;
LAB_2c4cdafe:
        uVar17 = uVar17 - 2;
      }
      else {
        param_1[1] = uVar17 - 1;
        if (uVar17 - 1 == 0) {
          uVar14 = FUN_2c4d74d4(param_1 + 2);
          uVar17 = 0x1d;
          *param_1 = uVar14;
        }
        else {
          uVar17 = uVar17 - 2;
          param_1[1] = uVar17;
          if ((int)(2 - uVar17) < 1) goto LAB_2c4cdafe;
          uVar17 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar17;
          uVar17 = param_1[1] + 0x1e;
        }
      }
      param_1[1] = uVar17;
      iVar15 = iVar16 + 1;
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x1e':
      iVar13 = *(int *)(param_2[local_54] + 0xc0);
      if (local_48 < 2) goto switchD_2c4ccf6c_caseD_e;
      iVar23 = -0x1ff - iVar13;
      local_50 = 1;
      do {
        if (local_4c == 0) {
          uVar14 = param_1[1];
          uVar20 = 1 - uVar14;
          uVar17 = 0;
          if ((int)uVar20 < 1) {
            uVar20 = *param_1;
          }
          else {
            if (uVar20 != 0x20) {
              uVar17 = *param_1 << (uVar20 & 0xff);
            }
            uVar20 = FUN_2c4d74d4(param_1 + 2);
            *param_1 = uVar20;
            uVar14 = param_1[1] + 0x20;
          }
          uVar14 = uVar14 - 1;
          uVar6 = *(uint *)(iVar15 + 4);
          param_1[1] = uVar14;
          if (((uVar20 >> (uVar14 & 0xff) | uVar17) & uVar6) != 0) goto LAB_2c4cd40c;
          iVar18 = param_2[local_54];
          if (*(char *)(iVar18 + 0xb0) != '\0') {
            iVar22 = 0;
            do {
              if (*(char *)(iVar18 + 0xb4) != '\0') {
                pcVar4 = (char *)(iVar13 + 0x1ff);
                do {
                  while (pcVar4 = pcVar4 + 1, *pcVar4 != '\0') {
                    uVar14 = 0;
                    iVar18 = *(int *)(DAT_2c4cdb44 + 0x60);
                    uVar17 = param_1[1];
                    while( true ) {
                      uVar20 = 2 - uVar17;
                      uVar6 = 0;
                      if ((int)uVar20 < 1) {
                        uVar21 = *param_1;
                        uVar20 = uVar17;
                      }
                      else {
                        if (uVar20 == 0x20) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = *param_1 << (uVar20 & 0xff);
                        }
                        uVar21 = FUN_2c4d74d4(param_1 + 2);
                        *param_1 = uVar21;
                        uVar20 = param_1[1] + 0x20;
                      }
                      uVar17 = uVar20 - 2;
                      uVar2 = *(uint *)(iVar15 + 8);
                      param_1[1] = uVar17;
                      uVar1 = *(ushort *)
                               (iVar18 + uVar14 * 8 +
                               ((uVar21 >> (uVar17 & 0xff) | uVar6) & uVar2) * 2);
                      if ((int)((uint)uVar1 << 0x1f) < 0) break;
                      uVar14 = (uint)(uVar1 >> 2);
                    }
                    if ((int)((uint)uVar1 << 0x1e) < 0) {
                      param_1[1] = uVar20 - 1;
                    }
                    iVar18 = param_2[local_54];
                    if ((int)(uint)*(byte *)(iVar18 + 0xb4) <= (int)(pcVar4 + iVar23))
                    goto LAB_2c4cd9ea;
                  }
                } while ((int)(pcVar4 + iVar23) < (int)(uint)*(byte *)(iVar18 + 0xb4));
              }
LAB_2c4cd9ea:
              iVar22 = iVar22 + 1;
            } while (iVar22 < (int)(uint)*(byte *)(iVar18 + 0xb0));
          }
        }
        else {
          uVar14 = param_1[1];
LAB_2c4cd40c:
          uVar20 = 0;
          uVar17 = *(uint *)(iVar15 + 8);
          iVar18 = *(int *)(DAT_2c4cd738 + 0x60);
          while( true ) {
            uVar6 = 2 - uVar14;
            uVar21 = 0;
            if ((int)uVar6 < 1) {
              uVar2 = *param_1;
              uVar6 = uVar14;
            }
            else {
              if (uVar6 == 0x20) {
                uVar21 = 0;
              }
              else {
                uVar21 = *param_1 << (uVar6 & 0xff);
              }
              uVar2 = FUN_2c4d74d4(param_1 + 2);
              *param_1 = uVar2;
              uVar6 = param_1[1] + 0x20;
            }
            uVar14 = uVar6 - 2;
            param_1[1] = uVar14;
            uVar1 = *(ushort *)
                     (iVar18 + uVar20 * 8 + ((uVar2 >> (uVar14 & 0xff) | uVar21) & uVar17) * 2);
            if ((int)((uint)uVar1 << 0x1f) < 0) break;
            uVar20 = (uint)(uVar1 >> 2);
          }
          if ((int)((uint)uVar1 << 0x1e) < 0) {
            param_1[1] = uVar6 - 1;
          }
        }
        local_50 = local_50 + 1;
      } while (local_48 != local_50);
      pcVar4 = (char *)*local_60;
      iVar15 = iVar16 + 1;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\x1f':
      if (param_11 == 0) goto LAB_2c4cd0e2;
      uVar3 = 0xc0;
LAB_2c4cd36e:
      iVar15 = iVar16 + 1;
      local_44 = FUN_2c4d3c34(param_11,uVar3);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case ' ':
      iVar15 = iVar16 + 1;
      if (param_11 == 0) goto LAB_2c4cd0e2;
      local_40 = FUN_2c4d3c34(param_11,0x80);
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '!':
    case '$':
      if (param_11 == 0) goto switchD_2c4ccf6c_caseD_e;
      iVar15 = iVar16 + 1;
      FUN_2c4d3c50(param_11,local_44);
      pcVar4 = (char *)*local_60;
      local_44 = 0xffffffff;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\"':
      if (local_44 != 0xffffffff) {
        iVar15 = 0x4004;
        if ((local_44 & local_40) == 0xffffffff) {
          return 0x4004;
        }
        goto LAB_2c4cd784;
      }
      if (param_11 == 0) goto switchD_2c4ccf6c_caseD_e;
      iVar15 = iVar16 + 1;
      FUN_2c4d3c50(param_11,local_40);
      pcVar4 = (char *)*local_60;
      local_40 = local_44;
      pcVar11 = pcVar4 + iVar15;
      break;
    case '#':
      if (param_11 != 0) {
        uVar3 = 0;
        goto LAB_2c4cd36e;
      }
      goto LAB_2c4cd0e2;
    case '%':
      iVar15 = iVar16 + 1;
      local_54 = (local_54 + 1U) - uVar10 * ((local_54 + 1U) / uVar10);
      pcVar11 = pcVar4 + iVar15;
      break;
    case '\'':
      iVar15 = 0;
      local_60 = (undefined4 *)local_60[local_34 + 1];
      pcVar4 = (char *)*local_60;
      pcVar11 = pcVar4;
    }
    cVar7 = *pcVar11;
    iVar16 = iVar15;
  } while (cVar7 != '(');
  if (uVar10 != 0) {
    param_2 = param_2 + -1;
    uVar17 = 0;
    do {
      param_2 = param_2 + 1;
      uVar17 = uVar17 + 1;
      if (*(byte *)(*param_2 + 0xbd) - 1 < 2) {
        iVar16 = *(int *)(*param_2 + 0xc0) + 0x280;
        FUN_2c674268(iVar16,1,0x80);
        iVar16 = FUN_2c4cc100(*param_2,param_5,iVar16,1);
        if (iVar16 != 0) {
          return iVar16;
        }
      }
    } while (uVar17 != uVar10);
  }
  if ((local_44 & local_40) == 0xffffffff) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0x4004;
LAB_2c4cd77e:
    if (local_44 != 0xffffffff) {
LAB_2c4cd784:
      FUN_2c4d3c50(param_11,local_44);
    }
    if (local_40 != 0xffffffff) {
      FUN_2c4d3c50(param_11);
      return iVar15;
    }
  }
  return iVar15;
}

