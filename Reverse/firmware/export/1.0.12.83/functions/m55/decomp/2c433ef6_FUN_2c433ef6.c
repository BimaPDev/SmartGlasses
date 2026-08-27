/* FUN_2c433ef6 @ 0x2c433ef6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c433da2) */
/* WARNING: Removing unreachable block (ram,0x2c4345de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c433ef6(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *extraout_r2;
  undefined8 *puVar10;
  uint uVar11;
  int extraout_r3;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  int *unaff_r4;
  undefined4 *puVar18;
  undefined4 *unaff_r5;
  int *piVar19;
  int *unaff_r6;
  undefined1 *puVar20;
  int *unaff_r7;
  int iVar21;
  uint *puVar22;
  int unaff_r10;
  int unaff_r11;
  undefined8 *puVar23;
  uint *puVar24;
  int unaff_lr;
  undefined4 unaff_pc;
  bool bVar25;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined8 in_d5;
  undefined8 uVar26;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar24 = (uint *)&iStack_14;
  iStack_14 = param_2;
  while( true ) {
    bVar25 = SBORROW4((int)unaff_r7,0xc3);
    iVar21 = (int)unaff_r7 + -0xc3;
    iVar13 = puVar24[0xbf];
    *unaff_r6 = (int)param_1;
    unaff_r6[1] = iVar13;
    piVar19 = unaff_r6 + 2;
    if ((int)unaff_r7 < 0xc4) goto LAB_2c433e92;
    uVar8 = (uint)*(ushort *)((int)unaff_r4 + 0x2e);
    unaff_r7 = (int *)(puVar24 + 0xda);
    if (-1 < iVar21) break;
    puVar14 = (uint *)0x2c43420c;
    param_2 = param_2 >> 0x1b;
    uVar11 = _LAB_2c433f74;
    if (-1 < param_2) {
      puVar24[6] = (uint)unaff_r5;
      unaff_r5[8] = piVar19;
      uVar11 = (uint)unaff_r4 >> 2;
      uRam2c434218 = SUB41(unaff_r5,0);
      uVar8 = (uint)*(byte *)((int)unaff_r6 + 0x13);
      param_2 = 0x2c434050;
    }
    puVar12 = puRam2c43424c;
    uVar7 = _LAB_2c43415c;
    uVar17 = _LAB_2c434034;
    bVar25 = ((uint)unaff_r5 & 4) != 0;
    puVar22 = (uint *)((int)unaff_r5 * 0x40000000);
    if (!bVar25 || puVar22 == (uint *)0x0) {
      unaff_r10 = unaff_r10 + (int)unaff_r4;
      *unaff_r5 = 0x2c43420c;
      unaff_r5[1] = puVar12;
      if (bVar25 && puVar22 != (uint *)0x0) {
        *(short *)((int)unaff_r5 * -0x80000000) = (short)param_2;
      }
      else {
        *puVar22 = uVar8;
        puVar22[1] = uVar11;
        puVar22[2] = (uint)puVar12;
        *(char *)((int)unaff_r5 + 0x15) = (char)param_2;
        puVar14 = (uint *)(uint)bRam2c434211;
        *(undefined2 *)(param_2 + 0x1e) = 0xc;
        uVar8 = (int)puVar14 >> 5;
        param_1 = (int *)(puVar24 + 0x48);
        *(int **)(uVar8 + 0x30) = param_1;
        param_2 = *(byte *)((int)puVar14 + uVar11) - 0x3c;
        puVar22 = (uint *)puVar24[0x20];
        if (param_2 < 0) goto LAB_2c433eb6;
        puVar24[0xf] = (uint)puVar22;
        coprocessor_storelong(9,in_cr8,unaff_r11 + -0x58);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar24[0xa2] = 0x2c43420c;
    coprocessor_moveto2(3,1,unaff_pc,unaff_r10,in_cr3);
    puVar24[0x4e] = (uint)unaff_r5;
    *(undefined2 *)((int)unaff_r5 * 0x40000001) = 0;
    VectorRoundShiftLeft(in_d5,0x3d,0x40,1);
    uVar11 = (uint)*(ushort *)((int)unaff_r5 + 0x2a);
    bVar25 = 0x5f < uVar7;
    puVar24[-1] = unaff_lr;
    puVar24[-2] = (uint)puVar12;
    puVar24 = puVar24 + -3;
    *puVar24 = uVar17;
    while( true ) {
      uVar8 = ~uVar11;
      coprocessor_moveto(5,2,3,unaff_lr,in_cr9,in_cr5);
      if (bVar25) {
        if (uVar17 != 0) {
          *(short *)(*(int *)(uVar8 + 0xc) + 0xc) = (short)puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (puVar14 == (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar24[0x7c] = *(uint *)(uVar8 + *(ushort *)(uVar8 + 0xc));
        puVar24[0xe2] = (uint)unaff_r5;
        uVar15 = *puVar12;
        uVar8 = (uint)*(short *)(((int)puVar12 - (int)unaff_r5) + 0x2c4347f0);
        puVar24[0x3a] = uVar8;
        if (puVar12 < unaff_r5 || (int)puVar12 - (int)unaff_r5 == 0) {
          *(char *)(iRam2c434864 + 8) = (char)uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(uint *)((char)uVar15 + 0x58) = uVar8;
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0x3d,0x2c4345a8);
        (*pcVar2)();
      }
      param_1 = (int *)((int)uVar17 >> 1);
      puVar22 = puVar24 + 0x80;
      uVar8 = uVar11;
LAB_2c433eb6:
      bVar25 = SCARRY4(uVar8,0x9c);
      unaff_r7 = (int *)(uVar8 + 0x9c);
      param_3 = *puVar14;
      unaff_r5 = (undefined4 *)puVar14[1];
      unaff_r6 = (int *)puVar14[2];
      puVar14 = puVar14 + 3;
      if (uVar8 < 0xffffff64) break;
      if (!bVar25) {
        bVar4 = *(byte *)(param_2 + (int)puVar14);
        *(int **)(bVar4 + 0x5c) = unaff_r7;
        *(int **)((int)puVar24 + -4) = unaff_r6;
        *(int *)((int)puVar24 + -8) = (int)unaff_r5 + -0xba;
        *(uint **)((int)puVar24 + -0xc) = puVar14;
        *(uint *)((int)puVar24 + -0x10) = (uint)bVar4;
        *(undefined1 **)((int)puVar24 + -0x14) = (undefined1 *)((int)puVar24 + 0xec);
        halt_baddata();
      }
      *unaff_r7 = (int)param_1;
      *(uint *)(uVar8 + 0xa0) = param_3;
      *(uint **)(uVar8 + 0xa4) = puVar14;
      uVar11 = uVar8 + 0xa8;
      uVar7 = *puVar22;
      uVar17 = (uint)*(ushort *)((int)puVar22 + uVar8 + 0xb0);
      bVar25 = ((int)puVar14 >> 0x15 & 1U) != 0;
      piVar19 = (int *)((int)puVar14 >> 0x16);
      unaff_r5[0x1c] = uVar11;
      puVar12 = (undefined4 *)0x0;
      if (piVar19 != (int *)0x0) {
        uVar3 = *(undefined1 *)(param_2 + 8);
        iVar13 = *piVar19;
        puVar12 = (undefined4 *)piVar19[1];
        iVar21 = piVar19[3];
        if (-0xa0 < (int)uVar11 >> 8) {
          *(char *)(uVar8 + 0xb8) = (char)uVar7;
          puVar12[0x1d] = iVar13;
          *(undefined1 *)(iVar21 + 0x56) = uVar3;
          puVar6 = (undefined1 *)*puVar12;
          piVar9 = (int *)puVar12[1];
          piVar19 = (int *)puVar12[2];
          puVar12 = puVar12 + 3;
          goto LAB_2c433858;
        }
        *(char *)(*(ushort *)(puVar12 + 9) + 0x15) = (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(char *)(param_2 + param_3) = (char)param_1;
    coprocessor_store(9,in_cr0,puVar24);
    iVar13 = 0x2c433fbc;
    unaff_r4 = *(int **)((int)puVar24 + 0x124);
    if ((int)param_3 >> 0xf != 0) goto LAB_2c433e22;
    if (unaff_r6 == (int *)0x0) {
      *(undefined4 *)((int)puVar24 + 0x36c) = 0x2c433fbc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)((int)piVar19 + uVar8) = (char)param_2;
  coprocessor_moveto(0xf,1,1,unaff_r7,in_cr9,in_cr4);
LAB_2c433e22:
  uVar5 = *(ushort *)(iVar13 * 2);
  if (!bVar25) {
    uVar26 = *(undefined8 *)(param_2 + 0x10);
    *(int *)(iVar13 * 2) = iVar13;
                    /* WARNING: Could not recover jumptable at 0x2c433e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar26 = (*(code *)(uint)uVar5)((int)uVar26,(code *)(uint)uVar5,param_2 + unaff_r10);
    return uVar26;
  }
  piVar19 = (int *)0xd3;
  *unaff_r7 = param_2;
  unaff_r7[1] = 0xd3;
  param_3 = (uint)*(ushort *)((int)(unaff_r7 + 2) + (int)unaff_r4);
LAB_2c433e92:
  iVar21 = 0x21;
  puVar12 = (undefined4 *)(uint)*(byte *)((int)unaff_r5 + 3);
  bVar25 = SCARRY4((int)((int)puVar24 + 0x3bc),0xe4);
  puVar20 = (undefined1 *)((int)puVar24 + 0x4a0);
  piVar9 = (int *)((int)puVar24 + 0x150);
  puVar6 = (undefined1 *)((int)puVar24 + 0x98);
  while( true ) {
    uVar26 = CONCAT44(piVar9,puVar6);
    if (-1 < (int)puVar20) {
      bVar25 = SBORROW4(param_3,0xb6);
      iVar13 = *(int *)((int)puVar24 + 8);
      uVar8 = *(uint *)((int)puVar24 + 0xc);
      puVar23 = (undefined8 *)((ulonglong)_LAB_2c4339b4 >> 0x20);
      *(undefined4 *)(uVar8 + 0x20) = *(undefined4 *)((int)puVar24 + 4);
      puVar10 = puVar23 + 0x62;
      if ((int)param_3 < 0xb6) {
        while( true ) {
          iVar21 = (int)uVar26;
          if (!bVar25) break;
          *unaff_r4 = iVar21;
          unaff_r4[1] = (int)((ulonglong)uVar26 >> 0x20) + iVar21;
          unaff_r4[2] = (int)unaff_r4;
          unaff_r4[3] = iVar13;
          unaff_r4[4] = (int)piVar19;
          uVar8 = (uint)*(byte *)(uVar8 + 4);
          uVar26 = func_0x2be18aa8(iVar21,(int)puVar10 + 2,(int)puVar10 + 0x53);
          bVar25 = SCARRY4(extraout_r3,uVar8);
          piVar19 = (int *)(extraout_r3 + uVar8);
          puVar10 = extraout_r2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return *puVar23;
    }
    *piVar9 = (int)puVar6;
    piVar9[1] = param_3;
    piVar9[2] = (int)puVar12;
    piVar9[3] = (int)unaff_r4;
    piVar9[4] = (int)piVar19;
    iVar13 = 0x4f;
    bVar1 = ((int)puVar12 >> 0x1c & 1U) == 0;
    piVar9 = (int *)((int)puVar12 >> 0x1d);
    *(char *)((int)puVar12 + 0xe) = (char)puVar12;
    piVar16 = unaff_r4;
    if (bVar1) {
      piVar16 = (int *)*unaff_r4;
      iVar21 = unaff_r4[1];
      iVar13 = unaff_r5[0x19];
    }
    if (bVar1) {
      *(char *)(iVar21 + (int)puVar12) = (char)puVar6;
    }
    else {
      bVar25 = SBORROW4((int)piVar16,0x11);
    }
    *(short *)((int)puVar12 + (int)piVar9) = (short)unaff_r5;
    puVar12 = (undefined4 *)((uint)piVar19 >> 0xd);
    puRam2c43392c = puVar12;
    puRam2c433930 = unaff_r5;
    piRam2c433934 = piVar19;
    uVar11 = _DAT_2c433abc;
    if (!bVar25) break;
LAB_2c433858:
    iVar21 = _LAB_2c433c60;
    unaff_r4 = (int *)(uint)*(byte *)((int)piVar9 + 0x12);
    param_3 = iVar13 + 0x53;
    bVar25 = SBORROW4(uVar11,0xfc);
    puVar20 = (undefined1 *)(uVar11 - 0xfc);
    *(short *)(puVar6 + 0x14) = (short)puVar6;
    *(int *)(_LAB_2c433c60 + 0x50) = _LAB_2c433c60;
    puVar18 = (undefined4 *)piVar9[0xc];
    *puVar18 = puVar6;
    puVar18[1] = puVar18;
    puVar18[2] = piVar19;
    unaff_r5 = (undefined4 *)((int)puVar24 + 0x298);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

