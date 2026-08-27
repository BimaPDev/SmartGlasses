/* FUN_2c625f8c @ 0x2c625f8c */

void FUN_2c625f8c(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar6;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint extraout_r1_08;
  uint extraout_r1_09;
  uint extraout_r1_10;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint extraout_r1_11;
  uint extraout_r1_12;
  uint extraout_r1_13;
  uint extraout_r1_14;
  uint extraout_r1_15;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  code *pcVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  undefined8 uVar34;
  byte *local_6c;
  int local_54;
  char local_4e;
  char local_4d;
  byte local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  byte local_49;
  int local_48;
  ushort local_44 [2];
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  
  local_34 = *DAT_2c626288;
  if (*(char *)(param_1 + 0x27) == '\x02') {
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar25 = (uint)*(byte *)(param_1 + 0x650) * 3;
    iVar29 = *(int *)(param_1 + 0x30);
    iVar24 = iVar25 + 4 + iVar29;
    uVar14 = (uint)*(ushort *)(param_1 + 0x1c);
    iVar19 = uVar14 * *(ushort *)(param_1 + 0x64a) + (uint)*(ushort *)(param_1 + 0x648);
    uVar6 = (uint)*(ushort *)(param_1 + 0x64e);
    if (uVar6 != 0) {
      iVar10 = 0;
      uVar27 = (uint)*(ushort *)(param_1 + 0x64c);
      do {
        if (uVar27 != 0) {
          iVar15 = iVar19 << 2;
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x654) + iVar15) = *(undefined1 *)(iVar24 + 2);
            *(undefined1 *)(*(int *)(param_1 + 0x654) + iVar15 + 1) = *(undefined1 *)(iVar24 + 1);
            *(undefined1 *)(*(int *)(param_1 + 0x654) + iVar15 + 2) =
                 *(undefined1 *)(iVar29 + iVar25 + 4);
            iVar11 = *(int *)(param_1 + 0x654) + iVar15;
            iVar15 = iVar15 + 4;
            *(char *)(iVar11 + 3) = -(iVar9 == 0);
            uVar27 = (uint)*(ushort *)(param_1 + 0x64c);
          } while (iVar7 < (int)uVar27);
          uVar14 = (uint)*(ushort *)(param_1 + 0x1c);
          uVar6 = (uint)*(ushort *)(param_1 + 0x64e);
        }
        iVar10 = iVar10 + 1;
        iVar19 = iVar19 + uVar14;
      } while (iVar10 < (int)uVar6);
    }
  }
  else if (*(char *)(param_1 + 0x27) != '\x03') {
    FUN_2c6259f4(param_1,*(undefined4 *)(param_1 + 0x654));
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar6 = *(uint *)(param_1 + 0xc);
    iVar25 = *(int *)(param_1 + 0x14) + 1;
    local_4e = *(char *)(uVar6 + *(int *)(param_1 + 0x14));
    *(int *)(param_1 + 0x14) = iVar25;
    uVar4 = DAT_2c62628c;
    if (local_4e != ',') goto LAB_2c625fda;
LAB_2c6265e4:
    uVar21 = *(undefined2 *)(uVar6 + iVar25);
    local_3c = local_3c & 0xffff0000;
    *(int *)(param_1 + 0x14) = iVar25 + 2;
    *(undefined2 *)(param_1 + 0x648) = uVar21;
LAB_2c6265f2:
    uVar21 = *(undefined2 *)(uVar6 + *(int *)(param_1 + 0x14));
    iVar25 = *(int *)(param_1 + 0x14) + 2;
    local_3c = local_3c & 0xffff0000;
    *(int *)(param_1 + 0x14) = iVar25;
    *(undefined2 *)(param_1 + 0x64a) = uVar21;
LAB_2c626602:
    uVar21 = *(undefined2 *)(uVar6 + iVar25);
    iVar25 = iVar25 + 2;
    local_3c = local_3c & 0xffff0000;
    *(int *)(param_1 + 0x14) = iVar25;
    *(undefined2 *)(param_1 + 0x64c) = uVar21;
LAB_2c626610:
    uVar21 = *(undefined2 *)(uVar6 + iVar25);
    iVar25 = iVar25 + 2;
    local_3c = CONCAT22(local_3c._2_2_,uVar21);
    *(int *)(param_1 + 0x14) = iVar25;
    *(undefined2 *)(param_1 + 0x64e) = uVar21;
LAB_2c62661e:
    local_4c = *(byte *)(uVar6 + iVar25);
    uVar14 = (uint)local_4c;
    iVar25 = iVar25 + 1;
    uVar27 = uVar14 & 0x40;
    *(int *)(param_1 + 0x14) = iVar25;
    if ((int)(uVar14 << 0x18) < 0) {
      iVar24 = (uVar14 & 7) + 1;
      iVar9 = 3 << iVar24;
      *(int *)(param_1 + 0x34) = 1 << iVar24;
LAB_2c626940:
      FUN_2c674668(param_1 + 0x38,uVar6 + iVar25,iVar9);
      iVar25 = iVar25 + iVar9;
      uVar6 = *(uint *)(param_1 + 0xc);
      *(int *)(param_1 + 0x14) = iVar25;
      *(int *)(param_1 + 0x30) = param_1 + 0x34;
    }
    else {
      *(int *)(param_1 + 0x30) = param_1 + 0x338;
    }
LAB_2c626638:
    local_49 = *(byte *)(uVar6 + iVar25);
    uVar6 = (uint)local_49;
    iVar25 = iVar25 + 1;
    *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626648:
    FUN_2c625a88(param_1);
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB_2c6261d4;
LAB_2c626656:
    local_54 = *(int *)(param_1 + 0x14);
LAB_2c62665a:
    *(int *)(param_1 + 0x14) = iVar25;
  }
  else {
    FUN_2c62de74(param_1,&local_4e,1,0);
    uVar6 = extraout_r1;
    uVar4 = DAT_2c62628c;
    while (local_4e != ',') {
LAB_2c625fda:
      if (local_4e == ';') {
        uVar4 = 0;
        goto LAB_2c626506;
      }
      if (local_4e != '!') {
        uVar4 = 0xffffffff;
        goto LAB_2c626506;
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar24 = *(int *)(param_1 + 0xc);
        local_4d = *(char *)(iVar24 + *(int *)(param_1 + 0x14));
        iVar25 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar25;
        if (local_4d == -2) {
          pcVar30 = *(code **)(param_1 + 0x640);
          if (pcVar30 != (code *)0x0) {
LAB_2c626428:
            (*pcVar30)(param_1);
            cVar5 = *(char *)(param_1 + 0x10);
            goto joined_r0x2c626432;
          }
LAB_2c626270:
          FUN_2c625a88(param_1);
          uVar6 = extraout_r1_05;
LAB_2c626276:
          if (*(char *)(param_1 + 0x10) != '\0') goto LAB_2c6260be;
LAB_2c62627e:
          iVar24 = *(int *)(param_1 + 0xc);
          iVar25 = *(int *)(param_1 + 0x14);
        }
        else {
          if (local_4d == -1) {
LAB_2c62620c:
            iVar25 = iVar25 + 1;
            *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626210:
            local_3c = *(uint *)(iVar24 + iVar25);
            iVar9 = iVar25 + 8;
            uStack_38 = *(undefined4 *)(iVar24 + iVar25 + 4);
            *(int *)(param_1 + 0x14) = iVar9;
LAB_2c626226:
            iVar25 = iVar9 + 3;
            local_40 = *(undefined2 *)(iVar24 + iVar9);
            local_3e = *(undefined1 *)(iVar24 + iVar9 + 2);
            *(int *)(param_1 + 0x14) = iVar25;
            uVar34 = FUN_2c66c540(&local_3c,uVar4,8);
            uVar6 = (uint)((ulonglong)uVar34 >> 0x20);
            if ((int)uVar34 == 0) {
LAB_2c6264f2:
              iVar25 = iVar25 + 2;
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c6264f6:
              cVar5 = '\0';
              local_44[0] = *(ushort *)(iVar24 + iVar25);
              *(int *)(param_1 + 0x14) = iVar25 + 2;
              goto LAB_2c6263ae;
            }
LAB_2c62624e:
            pcVar30 = *(code **)(param_1 + 0x644);
            if (pcVar30 != (code *)0x0) {
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar25 = *(int *)(param_1 + 0x14);
              }
              else {
                FUN_2c62e030(param_1,0,1);
                FUN_2c62e0f4(param_1,&local_48);
                pcVar30 = *(code **)(param_1 + 0x644);
                iVar25 = local_48;
              }
              (*pcVar30)(param_1,&local_3c,&local_40);
              cVar5 = *(char *)(param_1 + 0x10);
              goto joined_r0x2c626432;
            }
            goto LAB_2c626270;
          }
          if (local_4d == '\x01') {
            pcVar30 = *(code **)(param_1 + 0x63c);
            if (pcVar30 != (code *)0x0) {
LAB_2c62643e:
              iVar25 = iVar25 + 1;
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626442:
              uVar21 = *(undefined2 *)(iVar24 + iVar25);
              local_3c = local_3c & 0xffff0000;
              *(int *)(param_1 + 0x14) = iVar25 + 2;
LAB_2c62644e:
              uVar22 = *(undefined2 *)(iVar24 + *(int *)(param_1 + 0x14));
              iVar9 = *(int *)(param_1 + 0x14) + 2;
              local_3c = local_3c & 0xffff0000;
              *(int *)(param_1 + 0x14) = iVar9;
LAB_2c62645c:
              uVar23 = *(undefined2 *)(iVar24 + iVar9);
              iVar9 = iVar9 + 2;
              local_3c = local_3c & 0xffff0000;
              *(int *)(param_1 + 0x14) = iVar9;
LAB_2c626468:
              uVar6 = (uint)*(ushort *)(iVar24 + iVar9);
              iVar25 = iVar9 + 2;
              local_3c = CONCAT22(local_3c._2_2_,*(ushort *)(iVar24 + iVar9));
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626474:
              local_4c = *(byte *)(iVar24 + iVar25);
              iVar25 = iVar25 + 1;
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626480:
              local_4b = *(undefined1 *)(iVar24 + iVar25);
              iVar25 = iVar25 + 1;
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c62648c:
              local_4a = *(undefined1 *)(iVar24 + iVar25);
              iVar25 = iVar25 + 1;
              *(int *)(param_1 + 0x14) = iVar25;
LAB_2c626498:
              local_49 = *(byte *)(iVar24 + iVar25);
              iVar25 = iVar25 + 1;
              *(int *)(param_1 + 0x14) = iVar25;
              goto LAB_2c6264a8;
            }
LAB_2c626314:
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0xd;
            FUN_2c625a88(param_1);
            uVar6 = extraout_r1_06;
            goto LAB_2c626276;
          }
          if (local_4d == -7) {
LAB_2c6262b6:
            iVar25 = iVar25 + 1;
            *(int *)(param_1 + 0x14) = iVar25;
LAB_2c6262ba:
            local_49 = *(byte *)(iVar24 + iVar25);
            uVar14 = (uint)local_49;
            *(int *)(param_1 + 0x14) = iVar25 + 1;
            *(byte *)(param_1 + 0x27) = (byte)((uVar14 << 0x1c) >> 0x1e);
            *(uint *)(param_1 + 0x28) = uVar14 & 2;
            *(uint *)(param_1 + 0x2c) = uVar14 & 1;
LAB_2c6262da:
            uVar21 = *(undefined2 *)(iVar24 + *(int *)(param_1 + 0x14));
            iVar25 = *(int *)(param_1 + 0x14) + 2;
            local_3c = CONCAT22(local_3c._2_2_,uVar21);
            *(undefined2 *)(param_1 + 0x24) = uVar21;
            *(int *)(param_1 + 0x14) = iVar25;
LAB_2c6262ea:
            *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar24 + iVar25);
            iVar25 = iVar25 + 1;
LAB_2c6262f4:
            iVar25 = iVar25 + 1;
            *(int *)(param_1 + 0x14) = iVar25;
          }
        }
LAB_2c6262fa:
        local_4e = *(char *)(iVar24 + iVar25);
        *(int *)(param_1 + 0x14) = iVar25 + 1;
      }
      else {
        FUN_2c62de74(param_1,&local_4d,1,0);
        if (local_4d == -2) {
          pcVar30 = *(code **)(param_1 + 0x640);
          if (pcVar30 != (code *)0x0) {
            if (*(char *)(param_1 + 0x10) == '\0') {
              iVar25 = *(int *)(param_1 + 0x14);
              goto LAB_2c626428;
            }
            FUN_2c62e030(param_1,0,1);
            FUN_2c62e0f4(param_1,&local_48);
            iVar25 = local_48;
            (**(code **)(param_1 + 0x640))(param_1);
            cVar5 = *(char *)(param_1 + 0x10);
joined_r0x2c626432:
            if (cVar5 != '\0') {
              uVar20 = 0;
              goto LAB_2c626408;
            }
            *(int *)(param_1 + 0x14) = iVar25;
          }
          goto LAB_2c626270;
        }
        if (local_4d != -1) {
          if (local_4d == '\x01') {
            pcVar30 = *(code **)(param_1 + 0x63c);
            if (pcVar30 == (code *)0x0) {
              if (*(char *)(param_1 + 0x10) == '\0') goto LAB_2c626314;
              iVar25 = 0xd;
              uVar20 = 1;
            }
            else {
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                goto LAB_2c62643e;
              }
              FUN_2c62e030(param_1,1);
              FUN_2c62e0f4(param_1,&local_48);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar25 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(param_1 + 0xc);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c626442;
              }
              FUN_2c62de74(param_1,&local_3c,2,0);
              uVar21 = (undefined2)local_3c;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c62644e;
              }
              FUN_2c62de74(param_1,&local_3c,2,0);
              uVar22 = (undefined2)local_3c;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar9 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c62645c;
              }
              FUN_2c62de74(param_1,&local_3c,2,0);
              uVar23 = (undefined2)local_3c;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar9 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c626468;
              }
              FUN_2c62de74(param_1,&local_3c,2,0);
              uVar6 = local_3c & 0xffff;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c626474;
              }
              FUN_2c62de74(param_1,&local_4c,1,0);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c626480;
              }
              FUN_2c62de74(param_1,&local_4b,1,0);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c62648c;
              }
              FUN_2c62de74(param_1,&local_4a,1,0);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                pcVar30 = *(code **)(param_1 + 0x63c);
                goto LAB_2c626498;
              }
              FUN_2c62de74(param_1,&local_49,1,0);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar25 = *(int *)(param_1 + 0x14);
              }
              else {
                FUN_2c62e030(param_1,0,1);
                FUN_2c62e0f4(param_1,&local_48);
                iVar25 = local_48;
              }
              pcVar30 = *(code **)(param_1 + 0x63c);
LAB_2c6264a8:
              (*pcVar30)(param_1,uVar21,uVar22,uVar23,uVar6,local_4c,local_4b,local_4a,local_49);
              if (*(char *)(param_1 + 0x10) == '\0') {
                *(int *)(param_1 + 0x14) = iVar25;
                FUN_2c625a88(param_1);
                uVar6 = extraout_r1_10;
                goto LAB_2c626276;
              }
              uVar20 = 0;
            }
LAB_2c626408:
            FUN_2c62e030(param_1,iVar25,uVar20);
            FUN_2c62e0f4(param_1,&local_48);
            FUN_2c625a88(param_1);
            uVar6 = extraout_r1_09;
          }
          else {
            uVar6 = extraout_r1_00;
            if (local_4d == -7) {
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar25 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(param_1 + 0xc);
                goto LAB_2c6262b6;
              }
              FUN_2c62e030(param_1,1);
              FUN_2c62e0f4(param_1,&local_48);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                uVar6 = extraout_r1_01;
                goto LAB_2c6262ba;
              }
              FUN_2c62de74(param_1,&local_49,1,0);
              uVar14 = (uint)local_49;
              *(byte *)(param_1 + 0x27) = (byte)((uVar14 << 0x1c) >> 0x1e);
              uVar6 = uVar14 & 2;
              *(uint *)(param_1 + 0x28) = uVar6;
              *(uint *)(param_1 + 0x2c) = uVar14 & 1;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                goto LAB_2c6262da;
              }
              FUN_2c62de74(param_1,&local_3c,2,0);
              uVar6 = (uint)local_3c._1_1_;
              *(ushort *)(param_1 + 0x24) = (ushort)(byte)local_3c + (ushort)local_3c._1_1_ * 0x100;
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar24 = *(int *)(param_1 + 0xc);
                iVar25 = *(int *)(param_1 + 0x14);
                goto LAB_2c6262ea;
              }
              FUN_2c62de74(param_1,param_1 + 0x26,1,0);
              if (*(char *)(param_1 + 0x10) == '\0') {
                iVar25 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(param_1 + 0xc);
                uVar6 = extraout_r1_02;
                goto LAB_2c6262f4;
              }
              FUN_2c62e030(param_1,1);
              FUN_2c62e0f4(param_1,&local_48);
              cVar5 = *(char *)(param_1 + 0x10);
              uVar6 = extraout_r1_03;
              goto LAB_2c6260b8;
            }
          }
          goto LAB_2c626276;
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar24 = *(int *)(param_1 + 0xc);
          iVar25 = *(int *)(param_1 + 0x14);
          goto LAB_2c62620c;
        }
        FUN_2c62e030(param_1,1);
        FUN_2c62e0f4(param_1,&local_48);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar25 = *(int *)(param_1 + 0x14);
          iVar24 = *(int *)(param_1 + 0xc);
          goto LAB_2c626210;
        }
        FUN_2c62de74(param_1,&local_3c,8,0);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar24 = *(int *)(param_1 + 0xc);
          iVar9 = *(int *)(param_1 + 0x14);
          goto LAB_2c626226;
        }
        FUN_2c62de74(param_1,&local_40,3,0);
        uVar34 = FUN_2c66c540(&local_3c,uVar4,8);
        uVar6 = (uint)((ulonglong)uVar34 >> 0x20);
        if ((int)uVar34 != 0) goto LAB_2c62624e;
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar25 = *(int *)(param_1 + 0x14);
          iVar24 = *(int *)(param_1 + 0xc);
          goto LAB_2c6264f2;
        }
        FUN_2c62e030(param_1,2,1);
        FUN_2c62e0f4(param_1,&local_48);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar24 = *(int *)(param_1 + 0xc);
          iVar25 = *(int *)(param_1 + 0x14);
          uVar6 = extraout_r1_07;
          goto LAB_2c6264f6;
        }
        FUN_2c62de74(param_1,local_44,2,0);
        cVar5 = *(char *)(param_1 + 0x10);
        uVar6 = extraout_r1_08;
LAB_2c6263ae:
        *(ushort *)(param_1 + 0x22) = (local_44[0] & 0xff) + (local_44[0] & 0xff00);
        if (cVar5 == '\0') {
          iVar24 = *(int *)(param_1 + 0xc);
          iVar25 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar25;
          goto LAB_2c6262fa;
        }
        FUN_2c62e030(param_1,1);
        FUN_2c62e0f4(param_1,&local_48);
        cVar5 = *(char *)(param_1 + 0x10);
        uVar6 = extraout_r1_12;
LAB_2c6260b8:
        if (cVar5 == '\0') goto LAB_2c62627e;
LAB_2c6260be:
        FUN_2c62de74(param_1,&local_4e,1,0);
        uVar6 = extraout_r1_04;
      }
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c6265e4;
    }
    FUN_2c62de74(param_1,&local_3c,2,0);
    *(ushort *)(param_1 + 0x648) = (ushort)(byte)local_3c + (ushort)local_3c._1_1_ * 0x100;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      goto LAB_2c6265f2;
    }
    FUN_2c62de74(param_1,&local_3c,2,0);
    *(ushort *)(param_1 + 0x64a) = (ushort)(byte)local_3c + (ushort)local_3c._1_1_ * 0x100;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c626602;
    }
    FUN_2c62de74(param_1,&local_3c,2,0);
    *(ushort *)(param_1 + 0x64c) = (ushort)(byte)local_3c + (ushort)local_3c._1_1_ * 0x100;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c626610;
    }
    FUN_2c62de74(param_1,&local_3c,2,0);
    *(ushort *)(param_1 + 0x64e) = (ushort)(byte)local_3c + (ushort)local_3c._1_1_ * 0x100;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c62661e;
    }
    FUN_2c62de74(param_1,&local_4c,1,0);
    uVar6 = (uint)local_4c;
    cVar5 = *(char *)(param_1 + 0x10);
    uVar27 = uVar6 & 0x40;
    if ((int)(uVar6 << 0x18) < 0) {
      iVar25 = (uVar6 & 7) + 1;
      iVar9 = 3 << iVar25;
      *(int *)(param_1 + 0x34) = 1 << iVar25;
      if (cVar5 != '\0') {
        FUN_2c62de74(param_1,param_1 + 0x38,iVar9,0);
        cVar5 = *(char *)(param_1 + 0x10);
        *(int *)(param_1 + 0x30) = param_1 + 0x34;
        goto LAB_2c62618e;
      }
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c626940;
    }
    *(int *)(param_1 + 0x30) = param_1 + 0x338;
LAB_2c62618e:
    if (cVar5 == '\0') {
      uVar6 = *(uint *)(param_1 + 0xc);
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c626638;
    }
    FUN_2c62de74(param_1,&local_49,1,0);
    uVar6 = (uint)local_49;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar25 = *(int *)(param_1 + 0x14);
      goto LAB_2c626648;
    }
    FUN_2c62e030(param_1,0,1);
    FUN_2c62e0f4(param_1,&local_48);
    iVar25 = local_48;
    FUN_2c625a88(param_1);
    if (*(char *)(param_1 + 0x10) == '\0') goto LAB_2c626656;
LAB_2c6261d4:
    FUN_2c62e030(param_1,0,1);
    FUN_2c62e0f4(param_1,&local_48);
    local_54 = local_48;
    if (*(char *)(param_1 + 0x10) == '\0') goto LAB_2c62665a;
    FUN_2c62e030(param_1,iVar25,0);
    FUN_2c62e0f4(param_1,&local_48);
  }
  local_6c = &local_49;
  uVar14 = uVar6 + 1;
  uVar6 = 1 << uVar6;
  iVar25 = 1 << (uVar14 & 0xff);
  uVar16 = uVar6 & 0xffff;
  if (iVar25 < 0x100) {
    iVar25 = 0x100;
  }
  uVar17 = uVar16 + 1 & 0xffff;
  piVar3 = (int *)lv_mem_alloc(iVar25 * 6 + 0xc);
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar25;
    piVar3[1] = uVar6 + 2;
    piVar13 = piVar3 + 3;
    piVar3[2] = (int)piVar13;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      iVar25 = 0;
      while( true ) {
        *(undefined2 *)((int)piVar13 + iVar25) = 1;
        *(char *)((int)piVar13 + iVar25 + 4) = (char)uVar8;
        uVar8 = uVar8 + 1;
        *(undefined2 *)((int)piVar13 + iVar25 + 2) = 0xfff;
        if (uVar6 == uVar8) break;
        piVar13 = (int *)piVar3[2];
        iVar25 = iVar25 + 6;
      }
    }
  }
  iVar24 = 0;
  local_4a = 0;
  local_4b = 0;
  uVar8 = FUN_2c625b00(param_1,uVar14,&local_4b,&local_4a,local_6c);
  iVar25 = (uint)*(ushort *)(param_1 + 0x64e) * (uint)*(ushort *)(param_1 + 0x64c);
  if (iVar25 != 0) {
    uVar20 = 0;
    uVar26 = 0;
    bVar33 = false;
    bVar2 = false;
    piVar13 = piVar3;
    uVar18 = uVar14;
    do {
      piVar3 = piVar13;
      if (uVar8 == uVar16) {
        piVar13[1] = uVar6 + 2;
        bVar2 = false;
        uVar18 = uVar14;
      }
      else if (!bVar2) {
        iVar9 = piVar13[1];
        if (iVar9 == *piVar13) {
          *piVar13 = iVar9 * 2;
          piVar3 = (int *)FUN_2c62bebc(piVar13,iVar9 * 0xc + 0xc);
          if (piVar3 == (int *)0x0) {
            FUN_2c62bea8(piVar13);
            uVar4 = 0xffffffff;
            uVar6 = extraout_r1_15;
            goto LAB_2c626506;
          }
          piVar13 = piVar3 + 3;
          iVar9 = piVar3[1];
          piVar3[2] = (int)piVar13;
        }
        else {
          piVar13 = (int *)piVar13[2];
        }
        *(short *)((int)piVar13 + iVar9 * 6) = (short)uVar26 + 1;
        *(short *)((int)piVar13 + iVar9 * 6 + 2) = (short)uVar8;
        *(undefined1 *)((int)piVar13 + iVar9 * 6 + 4) = uVar20;
        uVar8 = piVar3[1];
        uVar31 = uVar8 + 1;
        piVar3[1] = uVar31;
        if (uVar31 == 0x1000) {
          bVar33 = false;
          bVar2 = true;
        }
        else {
          bVar33 = (uVar8 & uVar31) == 0;
        }
      }
      uVar8 = FUN_2c625b00(param_1,uVar18,&local_4b,&local_4a,local_6c);
      if (uVar16 != uVar8) {
        if ((uVar17 == uVar8) || (uVar8 == 0x1000)) break;
        if (bVar33) {
          uVar18 = uVar18 + 1;
        }
        iVar9 = piVar3[2] + uVar8 * 6;
        uVar26 = (uint)*(ushort *)(piVar3[2] + uVar8 * 6);
        uVar20 = *(undefined1 *)(iVar9 + 4);
        uVar1 = *(ushort *)(iVar9 + 2);
        if (uVar26 != 0) {
          uVar32 = 0;
          uVar31 = uVar26;
          do {
            uVar12 = (uint)uVar1;
            iVar19 = uVar31 + iVar24 + -1;
            iVar29 = iVar19 / (int)(uint)*(ushort *)(param_1 + 0x64c);
            iVar9 = (uint)*(ushort *)(param_1 + 0x64c) * iVar29;
            if (uVar27 != 0) {
              uVar31 = (uint)*(ushort *)(param_1 + 0x64e);
              iVar10 = uVar31 - 1;
              if (iVar10 < 0) {
                iVar10 = uVar31 + 6;
              }
              iVar10 = (iVar10 >> 3) + 1;
              if (iVar29 < iVar10) {
                iVar29 = iVar29 << 3;
              }
              else {
                iVar29 = iVar29 - iVar10;
                iVar10 = uVar31 - 5;
                if (iVar10 < 0) {
                  iVar10 = uVar31 + 2;
                }
                iVar10 = (iVar10 >> 3) + 1;
                if (iVar29 < iVar10) {
                  iVar29 = iVar29 * 8 + 4;
                }
                else {
                  iVar29 = iVar29 - iVar10;
                  uVar28 = uVar31 - 3;
                  if ((int)(uVar31 - 3) < 0) {
                    uVar28 = uVar31;
                  }
                  iVar10 = ((int)uVar28 >> 2) + 1;
                  if (iVar29 < iVar10) {
                    iVar29 = iVar29 * 4 + 2;
                  }
                  else {
                    iVar29 = (iVar29 - iVar10) * 2 + 1;
                  }
                }
              }
            }
            *(undefined1 *)
             ((uint)*(ushort *)(param_1 + 0x1c) * ((uint)*(ushort *)(param_1 + 0x64a) + iVar29) +
              (iVar19 - iVar9) + *(int *)(param_1 + 0x658) + (uint)*(ushort *)(param_1 + 0x648)) =
                 uVar20;
            if (uVar12 == 0xfff) break;
            uVar32 = uVar32 + 1;
            iVar9 = piVar3[2] + uVar12 * 6;
            uVar31 = (uint)*(ushort *)(piVar3[2] + uVar12 * 6);
            uVar1 = *(ushort *)(iVar9 + 2);
            uVar20 = *(undefined1 *)(iVar9 + 4);
          } while (uVar26 != uVar32);
        }
        iVar24 = iVar24 + uVar26;
        if (((int)uVar8 < piVar3[1] + -1) && (!bVar2)) {
          *(undefined1 *)(piVar3[2] + piVar3[1] * 6 + -2) = uVar20;
        }
      }
      piVar13 = piVar3;
    } while (iVar24 < iVar25);
  }
  FUN_2c62bea8(piVar3);
  uVar6 = extraout_r1_11;
  if (uVar17 == uVar8) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_2c62de74(param_1,&local_4b,1,0);
      uVar6 = extraout_r1_14;
      goto LAB_2c62684e;
    }
  }
  else {
LAB_2c62684e:
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_2c62e030(param_1,local_54,0);
      FUN_2c62e0f4(param_1,&local_48);
      uVar4 = 1;
      uVar6 = extraout_r1_13;
      goto LAB_2c626506;
    }
  }
  uVar4 = 1;
  *(int *)(param_1 + 0x14) = local_54;
LAB_2c626506:
  if ((*DAT_2c626818 ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar4,uVar6,*DAT_2c626818 ^ local_34,0);
  }
  return;
}

