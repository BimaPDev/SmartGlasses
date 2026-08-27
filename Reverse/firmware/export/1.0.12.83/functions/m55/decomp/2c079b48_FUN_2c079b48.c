/* FUN_2c079b48 @ 0x2c079b48 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c079ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c079b48(int param_1)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int extraout_r3;
  undefined2 *puVar11;
  int iVar12;
  uint *unaff_r4;
  int *piVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined2 *puVar19;
  int iVar20;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  uint unaff_lr;
  bool bVar21;
  bool bVar22;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined2 in_stack_0000007c;
  int iStack000001b4;
  int in_stack_00000200;
  int in_stack_00000268;
  int *in_stack_0000026c;
  
  uVar6 = *unaff_r4;
  uVar10 = unaff_r4[4];
  *(uint *)uVar6 = uVar6;
  *(uint *)(uVar6 + 4) = uVar10;
  *(uint **)(uVar6 + 8) = unaff_r4 + 8;
  *(uint *)(uVar6 + 0xc) = uVar6 >> 0x13;
  coprocessor_function(2,0,0,in_cr0,in_cr0,in_cr2);
  piVar13 = (int *)(param_1 * 8 >> 1);
  iVar4 = *piVar13;
  iVar7 = piVar13[1];
  iVar20 = piVar13[5];
  uVar6 = (uint)piVar13[4] >> 0x1b;
  puVar16 = (uint *)(uVar6 * 2);
  *(byte *)(iVar20 + 0x1a) = (byte)((uint)piVar13[4] >> 0x1b);
  piVar13 = piRam2c079dfc;
  uVar6 = uVar6 * 0x8000;
  if (((uint)piRam2c079dfc >> 3 & 1) == 0 || (uint)piRam2c079dfc >> 4 == 0) {
    uVar6 = (int)puVar16 * uVar6;
    if (((uint)piRam2c079dfc & 0x800) == 0 || ((uint)piRam2c079dfc & 0x7ff) == 0) {
      *(uint *)(iVar7 + 0x34) = uVar6;
      if ((uVar6 & 0x800000) != 0 && (uVar6 & 0x7fffff) != 0) {
        halt_baddata();
      }
      if (uVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iStack000001b4 = (int)piVar13 << 0x13;
      iVar4 = iVar4 >> 0xc;
      iVar20 = *(int *)(iVar4 + 0x8f);
      *(short *)(iVar20 + (int)puVar16) = (short)(iVar4 + 0x23);
      iVar20 = iVar20 >> 0x18;
      *(char *)((int)in_stack_0000026c + 0xd) = (char)(iVar4 + 0x23);
      puVar18 = &stack0x000002fc;
      if (in_stack_00000268 == 0) {
        *(uint *)(in_stack_00000200 + 0x74) = *(ushort *)((iVar7 >> 0x18) + 0x13) + 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = iVar20 * 2;
      piVar13 = (int *)(int)*(short *)(iVar20 * 2);
      *(short *)(uVar6 + 0x10) = (short)(char)((uint)iVar7 >> 0x18);
      if ((int)uVar6 < 0 == SCARRY4(iVar4,0x23)) {
        iVar4 = func_0x2b0878f0(*(undefined1 *)(*(short *)(iVar7 >> 0x18) + 0x1b));
        puVar18 = (undefined1 *)(iVar20 * 0x400 + -0xc9);
        iVar20 = iVar4 + 6;
        uVar6 = (uint)*(ushort *)(extraout_r3 + 0x36);
      }
      *(int *)(puVar18 + uVar6) = iVar20;
      _MasterStackPointer = (int)sRam00000041;
      puVar14 = (undefined2 *)(_MasterStackPointer + 1);
      iVar4 = 0x4a;
      *(int *)(_DAT_2c079fc4 + 0x30) = _DAT_2c079fc4;
      piVar5 = (int *)0x0;
      uVar6 = 0;
      do {
        puVar11 = (undefined2 *)((int)piVar5 >> 0x18);
        uVar10 = (uint)puVar11 >> 0xf;
        iVar4 = iVar4 + -0xe0;
        *(char *)(puVar14 + 0xc) = (char)((int)puVar14 << 4);
        puVar15 = puVar14;
        if (uVar6 == 0xeb) {
          *piVar13 = iVar4;
          piVar13[1] = (int)puVar11;
          piVar13[2] = (int)puVar14;
          piVar13[3] = (int)piVar13;
          uRam00000086 = (undefined2)uVar10;
          uVar8 = (int)puVar11 * 2;
          puVar19 = (undefined2 *)(_DAT_2c079fb4 + -0xa7);
          bVar22 = SBORROW4(iVar4,0xc9);
          puVar15 = (undefined2 *)((int)uVar10 >> 8);
          bVar21 = puVar15 != (undefined2 *)0x0;
          iVar7 = *(int *)(uVar8 + 0x6c);
          *(short *)(iVar7 + 0x18) = (short)(char)((uint)piVar5 >> 0x18);
          uVar6 = uVar8;
          if (!bVar22) {
            puVar11 = (undefined2 *)(iVar7 + iVar4);
            puVar19 = (undefined2 *)(uint)*(ushort *)(uVar8 + 0x30);
            puVar15 = puVar14 + -1;
            *(undefined2 **)(iVar7 + 0x68) = puVar11;
            uVar6 = 0x61;
            iVar4 = (int)*(char *)((int)puVar11 + 0x61);
            uRam00000031 = uVar8;
            *(undefined2 **)(puVar11 + 10) = puVar19;
          }
          if (!bVar22 || bVar21) {
            *(int *)(puVar15 + 2) = iVar7;
            puVar14 = (undefined2 *)(int)*(short *)(iVar4 + *(int *)(puVar19 + 0x14));
            uVar10 = (uint)*(byte *)(*(int *)(puVar19 + 0x14) + 0x1b);
            puVar15 = (undefined2 *)(iVar7 * 2);
            goto LAB_2c079d8c;
          }
        }
        else {
LAB_2c079d8c:
          puVar11 = puVar15;
          *(short *)(uVar10 * 0x1000 + 0x18) = (short)(uVar10 * 0x1000);
          *puVar11 = (short)puVar11;
          *(undefined2 **)(puVar14 + 0x20) = puVar14;
          puVar19 = (undefined2 *)0x1;
          iVar7 = (int)puVar11 << 0xc;
          coprocessor_load(1,in_cr3,1);
          uVar6 = (uint)puVar11 & 0x21;
          iVar4 = iRam2c079e64;
          puVar15 = puVar11;
        }
        *puVar19 = (short)puVar11;
        iVar20 = iVar7 + 0x21;
        if (iVar20 != 0) {
          iVar4 = uVar6 + 0x130043;
          puVar15 = *(undefined2 **)(puVar19 + 2);
        }
        coprocessor_function(2,0xe,0,in_cr0,in_cr0,in_cr4);
        iVar12 = (uVar6 + 0x30) - (int)puVar15;
        coprocessor_function2(0,0xf,6,in_cr0,in_cr13,in_cr1);
        iVar4 = iVar4 + 0xe0;
        piVar9 = (int *)&stack0x00000070;
        *(int *)(iVar20 + (int)piVar9) = (int)puVar15 << 1;
        puVar14 = (undefined2 *)(iVar20 >> 0x18);
        piVar5 = (int *)(int)*(short *)(iVar12 * 2);
        *(char *)((int)puVar14 + 5) = (char)((int)puVar15 << 1);
        piVar13 = (int *)((int)piVar5 >> 0x18);
        in_stack_0000007c = (short)piVar9;
        puVar18 = (undefined1 *)((int)puVar15 + iVar7 + -400);
        piVar17 = piVar9;
        if (puVar18 == (undefined1 *)0x0) goto LAB_2c079e70;
        if ((int)((int)puVar15 + iVar7 + -0xb8) < 0xd8) {
          piVar5 = (int *)(int)*(short *)((int)piVar9 + iVar12);
          piVar17 = (int *)&stack0x0000035c;
          do {
            bVar2 = *(byte *)((int)piVar13 + (int)piVar5);
            uVar6 = bVar2 - 0x129;
            bVar22 = uVar6 == 0;
            puVar14 = *(undefined2 **)((int)piVar9 + (int)puVar14);
            unaff_r8 = unaff_r8 + 0x25c;
            coprocessor_storelong(0xe,in_cr8,unaff_r8);
            *piVar5 = iVar4;
            piVar5[1] = iVar12;
            piVar5[2] = (int)puVar14;
            piVar5[3] = uVar6;
            piVar5[4] = (int)piVar13;
            piVar5 = piVar5 + 5;
          } while ((int)(bVar2 - 0xe8) < 0x41);
        }
        else {
          while (piVar5 == (int *)0xffffff28) {
            bVar21 = puVar14 == (undefined2 *)&DAT_00000070;
            *(int **)(iVar4 + iVar12) = piVar9;
            while( true ) {
              if (bVar21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              piVar5 = (int *)0x0;
              *piVar9 = (int)puVar18;
              piVar17 = (int *)((int)puVar18 * 0x200000);
              iVar4 = *piVar17;
              puVar14 = (undefined2 *)piVar17[1];
              piVar13 = (int *)piVar17[2];
              piVar17 = piVar17 + 3;
LAB_2c079e70:
              if ((uint)puVar14 >> 0x11 == 0) {
                uVar6 = (uint)puVar14 >> 1;
                bVar21 = uVar6 == 0;
                piVar9 = (int *)0x0;
                goto LAB_2c079ed6;
              }
              iVar7 = iVar12 + 0x3e;
              *(char *)(iVar4 + 0x1f) = (char)piVar13;
              puVar14 = (undefined2 *)piVar17[2];
              puVar18 = (undefined1 *)piVar17[3];
              piVar5 = (int *)(*piVar17 + unaff_r10);
              sVar3 = *(short *)(iVar4 + iVar7);
              piVar9 = (int *)(int)sVar3;
              iVar12 = 0;
              if (iVar7 == 0) break;
              coprocessor_load(9,in_cr9,puVar18 + -0x238);
              if (((uint)piVar9 & 0xf) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (puVar14 != (undefined2 *)0x0) {
                iVar4 = ((uint)piVar9 & 0xf) * 0x100000;
                coprocessor_load(5,in_cr9,unaff_r11 + -0x2f8);
                coprocessor_store(1,in_cr0,iVar4 + -0x278);
                coprocessor_load(5,in_cr0,unaff_r9 + -0x394);
                *(short *)(iVar4 + -0x268) = sVar3;
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xd8,0x2c07a240);
                (*pcVar1)();
              }
              bVar21 = true;
              if (((uint)piVar9 & 0xf) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar12 = 0;
            }
          }
          piVar13 = *(int **)(puVar18 + 4);
          piVar5 = (int *)*piVar13;
          piVar9 = (int *)piVar13[1];
          iVar4 = piVar13[2];
          iVar12 = piVar13[3];
          piVar17 = (int *)piVar13[4];
          uVar6 = piVar13[5];
          piVar13 = (int *)piVar13[6];
          bVar21 = false;
LAB_2c079ed6:
          puVar14 = (undefined2 *)0x2c079f4c;
          *(short *)((int)piVar13 + 6) = (short)iVar12;
          bVar22 = false;
          if (bVar21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        *(short *)((int)piVar17 + 6) = (short)piVar5;
        if (bVar22) {
          *piVar5 = (int)piVar5;
          piVar5[1] = iVar4;
          piVar5[2] = iVar12;
          piVar5[3] = 0x2c07a11e;
          piVar5[4] = (int)piVar13;
          *piVar9 = (int)piVar5;
          piVar9[1] = iVar4;
          piVar9[2] = iVar12;
          piVar9[3] = 0x2c07a11e;
          piVar9[4] = (int)piVar13;
          software_interrupt(0xfe);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while( true );
    }
  }
  else {
    iVar20 = in_r12 + ((int)unaff_lr >> 0x19);
    *puVar16 = (uint)piRam2c079dfc >> 4;
    puVar16[1] = (uint)in_stack_0000026c;
    puVar16[2] = (uint)puVar16;
    puVar16[3] = uVar6;
    *in_stack_0000026c = iVar4;
    in_stack_0000026c[1] = iVar7;
    in_stack_0000026c[2] = (int)piVar13;
    in_stack_0000026c[3] = (int)puVar16;
    in_stack_0000026c[4] = in_r12 + (unaff_lr >> 0x15);
    in_stack_0000026c = in_stack_0000026c + 5;
  }
  *piVar13 = iVar7;
  piVar13[1] = (int)piVar13;
  piVar13[2] = (int)in_stack_0000026c;
  piVar13[3] = in_r12 + unaff_lr * 0x20000;
  piVar13[4] = iVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

