/* FUN_2c44d1d8 @ 0x2c44d1d8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44d36c) */
/* WARNING: Removing unreachable block (ram,0x2c44d372) */
/* WARNING: Removing unreachable block (ram,0x2c44d37e) */
/* WARNING: Removing unreachable block (ram,0x2c44d3b2) */
/* WARNING: Removing unreachable block (ram,0x2c44d344) */
/* WARNING: Removing unreachable block (ram,0x2c44d3b4) */
/* WARNING: Removing unreachable block (ram,0x2c44d380) */
/* WARNING: Removing unreachable block (ram,0x2c44d386) */
/* WARNING: Removing unreachable block (ram,0x2c44d2c6) */
/* WARNING: Removing unreachable block (ram,0x2c44d398) */
/* WARNING: Removing unreachable block (ram,0x2c44cd5c) */
/* WARNING: Removing unreachable block (ram,0x2c44d39a) */
/* WARNING: Removing unreachable block (ram,0x2c44d39c) */
/* WARNING: Removing unreachable block (ram,0x2c44d3e8) */
/* WARNING: Removing unreachable block (ram,0x2c44d3ea) */
/* WARNING: Removing unreachable block (ram,0x2c44d464) */
/* WARNING: Removing unreachable block (ram,0x2c44d25a) */
/* WARNING: Removing unreachable block (ram,0x2c44d312) */
/* WARNING: Removing unreachable block (ram,0x2c44d024) */
/* WARNING: Removing unreachable block (ram,0x2c44d030) */
/* WARNING: Removing unreachable block (ram,0x2c44d03a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_2c44d1d8(uint param_1,int *param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 *******pppppppuVar5;
  short extraout_r1;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_r4;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int unaff_r5;
  undefined4 uVar14;
  uint unaff_r6;
  int iVar15;
  undefined4 ******unaff_r7;
  undefined4 unaff_r9;
  int iVar16;
  undefined4 *******pppppppuVar17;
  undefined4 unaff_lr;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined8 unaff_d8;
  undefined8 unaff_d11;
  undefined4 ******ppppppuStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 *****pppppuStack_34;
  uint uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  pppppppuVar17 = (undefined4 *******)&uStack_14;
  bVar20 = SBORROW4(unaff_r6,0x27);
  bVar19 = unaff_r6 == 0x27;
  uStack_14 = param_3;
  if (unaff_r6 == 0) {
    while( true ) {
      uVar21 = param_1 + 8;
      enableFIQinterrupts();
      enableIRQinterrupts();
      enableDataAbortInterrupts();
      uVar11 = (int)unaff_r7 - uVar21;
      *(short *)param_2 = (short)uVar11;
      uVar7 = _LAB_2c44d340;
      param_4 = 0x2c44d594;
      software_interrupt(0x9b);
      if (uVar11 == 0) break;
      param_1 = uVar21;
      if (-1 < (int)uVar11) {
        coprocessor_store(0xe,in_cr12,unaff_r5 + -0x220);
        iStack_18 = 0x1622;
        coprocessor_load(3,in_cr12,unaff_r5 + -0x1d8);
        uRam0000162c = (undefined1)_LAB_2c44d340;
        iVar16 = (int)((ulonglong)
                       ((longlong)((int)(short)_LAB_2c44d340 * (int)(short)(_LAB_2c44d340 >> 0x10))
                       + CONCAT44(&uStack_1c,unaff_r9)) >> 0x20);
        if (uVar11 < 0xcc) {
          *(char *)((int)param_2 + 0x16) = (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar4 = *(int *)((char)(iVar16 + 0x30) + 0x74);
        if (iVar16 + -0xaf < 0) {
          *(uint *)(((uint)param_2 >> 3) + 0x30) = uVar11;
          *(undefined4 *)(iVar4 + 0x20) = 0xa5;
          *(undefined2 *)(unaff_r5 + -0x1a8) = 0xa5;
          *(uint *)(iVar16 + 0x3e4) = uVar11;
          uVar7 = _LAB_2c44d2ac;
          iVar10 = ((uint)param_2 >> 3) * 0x200000;
          uVar6 = *(undefined4 *)(iVar16 + 0x1f0);
          iVar4 = *(int *)(iVar16 + 500);
          uVar9 = *(undefined4 *)(iVar16 + 0x1f8);
          uVar13 = *(undefined4 *)(iVar16 + 0x1fc);
          uVar14 = *(undefined4 *)(iVar16 + 0x200);
          iVar15 = *(int *)(iVar16 + 0x204);
          if (SBORROW4(iVar15,0xf8)) {
            *(int *)(iRam2c44d4c0 + _LAB_2c44d2ac) = iVar10;
            iVar10 = iVar10 + (uVar7 >> 0x11);
            *(short *)(iVar4 + 0x30) = (short)uVar6;
            *(char *)(iVar10 + 0x18) = (char)iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          coprocessor_function(0xf,0,4,in_cr2,in_cr5,in_cr15);
          uRam00000133 = uVar9;
          uRam00000153 = uVar13;
          *(undefined4 *)(iVar16 + 0x204) = unaff_lr;
          *(int *)(iVar16 + 0x200) = iVar15 + -0xf8;
          *(undefined4 *)(iVar16 + 0x1fc) = uVar14;
          *(undefined4 *)(iVar16 + 0x1f8) = uVar13;
          *(int *)(iVar16 + 500) = iVar10;
          *(undefined4 *)(iVar16 + 0x1f0) = uVar9;
          *(int *)(iVar16 + 0x1ec) = iVar4;
          *(int *)(iVar16 + 0x1e8) = iVar4;
          *(undefined4 *)(iVar16 + 0x1e4) = 0xd7;
          iRam00000127 = iVar4 + -0xdf;
          coprocessor_function2(0xe,0xc,5,in_cr11,in_cr4,in_cr15);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0x17,0x2c44cb46);
          uStack_1c = uVar21;
          (*pcVar1)();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(short *)(param_1 + 0x12) = (short)unaff_r5;
    uVar12 = 0;
    uVar21 = 0x2c44d5e8;
    uVar11 = 0;
LAB_2c44d2d0:
    *(char *)(uVar11 + 0x15) = (char)uVar7;
  }
  else {
    pppppppuVar5 = (undefined4 *******)*unaff_r4;
    iVar4 = unaff_r4[1];
    uStack_1c = unaff_r4[2];
    iStack_18 = unaff_r4[3];
    pppppuStack_34 = (undefined4 *****)unaff_r4[4];
    *param_2 = (int)param_2;
    param_2[1] = iVar4;
    param_2[2] = iStack_18;
    iStack_38 = iStack_18;
    uStack_3c = uStack_1c;
    pppppppuVar17 = (undefined4 *******)&stack0xffffffd0;
    *param_2 = (int)pppppppuVar5;
    param_2[1] = (int)param_2;
    param_2[2] = uStack_1c;
    param_2[3] = iStack_18;
    param_2[4] = (int)pppppuStack_34;
    bVar2 = *(byte *)(iStack_18 + 1);
    uVar21 = (uint)bVar2;
    if (0x26 < unaff_r6) {
      halt_baddata();
    }
    pppppuStack_34[8] = (undefined4 *****)(uint)*(byte *)(uStack_1c + 3);
    unaff_r7 = (undefined4 ******)((int)pppppppuVar5 - (int)pppppuStack_34);
    uVar12 = (uint)*(ushort *)(iStack_18 + 0x18);
    uVar11 = (uint)*(byte *)(uStack_1c + 0x15);
    unaff_r5 = 0;
    uVar7 = uStack_1c;
    if (iStack_18 == 0) goto LAB_2c44d2d0;
    *(char *)(uVar21 + (int)unaff_r7) = (char)iStack_18;
    bVar18 = false;
    if (-1 < (int)(unaff_r6 - 0x27)) {
LAB_2c44d35a:
      if (bVar19 || bVar18 != bVar20) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return CONCAT44(*pppppppuVar17,pppppppuVar5);
    }
    software_interrupt(0xfa);
    pppppuStack_34 = unaff_r7;
    uStack_3c = uVar21;
    pppppppuVar17 = &ppppppuStack_40;
    ppppppuStack_40 = pppppppuVar5;
    uVar7 = uStack_1c - 0xfe;
    *(undefined4 ********)((int)unaff_r7 + -7) = pppppppuVar5;
    *(uint *)((int)unaff_r7 + -3) = uVar21;
    *(uint *)((int)unaff_r7 + 1) = uVar12;
    if (uVar11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(uVar12 + 0x14) = (char)unaff_r7;
    param_4 = (uint)*(ushort *)(uVar11 + 0x2a);
    *(uint *)(param_4 + 0x50) = uVar7;
    if (SBORROW4((int)unaff_r7 + 5,0xf5)) {
      if (uVar21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(uVar12 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      return (ulonglong)uVar12;
    }
    if (0xf4 < (int)unaff_r7 + 5) goto LAB_2c44cf74;
    unaff_r5 = (int)pppppppuVar5 >> 9;
    bVar18 = unaff_r5 < 0;
    bVar19 = unaff_r5 == 0;
    if (((int)pppppppuVar5 >> 8 & 1U) != 0 && !bVar19) {
      coprocessor_load(0xc,in_cr6,unaff_r7);
      bVar20 = false;
      goto LAB_2c44d35a;
    }
    if (bVar18) {
      if (uVar7 == 0) {
        _MasterStackPointer = 0x62;
        *(uint *)(uStack_1c - 0xfa) = uVar21;
        *(undefined4 *)(uStack_1c - 0xf6) = 0;
        *(uint *)(uStack_1c - 0xf2) = param_4;
        *(uint *)(uStack_1c - 0xee) = uVar12;
        *(undefined4 *******)(uStack_1c - 0xea) = unaff_r7;
        software_bkpt(0xfc);
        NMI = bVar2;
        halt_baddata();
      }
      halt_baddata();
    }
  }
  sVar3 = *(short *)(uVar12 + uVar21);
  pppppppuVar5 = pppppppuVar17 + 0x78;
  if (uVar21 != 0) {
    *(char *)(uVar11 + param_4) = (char)unaff_r5;
  }
  puVar8 = (uint *)(uint)*(byte *)(uVar7 + uVar21);
  *puVar8 = uVar21;
  puVar8[1] = (uint)puVar8;
  puVar8[2] = param_4;
  puVar8[3] = (int)sVar3;
LAB_2c44cf74:
  VectorRoundShiftLeft(unaff_d11,8,unaff_d8);
  (*(code *)0x2c44d2ec)(pppppppuVar5,param_4 << 6,pppppppuVar17[0x84]);
  pppppppuVar17[-0x15] = unaff_r7;
  coprocessor_function2(10,7,2,in_cr11,in_cr12,in_cr6);
  pppppppuVar17[-0x2b] = (undefined4 ******)(int)extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

