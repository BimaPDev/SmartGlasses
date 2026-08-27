/* FUN_14042e00 @ 0x14042e00 */

void FUN_14042e00(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ushort uVar21;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  bool bVar22;
  byte *pbVar16;
  
  iVar11 = DAT_14043130;
  if (10 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140431ec,DAT_140431e8,param_1);
  }
  iVar20 = *(byte *)(DAT_14043130 + param_1 + 1) - 1;
  uVar9 = (undefined1)param_1;
  switch(iVar20) {
  case 0:
    if (1 < *(byte *)(DAT_14043130 + 0x20) - 1) {
      puVar10 = (undefined1 *)FUN_14074378(0xd66,4,0,0x101);
      iVar11 = DAT_14042464;
      cVar2 = *(char *)(DAT_14042464 + 0x21);
      puVar10[1] = uVar9;
      if (cVar2 == '\x02') {
        uVar9 = 0x6b;
      }
      else {
        uVar9 = 0x69;
      }
      *puVar10 = uVar9;
      *(ushort *)(puVar10 + 2) = (ushort)*(byte *)(iVar11 + 0x6c);
      FUN_140e5278(puVar10 + 4,iVar11 + 0x6d);
      FUN_140743d0(puVar10);
      if (*(char *)(iVar11 + 0x14) == '\0') {
        if (*(char *)(iVar11 + 0x13) != '\0') {
          *(undefined1 *)(iVar11 + 0x13) = 0;
          FUN_14041f98(param_1,4);
          return;
        }
        FUN_14041f98(param_1,3);
        return;
      }
      FUN_14041f98(param_1,2);
      return;
    }
  case 2:
    FUN_1402a6e8(4,0x326,DAT_140424c0,DAT_140424bc,DAT_140424b8,DAT_140424b4,param_1);
    puVar10 = (undefined1 *)FUN_14074378(0xd61,4,0,8);
    puVar10[1] = uVar9;
    *puVar10 = 100;
    *(undefined2 *)(puVar10 + 2) = 0;
    puVar10[4] = 0;
    FUN_140743d0();
    FUN_14041f98(param_1,4);
    return;
  case 1:
    puVar10 = (undefined1 *)FUN_14074378(0xd66,4,0,0x101);
    *puVar10 = 0x6a;
    puVar10[1] = uVar9;
    uVar17 = DAT_14043154;
    *(ushort *)(puVar10 + 2) = (ushort)*(byte *)(iVar11 + 0x168);
    FUN_140e5278(puVar10 + 4,uVar17);
    FUN_140743d0(puVar10);
    if (*(char *)(iVar11 + 0x13) == '\0') {
      uVar17 = 3;
    }
    else {
      uVar17 = 4;
      *(undefined1 *)(iVar11 + 0x13) = 0;
    }
    goto LAB_140430de;
  case 3:
    if (param_2 == 0) {
      FUN_14041f98(param_1,5);
      FUN_140448d0(param_1);
    }
    else {
      FUN_14041f98(param_1,7);
      FUN_14044644(param_1,param_2);
      puVar10 = (undefined1 *)FUN_14074378(0xd63,4,0,2);
      puVar10[1] = uVar9;
      *puVar10 = 0x67;
      FUN_140743d0();
    }
    uVar17 = 1;
    break;
  default:
    FUN_1402a6e8(4,0x66f,DAT_14043140,DAT_1404313c,DAT_14043134,0x66f,DAT_14043138);
    return;
  case 5:
    iVar11 = FUN_14041d3c();
    uVar17 = 7;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140431f0,DAT_140431e8,param_1);
    }
    goto LAB_14042e7e;
  case 6:
    FUN_14041f98(param_1,0);
    FUN_14044590(param_1);
    iVar20 = 0;
    pbVar14 = DAT_14043144;
    do {
      if (param_1 == *pbVar14) {
        *(undefined1 *)(iVar20 + iVar11 + 0xc) = 0xff;
        break;
      }
      iVar20 = iVar20 + 1;
      pbVar14 = pbVar14 + 1;
    } while (iVar20 != 4);
    pbVar14 = DAT_1404316c;
    if (*(char *)(iVar11 + 0x12) != '\0') {
      *(undefined1 *)(iVar11 + 0x12) = 0;
      iVar11 = DAT_140427bc;
      iVar20 = *DAT_140427b8;
      cVar2 = *(char *)((uint)*pbVar14 + DAT_140427bc + 0xc);
      FUN_140e5278(DAT_140427bc + 0x15,pbVar14,0x25d);
      *(undefined1 *)(iVar11 + 0x14) = 0;
      if (cVar2 == -1) {
        puVar10 = (undefined1 *)FUN_14074378(0xd60,4,0,0x34);
        *puVar10 = 0x60;
        puVar10[2] = pbVar14[0xc];
        uVar9 = FUN_140351ec(pbVar14[0x56]);
        puVar10[8] = uVar9;
        puVar10[6] = pbVar14[0xd];
        puVar10[7] = pbVar14[1] ^ 1;
        switch(pbVar14[0xb]) {
        case 1:
        case 6:
          puVar10[6] = 0;
          *(undefined2 *)(puVar10 + 4) = 5;
          break;
        case 2:
          puVar10[6] = 0;
          *(undefined2 *)(puVar10 + 4) = 0xd;
          break;
        case 3:
          *(undefined2 *)(puVar10 + 4) = 2;
          break;
        case 4:
          *(undefined2 *)(puVar10 + 4) = 0;
          break;
        case 5:
          *(undefined2 *)(puVar10 + 4) = 1;
          break;
        default:
          *(undefined2 *)(puVar10 + 4) = 3;
        }
        uVar17 = *DAT_140427c0;
        uVar12 = DAT_140427c0[1];
        puVar10[1] = pbVar14[0x24f];
        *(undefined4 *)(puVar10 + 10) = uVar17;
        *(short *)(puVar10 + 0xe) = (short)uVar12;
        *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(pbVar14 + 0x256);
        uVar17 = DAT_140427c4;
        *(undefined2 *)(puVar10 + 0x14) = *(undefined2 *)(pbVar14 + 0x25a);
        bVar1 = pbVar14[0x25c];
        puVar10[0x16] = bVar1;
        FUN_1402a6e8(4,0x6ca,uVar17,DAT_140427cc,DAT_140427c8,bVar1);
        FUN_1402a9fc(DAT_140427d0,1,6,puVar10 + 0x10);
        uVar18 = DAT_140427d4;
        puVar10[9] = pbVar14[10];
        *(undefined2 *)(puVar10 + 0x20) = 0x107;
        *(uint *)(puVar10 + 0x18) =
             (uint)((ulonglong)uVar18 * (ulonglong)(uint)(*(int *)(pbVar14 + 0xe) << 3) >> 0x22);
        *(uint *)(puVar10 + 0x1c) =
             (uint)((ulonglong)uVar18 * (ulonglong)(uint)(*(int *)(pbVar14 + 0xe) << 3) >> 0x22);
        if (puVar10[2] != '\0') {
          puVar10[0x25] = 2;
          puVar10[0x26] = *pbVar14;
          puVar10[0x24] = 0;
          if (puVar10[2] == '\x02') {
            *(short *)(puVar10 + 0x28) = (short)*(undefined4 *)(pbVar14 + 2);
            *(short *)(puVar10 + 0x2a) = (short)*(undefined4 *)(pbVar14 + 6);
          }
        }
        uVar9 = 0;
        if (*(char *)(iVar11 + 0x168) != '\0') {
          if ((ushort)(*(short *)(puVar10 + 4) - 2U) < 2) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
          }
        }
        *(undefined1 *)(iVar11 + 0x14) = uVar9;
        if (puVar10[2] == '\0') {
          FUN_1402a6e8(4,0x6fc,DAT_140427c4,DAT_140427cc,DAT_140427d8,0,pbVar14[0x57]);
          if (pbVar14[1] == 0) {
            if (0x1c < pbVar14[0x57]) goto LAB_14042784;
          }
          else if (0x1f < pbVar14[0x57]) {
LAB_14042784:
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_140427f8);
          }
          if (0x1f < pbVar14[0x153]) {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_140427fc);
          }
        }
        uVar18 = (uint)(byte)puVar10[1];
        FUN_1402a6e8(4,0x709,DAT_140427c4,DAT_140427cc,DAT_140427dc,uVar18);
        FUN_1402a6e8(4,0x70c,DAT_140427c4,DAT_140427cc,DAT_140427e0);
        FUN_1402a9fc(DAT_140427e8,1,0x10,DAT_140427e4);
        if (puVar10[1] != '\x01') {
          FUN_1402a6e8(4,0x713,DAT_140427c4,DAT_140427cc,DAT_140427ec,uVar18);
          FUN_1402a9fc(DAT_140427d0,1,6,puVar10 + 10);
        }
        FUN_1402a6e8(4,0x717,DAT_140427c4,DAT_140427cc,DAT_140427f0,pbVar14[0xb]);
        FUN_1402a6e8(4,0x718,DAT_140427c4,DAT_140427cc,DAT_140427f4,*(undefined4 *)(pbVar14 + 0xe));
        FUN_140743d0(puVar10);
        if (*DAT_140427b8 == iVar20) {
          FUN_140747b4(0,3,0,0);
          return;
        }
      }
      else {
        *(undefined1 *)(iVar11 + 0x12) = 1;
        if (*DAT_140427b8 == iVar20) {
          FUN_140420a0(cVar2);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
    FUN_14045194(2,param_1);
    if (*(char *)(iVar11 + 0x288) != '\0') {
      FUN_140422fc(DAT_140431e4,*(undefined1 *)(iVar11 + 0x28a));
      return;
    }
    goto LAB_14042edc;
  case 7:
LAB_140424c4:
    puVar10 = (undefined1 *)FUN_14074378(0xd61,4,0,0x14,iVar20,unaff_r4,unaff_r5,unaff_lr);
    iVar11 = DAT_14042540;
    *puVar10 = 100;
    uVar9 = *(undefined1 *)(iVar11 + 0x10);
    puVar10[3] = 5;
    puVar10[1] = uVar9;
    if ((*(uint *)(iVar11 + 0x278) & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 5;
    }
    puVar10[2] = uVar9;
    iVar20 = *(int *)(iVar11 + 0x278) << 0x1e;
    bVar22 = iVar20 < 0;
    if (bVar22) {
      iVar20 = 0x15;
    }
    puVar10[4] = 0;
    if (bVar22) {
      puVar10[3] = (char)iVar20;
    }
    uVar18 = DAT_14042544;
    *(short *)(puVar10 + 6) =
         (short)(uint)((ulonglong)DAT_14042544 *
                       (ulonglong)((uint)*(ushort *)(iVar11 + 0x274) * 1000) >> 0x29);
    uVar21 = *(ushort *)(iVar11 + 0x276);
    *(undefined2 *)(puVar10 + 0xe) = 0;
    lVar4 = (ulonglong)uVar18 * (ulonglong)((uint)uVar21 * 1000);
    *(undefined2 *)(puVar10 + 0x10) = 0;
    *(short *)(puVar10 + 8) = (short)(uint)((ulonglong)lVar4 >> 0x29);
    FUN_140743d0(puVar10,0,(int)lVar4);
    FUN_14041f98(*(undefined1 *)(iVar11 + 0x10),9);
    return;
  case 8:
    if (param_2 == 0) {
      FUN_14041f98(param_1,10);
      switchD_14034b48::caseD_0();
    }
    else {
      FUN_14041f98(param_1,0xc);
      puVar10 = (undefined1 *)FUN_14074378(0xd63,4,0,2);
      puVar10[1] = uVar9;
      *puVar10 = 0x67;
      FUN_140743d0();
      FUN_14044c3c(param_1,param_2);
    }
    uVar17 = 3;
    break;
  case 10:
    if (*(byte *)(DAT_14043130 + 0x10) != param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14043168,DAT_14043160,param_1);
    }
    uVar17 = 0xc;
    goto LAB_14042e7e;
  case 0xb:
    FUN_14041f98(param_1,0);
    *(undefined1 *)(iVar11 + 0x10) = 0xff;
    if (*(char *)(iVar11 + 0x272) != '\0') {
      uVar18 = *(uint *)(iVar11 + 0x278);
      uVar3 = *(undefined2 *)(iVar11 + 0x276);
      *(undefined1 *)(iVar11 + 0x272) = 0;
      iVar7 = DAT_1404296c;
      cVar2 = *(char *)(DAT_1404296c + 0x10);
      uVar19 = *(uint *)(DAT_1404296c + 0x278);
      *(undefined2 *)(DAT_1404296c + 0x274) = *(undefined2 *)(iVar11 + 0x274);
      *(undefined2 *)(iVar7 + 0x276) = uVar3;
      *(uint *)(iVar7 + 0x278) = uVar18;
      if (cVar2 == -1) {
        puVar10 = (undefined1 *)FUN_14074378(0xd60,4,0,3);
        *puVar10 = 0x61;
        puVar10[1] = (byte)((uint)(*(int *)(iVar7 + 0x278) << 0x1e) >> 0x1f);
        FUN_140743d0();
        return;
      }
      iVar20 = (uVar18 ^ uVar19) << 0x1e;
      if (iVar20 < 0) {
        *(undefined1 *)(iVar7 + 0x272) = 1;
        FUN_14042138();
        return;
      }
      goto LAB_140424c4;
    }
    FUN_14045194(4,param_1);
    FUN_14044b60();
    cVar2 = *(char *)(iVar11 + 0x288);
    goto joined_r0x14042fac;
  case 0xc:
    puVar10 = (undefined1 *)FUN_14074378(0xd61,4,0,0x3c);
    *puVar10 = 100;
    puVar10[1] = *(undefined1 *)(iVar11 + 0x11);
    cVar2 = *(char *)(iVar11 + 0x27d);
    puVar10[3] = 1;
    puVar10[2] = cVar2;
    uVar3 = *(undefined2 *)(iVar11 + 0x27e);
    *(undefined2 *)(puVar10 + 6) = 0x200;
    *(undefined2 *)(puVar10 + 4) = uVar3;
    *(undefined2 *)(puVar10 + 8) = 0x40;
    *(undefined2 *)(puVar10 + 0x14) = 500;
    *(undefined2 *)(puVar10 + 0x18) = 8;
    *(undefined2 *)(puVar10 + 0xe) = 0x24;
    *(undefined2 *)(puVar10 + 0x10) = 0x24;
    *(undefined2 *)(puVar10 + 0x12) = 0;
    *(undefined2 *)(puVar10 + 0x16) = 0;
    iVar20 = DAT_140431e0;
    if (cVar2 == '\0') {
      *(undefined4 *)(puVar10 + 0x32) = *(undefined4 *)(iVar11 + 0x281);
      *(undefined2 *)(puVar10 + 0x36) = *(undefined2 *)(iVar20 + 4);
      puVar10[0x38] = *(undefined1 *)(iVar11 + 0x287);
    }
    FUN_140743d0();
    uVar17 = 0xe;
    param_1 = (uint)*(byte *)(iVar11 + 0x11);
LAB_140430de:
    FUN_14041f98(param_1,uVar17);
    return;
  case 0xd:
    if (param_2 == 0) {
      FUN_14041f98(param_1,0xf);
    }
    else {
      FUN_14041f98(param_1,0x11);
      puVar10 = (undefined1 *)FUN_14074378(0xd63,4,0,2);
      puVar10[1] = uVar9;
      *puVar10 = 0x67;
      FUN_140743d0();
      FUN_140442c8(DAT_1404315c,param_2);
    }
    uVar17 = 5;
    break;
  case 0xf:
    if (*(byte *)(DAT_14043130 + 0x11) != param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14043164,DAT_14043160,param_1);
    }
    uVar17 = 0x11;
LAB_14042e7e:
    FUN_14041f98(param_1,uVar17);
    puVar10 = (undefined1 *)FUN_14074378(0xd63,4,0,2);
    puVar10[1] = uVar9;
    *puVar10 = 0x67;
    FUN_140743d0();
    return;
  case 0x10:
    FUN_14041f98(param_1,0);
    *(undefined1 *)(iVar11 + 0x11) = 0xff;
    pcVar8 = DAT_14043170;
    if (*(char *)(iVar11 + 0x27c) != '\0') {
      *(undefined1 *)(iVar11 + 0x27c) = 0;
      iVar11 = DAT_140428ec;
      if (2 < (byte)pcVar8[3]) {
        FUN_1402a6e8(4,0x72d,DAT_14042904,DAT_14042900,DAT_14042908,DAT_140428f8,2,pcVar8[3]);
        return;
      }
      if (*pcVar8 == '\0') {
        pcVar13 = pcVar8 + 4;
        iVar20 = FUN_140db784(DAT_140428ec + 0x444,pcVar13,6);
        if (((iVar20 == 0) && (*(char *)(iVar11 + 0x43e) == '\x02')) ||
           ((iVar20 = FUN_140db784(DAT_140428f4,pcVar13,6), iVar20 == 0 &&
            (*(char *)(iVar11 + 0x476) == '\x02')))) {
          FUN_1402a6e8(4,0x734,DAT_14042904,DAT_14042900,DAT_140428fc,DAT_140428f8);
          FUN_14045194(5,0xff);
          return;
        }
      }
      iVar20 = DAT_140428f0;
      uVar17 = *(undefined4 *)(pcVar8 + 4);
      *(undefined4 *)(iVar11 + 0x27d) = *(undefined4 *)pcVar8;
      *(undefined4 *)(iVar20 + 4) = uVar17;
      cVar2 = pcVar8[10];
      *(undefined2 *)(iVar20 + 8) = *(undefined2 *)(pcVar8 + 8);
      bVar1 = *(byte *)(iVar11 + 0x11);
      *(char *)(iVar20 + 10) = cVar2;
      if (bVar1 == 0xff) {
        puVar10 = (undefined1 *)FUN_14074378(0xd60,4,0,3);
        *puVar10 = 0x62;
        puVar10[1] = pcVar8[3];
        puVar10[2] = *pcVar8;
        FUN_140743d0();
        return;
      }
      uVar18 = (uint)*(byte *)((uint)bVar1 + iVar11 + 1);
      if (uVar18 != 0xf) {
        if (uVar18 - 0x10 < 2) {
          *(undefined1 *)(iVar11 + 0x27c) = 1;
        }
        return;
      }
      *(undefined1 *)(iVar11 + 0x27c) = 1;
      FUN_14041cc4();
      return;
    }
    FUN_14045194(6,param_1);
    cVar2 = *(char *)(iVar11 + 0x288);
joined_r0x14042fac:
    if (cVar2 != '\0') {
      FUN_140422fc(DAT_14043158,*(undefined1 *)(iVar11 + 0x28a));
    }
LAB_14042edc:
    if (*(char *)(iVar11 + 0x2c4) != '\0') {
      uVar21 = (ushort)*(byte *)(iVar11 + 0x2c6);
      FUN_1402a6e8(4,0x29b,DAT_14043140,DAT_1404313c,DAT_14043148,DAT_1404314c);
      uVar17 = DAT_14043150;
      pbVar14 = DAT_140422a0;
      if (uVar21 != 0) {
        pbVar16 = DAT_140422a0;
        do {
          pbVar15 = pbVar16 + 1;
          if ((*pbVar16 != 0xff) && (DAT_140422a0[*pbVar16 - 0xb] == 5)) {
            FUN_140420a0();
            uVar6 = DAT_140422b4;
            uVar5 = DAT_140422b0;
            uVar12 = DAT_140422ac;
            uVar17 = DAT_140422a8;
            pbVar14[0x2b8] = 1;
            FUN_1402a6e8(4,0x2af,uVar12,uVar17,uVar6,uVar5,0x2af);
            return;
          }
          pbVar16 = pbVar15;
        } while (pbVar15 != DAT_140422a0 + 4);
        if ((DAT_140422a0[4] != 0xff) && (DAT_140422a0[DAT_140422a0[4] - 0xb] == 10)) {
          FUN_14042138();
          pbVar14[0x267] = 1;
          pbVar14[0x2b8] = 1;
          return;
        }
        if ((DAT_140422a0[5] == 0xff) || (DAT_140422a0[DAT_140422a0[5] - 0xb] != 0xf)) {
          if (DAT_140422a0[0x27d] == 0) {
            if (7 < uVar21) {
              uVar21 = 8;
            }
            pbVar14[0x2b8] = 0;
            pbVar14[0x2b9] = 1;
            puVar10 = (undefined1 *)FUN_14074378(0xd52,4,0,(uVar21 - 1) * 0x28 + 0x2a);
            *puVar10 = 0x54;
            puVar10[1] = (char)uVar21;
            FUN_140e5278(puVar10 + 2,uVar17,uVar21 * 0x28);
            FUN_140743d0(puVar10);
            return;
          }
          FUN_1402a6e8(4,0x2c2,DAT_140422ac,DAT_140422a8,DAT_140422a4);
        }
        pbVar14[0x2b8] = 1;
        return;
      }
    }
    return;
  }
  FUN_14045194(uVar17,param_1);
  return;
}

