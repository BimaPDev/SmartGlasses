/* FUN_10011734 @ 0x10011734 */

void FUN_10011734(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  uint extraout_r3;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  
  iVar14 = *DAT_10011904;
  pcVar5 = (char *)FUN_100a9a7c();
  if (pcVar5 != (char *)0x0) {
    uVar16 = (uint)*(byte *)(param_1 + 0x472);
    pcVar10 = pcVar5;
    if (uVar16 != 0) goto LAB_10011848;
    bVar19 = *pcVar5 == '\x03';
    goto LAB_1001176e;
  }
LAB_1001174e:
  uVar6 = 0xfffffff2;
LAB_10011752:
  do {
    if (*DAT_10011904 == iVar14) {
      return;
    }
    while( true ) {
      pcVar10 = (char *)FUN_1013cdc0(uVar6);
      uVar16 = extraout_r3;
LAB_10011848:
      if (uVar16 != 1) break;
      bVar19 = *pcVar10 == '\x01';
LAB_1001176e:
      if (!bVar19) break;
      FUN_100a7a0c();
      iVar7 = FUN_100a7a40();
      if (iVar7 != 0) {
        uVar3 = FUN_100a8cd4();
        uVar4 = FUN_1012f99a(uVar3);
        *(ushort *)(param_1 + 0x476) = uVar4;
        if (uVar4 < 0x3e81) {
          if (uVar4 == 16000) goto LAB_1001179a;
          uVar13 = 0x100;
        }
        else {
          *(undefined2 *)(param_1 + 0x476) = 16000;
LAB_1001179a:
          uVar13 = 0x200;
        }
        *(undefined2 *)(param_1 + 0x478) = uVar13;
      }
      FUN_100a7a24();
      puVar2 = DAT_10011908;
      if (*(short *)(param_1 + 0x476) == 0) goto LAB_1001174e;
      cVar1 = *pcVar5;
      *DAT_10011908 = 0xb;
      if (cVar1 == '\x01') {
        puVar2[1] = 10;
        iVar8 = FUN_1012e06e(0x1e,2);
        iVar9 = FUN_1012e0a2(0x1e,2);
        iVar7 = 0x800;
      }
      else {
        puVar2[1] = 0xd;
        iVar8 = FUN_1012e06e(0x1e,5);
        iVar9 = FUN_1012e0a2(0x1e,5);
        iVar7 = 0x400;
      }
      *(undefined1 *)(param_1 + 0x471) = 1;
      uVar18 = 0;
      uVar16 = (DAT_10011910 - DAT_1001190c) * 0x20 & 0xff00;
      *(undefined2 *)(param_1 + 0x474) = 0;
      piVar17 = (int *)(param_1 + 0x47c);
      iVar12 = 0;
      do {
        iVar15 = iVar12;
        if ((1 << (uVar18 & 0xff) & *(uint *)(param_1 + 0x46c)) != 0) {
          iVar15 = iVar12 + 1;
          if (2 < iVar12) {
            FUN_100a5b78(uVar16 | 0x1140021,DAT_10011918,DAT_10011914,3);
            break;
          }
          if (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x478)) break;
          iVar12 = iVar7;
          if (iVar9 <= iVar7) {
            iVar12 = iVar9;
          }
          iVar11 = FUN_100a166c(iVar8,iVar12);
          *piVar17 = iVar11;
          if (iVar11 == 0) {
            FUN_100a5b78(uVar16 | 0x12c0011,DAT_10011918,DAT_1001191c);
            FUN_1001154c(param_1);
            uVar6 = 0xfffffff4;
            goto LAB_10011752;
          }
          iVar8 = iVar8 + iVar12;
          iVar9 = iVar9 - iVar12;
          iVar12 = FUN_1012d6fa();
          puVar2 = DAT_10011908;
          piVar17[7] = iVar12;
          FUN_100a5b78(uVar16 | 0x1260033,DAT_10011918,DAT_10011920,uVar18,puVar2[uVar18],iVar12);
        }
        uVar18 = uVar18 + 1;
        piVar17 = piVar17 + 1;
        iVar12 = iVar15;
      } while (uVar18 != 7);
      uVar6 = FUN_10115a38(param_1 + 0x418);
      if (*DAT_10011904 == iVar14) {
        FUN_100a99c4(pcVar5,7,DAT_10011908,param_1 + 0x498);
        return;
      }
    }
    uVar6 = 0xffffffff;
  } while( true );
}

