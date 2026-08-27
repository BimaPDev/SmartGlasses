/* FUN_2c0f29c4 @ 0x2c0f29c4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0f2a5e) */
/* WARNING: Removing unreachable block (ram,0x2c0f2bfe) */
/* WARNING: Removing unreachable block (ram,0x2c0f2c02) */
/* WARNING: Removing unreachable block (ram,0x2c0f28e4) */
/* WARNING: Removing unreachable block (ram,0x2c0f25dc) */
/* WARNING: Removing unreachable block (ram,0x2c0f2a1a) */
/* WARNING: Removing unreachable block (ram,0x2c0f2a1e) */
/* WARNING: Removing unreachable block (ram,0x2c0f25c4) */
/* WARNING: Removing unreachable block (ram,0x2c0f25e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f29c4(undefined4 *param_1,uint param_2,undefined4 *param_3,code *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined2 uVar7;
  code *extraout_r3;
  code *extraout_r3_00;
  int iVar8;
  code *pcVar9;
  uint *puVar10;
  code *unaff_r5;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  int iVar16;
  code *unaff_r6;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  uint *unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_lr;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined8 extraout_d7;
  undefined8 in_d7;
  undefined8 uVar23;
  
code_r0x2c0f29c4:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  do {
    pcVar13 = unaff_r5;
    bVar21 = ((uint)param_1 & 0x40000000) != 0;
    pcVar9 = (code *)((int)param_1 << 2);
    bVar20 = pcVar9 == (code *)0x0;
    while( true ) {
      puVar10 = unaff_r7;
      if (bVar21 && !bVar20) goto LAB_2c0f296c;
      pcVar11 = pcVar13 + -0xc6;
      pcVar12 = pcVar11;
      pcVar17 = unaff_r6;
      if ((code *)0xc5 < pcVar13 && pcVar11 != (code *)0x0) goto LAB_2c0f298c;
      pcVar12 = pcVar13 + -0x18c;
      if ((code *)0xc5 < pcVar11 && pcVar12 != (code *)0x0) goto LAB_2c0f29a2;
      unaff_r5 = pcVar13 + -0x252;
      if ((code *)0xc5 < pcVar12 && pcVar13 + -0x252 != (code *)0x0) break;
      pcVar12 = pcVar13 + -0x318;
      bVar21 = CARRY4((uint)unaff_r6,(uint)param_1);
LAB_2c0f29da:
      pcVar11 = pcVar12;
      pcVar17 = unaff_r6;
      puVar10 = unaff_r7;
      if (!bVar21) goto LAB_2c0f29f2;
      if ((code *)0xc6 < pcVar12) {
        pcVar11 = pcVar12 + -0x18c;
        uVar3 = 0x97;
        if (CARRY4((uint)pcVar9,param_2)) goto LAB_2c0f29ea;
        goto LAB_2c0f2a84;
      }
      pcVar14 = pcVar12 + -0x18c;
      if (0xc5 < (int)(pcVar12 + -0xc6)) goto LAB_2c0f2a6a;
      pcVar11 = pcVar12 + -0x252;
      if (0xc5 < (int)pcVar14) goto LAB_2c0f2a96;
      bVar21 = (code *)0xc5 < pcVar11;
      bVar22 = SBORROW4((int)pcVar11,0xc6);
      pcVar11 = pcVar12 + -0x318;
      bVar20 = pcVar11 == (code *)0x0;
      pcVar13 = pcVar11;
      if (!bVar21 || bVar20) goto LAB_2c0f25a8;
      pcVar14 = pcVar12 + -0x3de;
      if (!CARRY4((uint)param_3,(uint)param_3)) goto LAB_2c0f2a6a;
      pcVar14 = pcVar12 + -0x4a4;
      bVar20 = SCARRY4((int)pcVar9,(int)param_3);
      param_1 = (undefined4 *)0x97;
      bVar21 = false;
      if (!CARRY4((uint)pcVar9,(uint)param_3)) {
LAB_2c0f2af8:
        if (bVar21 == bVar20) {
          puVar10 = (uint *)((int)puVar10 + -0xb5);
        }
        else {
          param_4 = (code *)((int)pcVar17 << 0x13);
        }
        pcVar17 = pcVar17 + -0x99;
        pcVar9 = param_4;
LAB_2c0f2b08:
        pcVar12 = (code *)0x97;
        pcVar15 = pcVar14 + -0xb7;
        param_2 = (uint)(byte)pcVar14[-0x20];
        bVar21 = &DAT_0000008e < pcVar15;
        bVar22 = SBORROW4((int)pcVar15,0x8f);
        pcVar11 = pcVar14 + -0x146;
        bVar20 = pcVar11 == (code *)0x0;
        unaff_r6 = pcVar17;
        unaff_r7 = puVar10;
        pcVar13 = pcVar11;
        if (bVar20 || (int)pcVar15 < 0x8f) {
          unaff_r6 = pcVar17 + -0x35;
          param_4 = pcVar17 + -0x3c;
          *(uint *)(pcVar9 + 0x78) = param_2;
          unaff_r7 = (uint *)((int)puVar10 + -0x43);
          if (0x42 < (int)puVar10) goto LAB_2c0f2ac6;
          pcVar11 = pcVar14 + -0x392;
          if (pcVar11 != (code *)0x0 && 0xc5 < (int)(pcVar14 + -0x2cc)) goto LAB_2c0f2a96;
          param_3 = (undefined4 *)0xc0;
          if (SBORROW4((int)pcVar11,0xc6)) goto LAB_2c0f2ac6;
          pcVar17 = pcVar14 + -0x51e;
          bVar21 = pcVar17 == (code *)0x0;
          pcVar13 = pcVar17;
          pcVar12 = pcVar14 + -0x458;
          if (bVar21 || (int)(pcVar14 + -0x458) < 0xc6) {
            pcVar13 = pcVar14 + -0x5e4;
            bVar21 = pcVar13 == (code *)0x0;
            pcVar12 = pcVar17;
          }
          bVar22 = SBORROW4((int)pcVar12,0xc6);
          bVar20 = (int)pcVar13 < 0;
          if (bVar21 || bVar20 != bVar22) {
            param_4 = (code *)&PendSV;
            param_3 = (undefined4 *)0x97;
            param_2 = 0x97;
            if (!SBORROW4((int)pcVar13,0xc6)) {
              do {
              } while( true );
            }
            if ((pcVar13 != (code *)0x18c && 0xc5 < (int)(pcVar13 + -0xc6)) ||
               (pcVar13 != (code *)0x252 && 0xc5 < (int)(pcVar13 + -0x18c))) goto LAB_2c0f2ac6;
            bVar22 = SBORROW4((int)(pcVar13 + -0x252),0xc6);
            pcVar13 = pcVar13 + -0x318;
            bVar20 = (int)pcVar13 < 0;
            bVar21 = pcVar13 == (code *)0x0;
          }
          if (!bVar21 && bVar20 == bVar22) {
            bVar1 = *(byte *)(param_3 + 7);
            _DAT_00000110 = (undefined2)param_2;
            uRam0000009b = _DAT_00000110;
            *(undefined1 *)(param_2 + 1) = 0x14;
            uRam000000af = SUB42(param_3,0);
            _DAT_0000010c = uRam000000af;
            *(undefined2 *)(param_4 + 0x10) = 0xfc;
            uRam000000d4 = 0xc4;
            uRam0000010e = (ushort)bVar1;
            _DAT_000000a9 = uRam0000010e;
            *(undefined2 *)((int)param_3 + 0x12) = 0x14;
            uRam00000026 = 0xc4;
            *(undefined2 *)(param_4 + 0x14) = _DAT_00000110;
            _Reserved4 = 0xfc;
            *(undefined2 *)((int)param_3 + 0x16) = 0xc4;
            uRam0000002a = (ushort)bVar1;
            uRam000000da = 0xc4;
            piVar4 = *(int **)(param_2 + 0x10);
            uRam00000112 = uRam0000002a;
            *(ushort *)(piVar4 + 6) = uRam0000002a;
            *(undefined2 *)(param_3 + 6) = 0xc4;
            *(undefined2 *)(param_4 + 0x18) = 0xfc;
            iVar8 = *piVar4;
            iVar16 = piVar4[2];
            iVar18 = piVar4[3];
            *(undefined2 *)(iVar16 + 0x18) = 0x97;
            *(undefined4 *)(iVar8 + 4) = 0x97;
            uRam0000009d = 0x97;
            *(short *)(iVar16 + 0x18) = (short)iVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pcVar12 = pcVar13 + -0xc6;
          if (pcVar12 == (code *)0x0 || (int)pcVar13 < 0xc6) {
            if (pcVar13 == (code *)0x18c || (int)pcVar12 < 0xc6) {
              *(undefined4 **)(pcVar13 + -0x252) = param_3;
              *(code **)(pcVar13 + -0x24e) = param_4;
              *(code **)(pcVar13 + -0x24a) = pcVar13 + -0x252;
              *(uint **)(pcVar13 + -0x246) = unaff_r7;
              software_bkpt(0xaa);
              halt_baddata();
            }
LAB_2c0f2ac6:
            uRam000000b5 = 0x97;
            *(undefined2 *)(unaff_r6 + 0x1c) = 0x97;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          while( true ) {
            if ((int)pcVar12 < 0 == SBORROW4((int)pcVar13,0xc6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            pcVar11 = pcVar12 + -0xc6;
            if (pcVar11 == (code *)0x0 || (int)pcVar12 < 0xc6) break;
LAB_2c0f29ea:
            while( true ) {
              param_1 = (undefined4 *)0x97;
              pcVar13 = pcVar11 + -0xc6;
              pcVar17 = unaff_r6;
              if (pcVar11 < (code *)0xc6 || pcVar13 == (code *)0x0) goto LAB_2c0f2928;
              pcVar12 = pcVar11 + -0x18c;
              pcVar11 = pcVar12;
              puVar10 = unaff_r7;
              if (pcVar13 < (code *)0xc6 || pcVar12 == (code *)0x0) goto LAB_2c0f29a2;
LAB_2c0f29f2:
              pcVar14 = pcVar11 + -0xc6;
              unaff_r6 = pcVar17;
              unaff_r7 = puVar10;
              if (pcVar11 < (code *)0xc6 || pcVar14 == (code *)0x0) break;
              if (!CARRY4(param_2,param_2)) goto LAB_2c0f2ac6;
              if (pcVar11 + -0x18c < (code *)0xc6 || pcVar11 == (code *)0x252) {
                if (0xc5 < (int)(pcVar11 + -0x18c)) goto LAB_2c0f2ac6;
                pcVar14 = pcVar11 + -0x318;
                if (0xc5 < (int)(pcVar11 + -0x252)) {
                  pcVar14 = pcVar11 + -0x3de;
                }
                bVar20 = SBORROW4(0,param_2);
                param_4 = (code *)((int)pcVar17 << 0x13);
                bVar21 = (int)param_4 < 0;
                goto LAB_2c0f2af8;
              }
              pcVar13 = pcVar11 + -0x318;
              if (pcVar11 + -0x252 < (code *)0xc6 || pcVar13 == (code *)0x0) goto LAB_2c0f2928;
              pcVar14 = pcVar11 + -0x3de;
              if (pcVar13 < (code *)0xc6 || pcVar14 == (code *)0x0) goto LAB_2c0f2b08;
              pcVar13 = pcVar11 + -0x4a4;
              if (pcVar14 < (code *)0xc6 || pcVar13 == (code *)0x0) goto LAB_2c0f296c;
              pcVar12 = pcVar11 + -0x56a;
              if (pcVar13 < (code *)0xc6 || pcVar12 == (code *)0x0) goto LAB_2c0f2990;
              pcVar11 = pcVar11 + -0x630;
              *param_3 = param_4;
              param_3[1] = pcVar9;
              param_3[2] = pcVar11;
              param_3 = param_3 + 3;
              pcVar9 = (code *)0x25c;
            }
LAB_2c0f2a6a:
            bVar20 = SCARRY4((int)pcVar9,4);
            bVar21 = false;
            pcVar17 = unaff_r6;
            puVar10 = unaff_r7;
            if (!bVar20) goto LAB_2c0f2af8;
            pcVar12 = pcVar14 + -0xc6;
            pcVar13 = pcVar14;
          }
          pcVar11 = pcVar12 + -0x18c;
          uVar3 = param_2;
          goto LAB_2c0f2a84;
        }
        goto LAB_2c0f2aa0;
      }
      pcVar11 = pcVar12 + -0x56a;
      uVar3 = param_2;
      if (0xc5 < (int)pcVar14) goto LAB_2c0f2a84;
      bVar21 = (code *)0xc5 < pcVar11;
      pcVar13 = pcVar12 + -0x630;
      bVar20 = pcVar13 == (code *)0x0;
      if (bVar21 && !bVar20) {
        pcVar11 = pcVar12 + -0x6f6;
LAB_2c0f2a84:
        *(short *)(param_4 + 0x28) = (short)unaff_r7;
        *(code **)(pcVar11 + (int)unaff_r7) = param_4;
        *(char *)(uVar3 * 2) = (char)unaff_r7;
        pcVar9 = param_4 + 0x101;
LAB_2c0f2a96:
        pcVar12 = (code *)(*(unaff_r6 + 0xe4))(0x97);
        bVar21 = pcVar9 <= pcVar12;
        bVar22 = SBORROW4((int)pcVar12,(int)pcVar9);
        pcVar12 = pcVar12 + -(int)pcVar9;
        bVar20 = pcVar12 == (code *)0x0;
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
        unaff_r6 = unaff_r6 + 0xe4;
        pcVar13 = pcVar12;
LAB_2c0f2aa0:
        *(short *)(pcVar12 + (int)param_3) = (short)pcVar12;
        param_2 = uRam2c0f2bd8;
LAB_2c0f25a8:
        uVar3 = _DAT_2c0f26f8;
        uVar7 = SUB42(param_4,0);
        if (-1 < (int)pcVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *unaff_r7 = _DAT_2c0f26f8;
        unaff_r7[1] = param_2;
        unaff_r7[2] = (uint)param_3;
        unaff_r7[3] = (uint)pcVar11;
        unaff_r7[4] = (uint)unaff_r6;
        if (!bVar21) {
          *(code **)((int)register0x00000054 + 0x50) = pcVar9;
          uVar7 = *(undefined2 *)(param_3 + 0xd);
          unaff_r6 = unaff_r6 + -0x88;
        }
        uVar19 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
        if (!bVar22) {
          *(code **)((int)register0x00000054 + 100) = pcVar9;
        }
        if (bVar20) {
          param_3 = *(undefined4 **)(uVar3 + 4);
        }
        if (bVar21) {
          uVar3 = (uint)*(byte *)(uVar3 + 0x17);
          unaff_r6 = unaff_r6 + -0x82;
        }
        else {
          *(undefined2 *)(uVar19 + 0x2c) = uVar7;
          uVar19 = uVar19 - 0x30;
        }
        puVar10 = (uint *)(uint)*(ushort *)(uVar3 + 0x1e);
        software_bkpt(5);
        software_bkpt(0xfc);
        if (bVar21) {
          uVar5 = *(uint *)(uVar19 - 0x37);
          unaff_r6 = *(code **)(uVar19 - 0x2f);
          uVar19 = *(uint *)(uVar19 - 0x2b);
        }
        else {
          uVar5 = (int)param_3 - 0x23;
        }
        *(short *)(uVar19 * 2) = (short)uVar3;
        if (!SBORROW4((int)unaff_r6,0x78)) {
          *puVar10 = uVar3;
          puVar10[1] = param_2;
          puVar10[2] = uVar5;
          puVar10[3] = (uint)pcVar9;
          puVar10[4] = uVar19;
        }
        software_bkpt(0xf1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  } while( true );
LAB_2c0f2990:
  bVar21 = (undefined4 *)0xffffff68 < param_3;
  param_1 = (undefined4 *)0x97;
  unaff_r6 = pcVar17;
  if (pcVar17 == (code *)0x0) goto LAB_2c0f29da;
LAB_2c0f29a2:
  iVar8 = (int)param_1 * 4;
  if (((uint)param_1 & 0x40000000) != 0 && iVar8 != 0) {
    *param_1 = pcVar12;
    param_1[1] = unaff_r7;
    *param_3 = pcVar12;
    param_3[1] = (undefined1 *)((int)register0x00000054 + 0x364);
    param_3[2] = pcVar12;
    param_3[3] = pcVar17;
    uVar6 = *(undefined4 *)((int)register0x00000054 + 0x368);
    uVar2 = (ushort)((uint)((int)register0x00000054 + 0x378) >> 0x1e);
    *(ushort *)((int)register0x00000054 + 0x3ac) = uVar2;
    *(ushort *)((int)register0x00000054 + 0x3ac) = uVar2;
    *pcVar12 = (code)((char)*(undefined4 *)((int)register0x00000054 + 0x36c) + 8U | (byte)pcVar12);
                    /* WARNING: Could not recover jumptable at 0x2c0f2912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,(uint)((int)register0x00000054 + 0x378) >> 0x1e,uVar6);
    return;
  }
  pcVar9 = pcVar12 + -0xc6;
  pcVar13 = pcVar9;
  if ((pcVar12 < (code *)0xc6 || pcVar9 == (code *)0x0) &&
     (pcVar13 = pcVar12 + -0x18c, pcVar13 == (code *)0x0 || (int)pcVar9 < 0xc6)) {
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0xc);
    param_1 = *(undefined4 **)(iVar8 + 0x14);
    param_3 = *(undefined4 **)(iVar8 + 0x18);
    param_4 = *(code **)(iVar8 + 0x1c);
    unaff_r6 = *(code **)(iVar8 + 0x20);
    unaff_r7 = *(uint **)(iVar8 + 0x24);
    unaff_r5 = pcVar12 + -0x36a;
    goto code_r0x2c0f29c4;
  }
LAB_2c0f2928:
  VectorShiftRight(in_d7,0x20);
  *(code **)((int)register0x00000054 + 0x25c) = param_4;
  *(code **)((int)register0x00000054 + 700) = param_4;
  unaff_lr = 0x2c0f2963;
  uVar23 = (*pcVar17)((int)pcVar13 >> 0x20);
  param_2 = (uint)((ulonglong)uVar23 >> 0x20);
  puVar10 = (uint *)((int)uVar23 << 2);
  param_3 = extraout_r2;
  param_4 = extraout_r3;
  in_d7 = extraout_d7;
LAB_2c0f296c:
  pcVar17 = (code *)((int)(param_4 + (int)param_3) * 4);
  pcVar12 = pcVar13;
  unaff_r7 = puVar10;
LAB_2c0f298c:
  pcVar9 = (code *)((uint)pcVar17 >> 0xe);
  goto LAB_2c0f2990;
}

