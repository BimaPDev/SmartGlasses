/* FUN_100091e8 @ 0x100091e8 */

void FUN_100091e8(undefined4 param_1,char *param_2,byte *param_3,char *param_4)

{
  byte bVar1;
  ushort *puVar2;
  char *pcVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *unaff_r7;
  uint unaff_r8;
  byte *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  iVar11 = *DAT_100094ac;
  if (param_3 == (byte *)0x0) {
    uVar8 = 0;
    pcVar13 = param_2;
    goto LAB_10009236;
  }
  unaff_r7 = (char *)(uint)*(ushort *)(param_2 + 10);
  pcVar7 = (char *)FUN_10009af4();
  pcVar13 = DAT_100094b0;
  if (unaff_r7 == pcVar7) {
    unaff_r8 = 0;
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    unaff_r9 = DAT_10009500;
    unaff_r10 = DAT_10009504;
    unaff_r11 = DAT_100094b8;
    goto LAB_1000922a;
  }
  pcVar13 = (char *)(uint)*(ushort *)(param_2 + 10);
  pcVar9 = (char *)FUN_10009b50();
  pcVar3 = DAT_100094ec;
  pcVar7 = DAT_100094b4;
  if (pcVar13 != pcVar9) goto LAB_10009234;
  pcVar13 = (char *)(uint)*param_3;
  uVar12 = (uint)(param_4 + -3) & 0xffff;
  if (pcVar13 == (char *)0x1) {
    pbVar10 = param_3 + 3;
    switch(param_3[1]) {
    case 0:
      uVar6 = FUN_1013d036(pbVar10);
      puVar2 = DAT_100094d4;
      *DAT_100094d4 = uVar6;
      FUN_10119dc2(DAT_100094b8);
      pcVar7 = (char *)(uint)*puVar2;
      uVar8 = DAT_100094d8;
      break;
    case 1:
      uVar6 = FUN_1013d036(pbVar10);
      puVar2 = DAT_100094d4;
      DAT_100094d4[1] = uVar6;
      FUN_10119dc2(DAT_100094b8);
      pcVar7 = (char *)(uint)puVar2[1];
      uVar8 = DAT_100094dc;
      break;
    case 2:
      uVar5 = FUN_1013d036(pbVar10);
      puVar2 = DAT_100094d4;
      *(undefined1 *)(DAT_100094d4 + 2) = uVar5;
      FUN_10119dc2(DAT_100094b8);
      pcVar7 = *(char **)(DAT_100094e0 + (uint)(byte)puVar2[2] * 4);
      uVar8 = DAT_100094e4;
      break;
    case 3:
      uVar5 = FUN_1013d036(pbVar10);
      puVar2 = DAT_100094d4;
      *(undefined1 *)((int)DAT_100094d4 + 5) = uVar5;
      FUN_10119dc2(DAT_100094b8);
      pcVar7 = *(char **)(DAT_100094e0 + (uint)*(byte *)((int)puVar2 + 5) * 4);
      uVar8 = DAT_100094e8;
      break;
    default:
      goto switchD_10009416_default;
    }
    goto LAB_100092d0;
  }
  if (pcVar13 != (char *)0x2) {
    if (pcVar13 == (char *)0x0) {
      bVar1 = param_3[1];
      unaff_r7 = (char *)(uint)bVar1;
      if (unaff_r7 == (char *)0x1) {
        cVar4 = FUN_1013d036();
        unaff_r7 = DAT_100094b4;
        DAT_100094b4[0x18] = cVar4;
        pbVar10 = param_3 + 2;
        for (unaff_r8 = 0; (unaff_r8 & 0xffff) < uVar12; unaff_r8 = unaff_r8 + 1) {
          unaff_r9 = pbVar10 + 1;
          if (pbVar10[1] == 0x2c) {
            pcVar13 = (char *)((uint)(pcVar13 + 1) & 0xff);
            if (pcVar13 == (char *)0x1) {
              uVar8 = FUN_10004558(pbVar10 + 2);
              *(undefined4 *)(unaff_r7 + 0x1c) = uVar8;
            }
            else if (pcVar13 == (char *)0x2) {
              uVar8 = FUN_10004558(pbVar10 + 2);
              *(undefined4 *)(unaff_r7 + 0x20) = uVar8;
            }
          }
          pbVar10 = unaff_r9;
        }
        FUN_10119dc2(DAT_100094b8);
        uVar16 = FUN_10003a58(*(undefined4 *)(unaff_r7 + 0x1c));
        uVar15 = FUN_10003a58(*(undefined4 *)(unaff_r7 + 0x20));
        FUN_10119dc2(DAT_100094c4,*(undefined4 *)(DAT_100094c0 + (uint)(byte)unaff_r7[0x18] * 4),
                     (int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar15);
        FUN_1000b008(*(undefined4 *)(unaff_r7 + 0x20));
      }
      else {
        if (unaff_r7 == (char *)0x2) {
          uVar14 = FUN_10004558();
          uVar8 = DAT_100094b8;
          pcVar7 = DAT_100094b4;
          *(undefined4 *)(DAT_100094b4 + 0x24) = uVar14;
          FUN_10119dc2(uVar8);
          uVar16 = FUN_10003a58(*(undefined4 *)(pcVar7 + 0x24));
          uVar16 = FUN_10003b08((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,DAT_100094cc);
          uVar8 = DAT_100094d0;
          goto LAB_10009396;
        }
        if (unaff_r7 == (char *)0x0) {
          if (0x16 < uVar12) {
            uVar12 = 0x17;
          }
          FUN_1013d03e(DAT_100094b4,param_3 + 3,uVar12,0x28);
          uVar8 = DAT_100094b8;
          pcVar7[uVar12] = bVar1;
          FUN_10119dc2(uVar8);
          uVar8 = DAT_100094bc;
          pcVar13 = pcVar7;
          goto LAB_100092d0;
        }
      }
    }
    goto switchD_10009416_default;
  }
  if (0x16 < uVar12) {
    uVar12 = 0x17;
  }
  pbVar10 = param_3 + 3;
  switch(param_3[1]) {
  case 0:
    FUN_1013d03e(DAT_100094ec,pbVar10,uVar12,0x4c);
    uVar8 = DAT_100094b8;
    pcVar3[uVar12] = '\0';
    FUN_10119dc2(uVar8);
    uVar8 = DAT_100094f0;
    pcVar7 = pcVar3;
    pcVar13 = pcVar3;
    break;
  case 1:
    FUN_1013d03e(DAT_100094ec + 0x18,pbVar10,uVar12,0x34);
    uVar8 = DAT_100094b8;
    pcVar3[uVar12 + 0x18] = '\0';
    FUN_10119dc2(uVar8);
    uVar8 = DAT_100094f4;
    pcVar7 = pcVar3 + 0x18;
    pcVar13 = pcVar3;
    break;
  case 2:
    FUN_1013d03e(DAT_100094ec + 0x30,pbVar10,uVar12,0x1c);
    uVar8 = DAT_100094b8;
    pcVar3[uVar12 + 0x30] = '\0';
    FUN_10119dc2(uVar8);
    uVar8 = DAT_100094f8;
    pcVar7 = pcVar3 + 0x30;
    pcVar13 = pcVar3;
    break;
  case 3:
    uVar14 = FUN_10004558(pbVar10);
    pcVar7 = DAT_100094ec;
    uVar8 = DAT_100094b8;
    *(undefined4 *)(DAT_100094ec + 0x48) = uVar14;
    FUN_10119dc2(uVar8);
    uVar16 = FUN_10003a58(*(undefined4 *)(pcVar7 + 0x48));
    uVar8 = DAT_100094fc;
LAB_10009396:
    uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_10119dc2(uVar8,uVar14,(int)uVar16,uVar14);
  default:
    goto switchD_10009416_default;
  }
LAB_100092d0:
  FUN_10119dc2(uVar8,pcVar7);
switchD_10009416_default:
  param_4 = DAT_100094c8;
  FUN_1000ab14(0xb,*param_3);
  if (*param_4 != '\0') {
    FUN_1000914c(2);
    *param_4 = '\0';
  }
LAB_10009234:
  while( true ) {
    uVar8 = 1;
LAB_10009236:
    if (*DAT_100094ac == iVar11) break;
    FUN_1013cdc0(uVar8);
    do {
      bVar1 = param_3[(int)unaff_r7];
      FUN_10119dc2(unaff_r11);
      FUN_10119dc2(unaff_r10,*(undefined4 *)(unaff_r9 + (uint)bVar1 * 4));
      *(uint *)(pcVar13 + (uint)(param_3[(int)unaff_r7] >> 5) * 4) =
           *(uint *)(pcVar13 + (uint)(param_3[(int)unaff_r7] >> 5) * 4) |
           1 << (param_3[(int)unaff_r7] & 0x1f);
LAB_1000922a:
      unaff_r7 = (char *)(unaff_r8 & 0xff);
      unaff_r8 = unaff_r8 + 1;
    } while (unaff_r7 < param_4);
  }
  return;
}

