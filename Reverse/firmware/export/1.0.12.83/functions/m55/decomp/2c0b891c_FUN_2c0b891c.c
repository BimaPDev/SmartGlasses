/* FUN_2c0b891c @ 0x2c0b891c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b891c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint unaff_r4;
  uint uVar5;
  int *piVar6;
  int *unaff_r5;
  short sVar7;
  uint uVar8;
  int unaff_r6;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint unaff_r7;
  uint uVar13;
  int iVar14;
  uint unaff_lr;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined8 in_d5;
  undefined8 in_d19;
  
  do {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r4;
    *(undefined4 **)((int)register0x00000054 + -0x10) = param_3;
    *(uint *)((int)register0x00000054 + -0x14) = param_2;
    *(undefined4 *)((int)register0x00000054 + -0x18) = param_1;
    param_1[2] = param_1;
    uVar8 = _DAT_2c0b8b8c;
    if (-1 < (int)(unaff_r7 - 0x62)) {
      *(short *)((unaff_r7 - 0x62) * 2) = (short)unaff_r4;
      uVar5 = *(uint *)(unaff_r7 - 0x22);
      puVar2 = (undefined4 *)*param_3;
      unaff_r5 = (int *)param_3[2];
      uVar13 = param_3[3] - 0xc6;
      sVar7 = (short)unaff_r6 + -0x6a;
LAB_2c0b8890:
      *(short *)(uVar5 + 0x1a) = sVar7;
      do {
        *(char *)((int)unaff_r5 + uVar13) = (char)uVar13;
        iVar14 = uVar13 - 0x10;
        *(int **)((int)register0x00000054 + 0x33c) = unaff_r5;
        uVar13 = uVar13 - 0xa3;
      } while (SBORROW4(iVar14,0x93));
      uVar5 = (uint)*(byte *)((int)puVar2 * 2);
      uVar8 = *(uint *)(*(int *)((int)register0x00000054 + 0x78) + 0x44);
      puVar3 = (uint *)(uint)*(byte *)(uVar8 + 0x17);
      *(ushort *)(uVar8 + 0x10) = (ushort)*(byte *)((int)puVar2 * 2);
      uRam0000004c = (uint)*(byte *)(unaff_r5 + 7);
      uVar13 = 0;
      while( true ) {
        puVar3[7] = (uint)unaff_r5;
        *puVar3 = uVar8;
        puVar3[1] = (uint)puVar3;
        puVar3[2] = (uint)unaff_r5;
        puVar3[3] = uVar13;
        coprocessor_store(0,in_cr4,uVar8);
        uVar13 = puVar3[4];
        if (-1 < *(int *)(uVar13 + 0xc) + -0xe6) {
          *(short *)((uVar5 & uVar8) + 0x18) = (short)(uVar5 & uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(*(int *)(uVar13 + 0xc) + -0x109) = 0x74;
        puVar3 = (uint *)(uint)*(ushort *)(uVar13 - 0x1b6);
        iVar14 = *(int *)(uVar13 - 0x194);
        unaff_r5 = (int *)0x0;
        uVar5 = (uint)*(byte *)(uVar13 - 0x1e1);
        if (uVar13 == 0x288) break;
        *puVar3 = uVar5;
        puVar3[1] = (uint)((int)register0x00000054 + 0x2ec);
        puVar3[2] = 0;
        uRam2c0b88a0 = 0;
        uVar8 = *(uint *)(iVar14 + 0x20) & uVar5;
        uVar13 = uVar13 - 0x333;
        coprocessor_loadlong(0xe,in_cr3,uVar5 - 0x3ac);
        uVar5 = *(int *)((int)register0x00000054 + 0xec) - 0x33;
        *(undefined4 **)((int)register0x00000054 + 0x2ec) =
             (undefined4 *)((int)register0x00000054 + 0xe4);
        *(uint *)((int)register0x00000054 + 0x2f0) = uVar8;
        *(uint *)((int)register0x00000054 + 0x2f4) = uVar5;
        *(int *)((int)register0x00000054 + 0x2f8) = *(int *)((int)register0x00000054 + 0xec) + -0x8d
        ;
        puVar3 = (uint *)((int)register0x00000054 + 0x2fc);
      }
      *(undefined2 *)((int)register0x00000054 + 0x304) = 0xffb0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = unaff_r7 - 0x295 & (uint)param_1;
    uVar5 = unaff_r4 & (uint)param_3;
    if ((int)uVar5 < 0 != SBORROW4((int)param_3,0x45)) {
      uVar9 = *(uint *)((int)register0x00000054 + 0x2f4) & (uint)unaff_r5;
      sVar7 = (short)uVar9 + -0x71;
      puVar2 = param_3;
      if (0x70 < uVar9) {
        puVar3 = (uint *)(int)*(short *)(param_2 + uVar9 + (int)unaff_r5);
        uVar13 = uVar5 ^ 0xa4000000;
        iVar14 = puVar3[2] * 0x8000;
        uVar10 = (uint)*(byte *)((int)puVar3 + 0xe);
        uVar9 = *(uint *)((int)register0x00000054 + 0x25c);
        puVar11 = (uint *)(uVar10 - 0x153);
        if (uVar13 == 0) {
          uVar13 = (uint)puVar11 >> 0x14;
          uRam00000048 = uVar5;
          *puVar11 = uVar13;
          *(uint *)(uVar10 - 0x14f) = param_2;
          *(uint *)(uVar10 - 0x14b) = uVar8;
          *(uint *)(uVar10 - 0x147) = uVar9;
          *(uint **)(uVar10 - 0x143) = puVar11;
          *(int *)(uVar10 - 0x13f) = iVar14 + -0x227;
          *puVar3 = uVar13;
          puVar3[1] = uVar9;
          puVar3[2] = (uint)puVar11;
          *(undefined4 *)((int)register0x00000054 + 0x38) = 0xe5;
          *(uint *)((int)register0x00000054 + 0x294) = uVar10 - 0x186;
          *(byte *)(uVar8 + 0x11) = (byte)uVar5 & (byte)uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar8 = (uint)puVar11 & uVar9;
        if ((int)uVar8 < 0) {
          uVar10 = (uint)*(ushort *)(uVar9 + iVar14);
          iVar14 = 0x2c0b8750;
        }
        else {
          uVar8 = uVar8 - 0xe8;
          uVar10 = _DAT_2c0b8b8c;
        }
        puVar11 = (uint *)(uVar8 - 0xe7);
        *(short *)(uVar9 + 0xc) = (short)puVar11;
        *puVar11 = param_2;
        *(uint *)(uVar8 - 0xe3) = uVar10;
        *(uint **)(uVar8 - 0xdf) = puVar3;
        *(uint *)(uVar8 - 0xdb) = uVar5;
        *(uint *)(uVar8 - 0xd7) = uVar9;
        *(uint **)(uVar8 - 0xd3) = puVar11;
        *(byte *)(uVar10 + 1) = (byte)uVar5;
        iVar12 = iVar14 + -0x21b;
        uVar4 = uVar5;
        if (uVar13 == 0) {
          uVar4 = *(uint *)((int)puVar11 * 2);
          *(undefined4 *)((int)register0x00000054 + 0xf4) = 0;
          puVar3 = (uint *)((uint)puVar3 & uVar4);
          if (-1 < (int)puVar3) goto LAB_2c0b8150;
          FloatVectorCompareEqual(in_d19,in_d5,2);
          uVar10 = param_2 << 0x16;
          puVar11 = (uint *)(uVar8 - 0x1f7);
          *(short *)(uVar4 + 0x26) = (short)uVar5;
          *(undefined1 *)(iVar14 + -0x389) = 0;
          iVar12 = iVar14 + -0x43e;
          _MasterStackPointer = 0;
          _Reset = puVar3;
          _NMI = uVar4;
          _HardFault = puVar11;
        }
        *(char *)(param_2 + 0x17) = (char)uVar9;
        uVar4 = uVar4 & (uint)puVar3;
        if (uVar4 == 0 || (int)uVar4 < 0 != SBORROW4(iVar12 + -0x18d,0xf8)) {
          iVar14 = (int)*(short *)(uVar4 + (uVar13 & uVar9));
          uVar1 = *(ushort *)(iVar14 + 0x16);
          *(int *)(iVar14 + (uint)uVar1) = iVar12 + -0x3d9;
          *(ushort *)(iVar14 + 0x36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        coprocessor_storelong(0,in_cr4,*(undefined4 *)(uVar9 + 0xc));
        *(uint *)((uVar10 + 0x23 & (uint)puVar11) + 8) =
             *(uint *)(uVar9 + 4) & (uint)puVar3 & param_2;
LAB_2c0b8150:
        software_bkpt(0x66);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c0b8890;
    }
    piVar6 = (int *)*unaff_r5;
    iVar14 = unaff_r5[1];
    puVar2 = (undefined4 *)*param_1;
    param_2 = param_1[1];
    uVar8 = param_1[2];
    uVar5 = param_1[3];
    unaff_r4 = param_1[4];
    unaff_r7 = param_1[5];
    *(uint *)((int)piVar6 + unaff_r7) = unaff_r4;
    param_3 = (undefined4 *)(uVar8 & uVar5 & param_2);
    unaff_r6 = iVar14 + -0x3e;
    unaff_lr = unaff_r7 & 0xc2c2c2c2;
    param_1 = puVar2;
    unaff_r5 = piVar6;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  } while( true );
}

