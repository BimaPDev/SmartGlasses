/* FUN_1404c4f8 @ 0x1404c4f8 */

void FUN_1404c4f8(uint param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar14 = DAT_1404c75c;
  if (param_1 != 0) {
    FUN_1402a6e8(4,0x5b1,DAT_1404c76c,DAT_1404c768,DAT_1404c78c,DAT_1404c788,param_1);
    iVar14 = 0;
  }
  if (*(byte *)(iVar14 + 10) != param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1404ca18);
  }
  FUN_140e5718(*(undefined4 *)(iVar14 + 0x28));
  *(undefined4 *)(iVar14 + 0x2c) = 0;
  iVar6 = FUN_14092f94(param_2);
  if (iVar6 == 0) {
    pbVar7 = (byte *)FUN_1404ae30();
  }
  else {
    FUN_140959a4();
    pbVar7 = (byte *)FUN_1404ae30();
  }
  uVar15 = DAT_1404c9e8;
  uVar8 = DAT_1404c760;
  if ((param_2 == 0) || (param_3 == (undefined1 *)0x0)) {
switchD_1404c546_caseD_3:
    uVar15 = DAT_1404c760;
  }
  else {
    switch(*param_3) {
    case 2:
    case 0x1f:
      uVar10 = (uint)*(byte *)(iVar14 + 0x1b);
      uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
      uVar13 = (uint)**(byte **)(param_3 + 0xc);
      uVar15 = DAT_1404c760;
      FUN_1402a6e8(4,0x10bf,DAT_1404c76c,DAT_1404c768,DAT_1404c798,DAT_1404c760,uVar13,uVar12,uVar10
                  );
      FUN_140a1134(pbVar7,1);
      FUN_140a1184(pbVar7,**(undefined1 **)(param_3 + 0xc));
      FUN_140a0ecc();
      if (*(char *)(iVar14 + 0x1a) == '\x01') {
        FUN_1402a6e8(4,0x10cc,DAT_1404c9dc,DAT_1404c9e0,DAT_1404ca10,uVar15,uVar13,uVar12,uVar10);
        return;
      }
      *(undefined1 *)(iVar14 + 0x1a) = 1;
      *(undefined2 *)(iVar14 + 0x24) = 0;
      uVar15 = uVar8;
      if (*(char *)(iVar14 + 0x10) == '\0') {
        FUN_1404bff4(param_1);
      }
      break;
    default:
      goto switchD_1404c546_caseD_3;
    case 8:
      uVar10 = (uint)(byte)param_3[6];
      FUN_1402a6e8(4,0x10fb,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9ec,DAT_1404c9e8,uVar10);
      iVar6 = FUN_14092f94(param_2);
      if (iVar6 != 0) {
        uVar10 = FUN_1409565c();
        FUN_1402a6e8(4,0x1101,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9f0,uVar15,uVar10);
      }
      uVar12 = 2;
      *(undefined1 *)(iVar14 + 0x1a) = 2;
      if (*(char *)(iVar14 + 0x1b) == '\x01') {
        uVar11 = *(short *)(iVar14 + 0x24) + 1;
        *(ushort *)(iVar14 + 0x24) = uVar11;
        puVar3 = DAT_1404ca04;
        if (uVar11 < 2) {
          uVar8 = *DAT_1404ca00;
          *DAT_1404ca04 = 2;
          FUN_140e5718(uVar8);
          FUN_14048620(*puVar3);
          FUN_1402a6e8(4,0x7dd,DAT_1404c9dc,DAT_1404c9e0,DAT_1404ca08,*puVar3,uVar10);
          FUN_1403d238(0xa0);
          FUN_140e5378(*(undefined4 *)(iVar14 + 0x28),3000);
          FUN_1402a6e8(4,0x110f,DAT_1404c9dc,DAT_1404c9e0,DAT_1404ca14,uVar15,2);
          uVar12 = 0;
          cVar9 = *(char *)(iVar14 + 0x1b);
          *(undefined1 *)(iVar14 + 0x1a) = 0;
          if (cVar9 == '\x02') {
            uVar10 = (uint)*(byte *)(iVar14 + 0x19);
            if (uVar10 == 2) goto LAB_1404c6d2;
            uVar12 = 0;
            goto LAB_1404c64c;
          }
          goto LAB_1404c590;
        }
        cVar9 = *(char *)(iVar14 + 0x19);
        if ((*pbVar7 == 0) || (cVar9 != '\0')) {
          uVar12 = 2;
          goto LAB_1404c7a2;
        }
        bVar1 = false;
        goto LAB_1404c7a4;
      }
      if (*(char *)(iVar14 + 0x1b) == '\x02') {
        uVar11 = *(short *)(iVar14 + 0x24) + 1;
        *(ushort *)(iVar14 + 0x24) = uVar11;
        puVar3 = DAT_1404ca04;
        if (uVar11 < 0xf) {
          uVar8 = *DAT_1404ca00;
          *DAT_1404ca04 = 2;
          FUN_140e5718(uVar8);
          FUN_14048620(*puVar3);
          FUN_1402a6e8(4,0x7dd,DAT_1404c9dc,DAT_1404c9e0,DAT_1404ca08,*puVar3,uVar10);
          FUN_1403d238(0xa0);
          FUN_140e5378(*(undefined4 *)(iVar14 + 0x28),3000);
        }
        else {
          FUN_1404b294(param_1);
        }
        FUN_1402a6e8(4,0x1121,DAT_1404c9dc,DAT_1404c9e0,DAT_1404ca0c,uVar15,
                     *(undefined2 *)(iVar14 + 0x24));
        goto LAB_1404c588;
      }
      uVar10 = (uint)*(byte *)(iVar14 + 0x19);
      goto LAB_1404c596;
    case 0x1e:
      *(undefined1 *)(iVar14 + 0x12) = 0;
      *(undefined1 *)(iVar14 + 0x1a) = 1;
      *(undefined2 *)(iVar14 + 0x24) = 0;
    }
    if (*(char *)(iVar14 + 0x1b) == '\x02') {
      uVar10 = (uint)*(byte *)(iVar14 + 0x19);
      uVar12 = (uint)*pbVar7;
      FUN_1402a6e8(4,0x10ea,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9f8,uVar12,uVar10);
      if ((*pbVar7 != 0) && (*(char *)(iVar14 + 0x19) != '\x01')) {
        FUN_1402a6e8(4,0x10ed,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9fc,uVar12,uVar10);
        FUN_14048820(0,iVar14 + 0x13);
      }
    }
    piVar5 = DAT_1404c79c;
    iVar6 = *DAT_1404c79c;
    if (iVar6 == 0) {
      iVar6 = FUN_140e52f8(DAT_1404c9f4,0,0);
      *piVar5 = iVar6;
    }
    FUN_140e5378(iVar6,4000);
    FUN_1404aa14(iVar14);
  }
LAB_1404c588:
  cVar9 = *(char *)(iVar14 + 0x1b);
  if (cVar9 == '\x02') {
    uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
    uVar10 = (uint)*(byte *)(iVar14 + 0x19);
    if (uVar12 != 2) {
      if (uVar10 == 2) {
LAB_1404c6d2:
        uVar10 = 2;
      }
      else {
LAB_1404c64c:
        FUN_1402a6e8(4,0x1137,DAT_1404c76c,DAT_1404c768,DAT_1404c784,uVar10,uVar12);
        FUN_1404b294(param_1);
        uVar10 = (uint)*(byte *)(iVar14 + 0x19);
        uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
      }
    }
  }
  else {
    uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
LAB_1404c590:
    if (cVar9 == '\x01') {
      if ((*pbVar7 == 0) || (*(char *)(iVar14 + 0x19) != '\0')) {
        if ((pbVar7[2] == 0) || (uVar12 != 0)) {
          cVar9 = *(char *)(iVar14 + 0x19);
LAB_1404c7a2:
          bVar1 = true;
          goto LAB_1404c7a4;
        }
      }
      else {
        bVar1 = false;
        if (uVar12 == 2) {
          cVar9 = '\0';
LAB_1404c7a4:
          FUN_1402a6e8(4,0x1155,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9d8,cVar9,uVar12);
          FUN_1404b294(param_1);
          if (pbVar7[2] != 0) {
            uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
            goto LAB_1404c7c8;
          }
        }
        else {
          uVar10 = 0;
          if (pbVar7[2] == 0) goto LAB_1404c596;
LAB_1404c7c8:
          if (((uVar12 == 1) && (*pbVar7 != 0)) && (!bVar1)) {
            FUN_1402a6e8(4,0x115d,DAT_1404c9dc,DAT_1404c9e0,DAT_1404c9e4);
            FUN_14048820(0,iVar14 + 0x13);
          }
        }
        if (*(char *)(iVar14 + 0x1b) == '\0') {
          FUN_14049be0();
        }
      }
      uVar10 = (uint)*(byte *)(iVar14 + 0x19);
      uVar12 = (uint)*(byte *)(iVar14 + 0x1a);
    }
    else {
      uVar10 = (uint)*(byte *)(iVar14 + 0x19);
    }
  }
LAB_1404c596:
  uVar16 = uVar15;
  FUN_1402a6e8(4,0x1178,DAT_1404c76c,DAT_1404c768,DAT_1404c764,uVar15,uVar10,uVar12);
  uVar4 = DAT_1404c780;
  uVar2 = DAT_1404c76c;
  uVar8 = DAT_1404c768;
  if (*(char *)(iVar14 + 0x10) == '\0') {
    if ((*(char *)(iVar14 + 0x19) != '\x01') && (*(char *)(iVar14 + 0x1a) != '\x01'))
    goto LAB_1404c5be;
    *(undefined1 *)(iVar14 + 0x10) = 1;
    FUN_1402a6e8(4,0x1186,uVar2,uVar8,uVar4,uVar16,uVar10,uVar12);
    FUN_1404ae04(iVar14);
    if (*(char *)(iVar14 + 0x10) == '\0') goto LAB_1404c5be;
  }
  uVar2 = DAT_1404c790;
  uVar8 = DAT_1404c768;
  if ((*(char *)(iVar14 + 0x19) != '\x01') && (*(char *)(iVar14 + 0x1a) != '\x01')) {
    *(undefined1 *)(iVar14 + 0x10) = 0;
    FUN_1402a6e8(4,0x1196,DAT_1404c76c,uVar8,uVar2,uVar16,uVar10,uVar12);
    *DAT_1404c794 = 0;
  }
LAB_1404c5be:
  puVar3 = DAT_1404c774;
  if ((*(char *)(DAT_1404c75c + 0x1b) == '\0') && (*(char *)(DAT_1404c75c + 0x10) == '\0')) {
    uVar8 = *DAT_1404c770;
    *DAT_1404c774 = 2;
    FUN_140e5718(uVar8);
    FUN_14048620(*puVar3);
    FUN_1402a6e8(4,0x7dd,DAT_1404c76c,DAT_1404c768,DAT_1404c778,*puVar3,uVar10,uVar12);
  }
  FUN_1402a6e8(4,0x11ad,DAT_1404c76c,DAT_1404c768,DAT_1404c77c,uVar15,uVar10,uVar12);
  return;
}

