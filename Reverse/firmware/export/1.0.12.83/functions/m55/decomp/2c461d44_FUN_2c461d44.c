/* FUN_2c461d44 @ 0x2c461d44 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c461900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c461d44(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined2 unaff_r5;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int unaff_r7;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  undefined4 unaff_lr;
  bool bVar18;
  undefined4 in_cr12;
  undefined8 uVar19;
  int in_stack_00000010;
  int in_stack_0000004c;
  undefined4 in_stack_00000158;
  uint in_stack_00000198;
  int in_stack_000002dc;
  int *in_stack_00000334;
  undefined4 uStack_24;
  uint uStack_20;
  
  *(undefined2 *)(param_1 + 0x1a) = unaff_r5;
  uStack_20 = (uint)*(ushort *)(unaff_r7 + 0x2c);
  iVar5 = (int)param_1 >> (param_1 & 0xff);
  *(undefined2 *)(iVar5 + 0x3a) = unaff_r5;
  iVar15 = _LAB_2c461f1c;
  iVar6 = _LAB_2c461808;
  uVar16 = *(char *)(in_stack_00000198 * 2) * 0x10000;
  uVar10 = *(uint *)(_LAB_2c461808 + 4);
  iVar12 = *(int *)(_LAB_2c461808 + 8);
  uVar14 = in_stack_00000198 | _LAB_2c461808 + 0xcU;
  if (_LAB_2c461808 + 0xcU != 0) {
    uVar10 = *(uint *)(iVar5 + -0x33);
    *(char *)(uVar14 * 2) = (char)uVar14;
    if (SBORROW4(iVar5,0x33)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)((uVar10 & ~uVar16) + uVar14) = iVar6 + 0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r8 + -0x3bc) = unaff_lr;
  *(int *)(unaff_r8 + -0x3b8) = iVar12;
  *in_stack_00000334 = iVar5 + -0x33;
  in_stack_00000334[1] = iVar15;
  in_stack_00000334[2] = uVar10;
  in_stack_00000334[3] = 0;
  in_stack_00000334[4] = iVar12;
  in_stack_00000334[5] = 0x2c461e83;
  in_stack_00000334[6] = uVar10 >> 0x12;
  in_stack_00000334[7] = uVar14;
  *(ushort *)(uVar16 + 0x2a) = (ushort)(uVar10 >> 0x12);
  software_interrupt(0x31);
  iVar6 = uVar14 * 0x100000;
  if (-1 < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(uRam2c461e9d + 0x1a) = 0;
  *(undefined1 *)(iVar6 + 0x11) = 0xa5;
  iVar15 = *(int *)(iVar6 + 4);
  uVar1 = *(ushort *)((int)in_stack_00000334 + iVar15 + 0x43);
  uStack_24 = param_4;
  if (!SCARRY4((int)&stack0x00000044,0x89)) {
    *(short *)((iVar15 >> 0x15) + 0x28) = (short)iVar15;
    iVar15 = _LAB_2c461a9c;
    sVar3 = *(short *)(&stack0x000002d0 + uVar1);
    software_hlt(0x3c);
    if (iVar6 + 0x4f < 0) {
      coprocessor_load(6,in_cr12,&uStack_24);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    software_bkpt(0x59);
    *(undefined2 *)(_LAB_2c461a9c + 2) = 0x18d0;
    piVar4 = _LAB_2c461a7c;
    *_LAB_2c461a7c = (int)sVar3;
    piVar4[1] = (int)&stack0x00000234;
    uVar19 = FUN_2c603c40(iVar15,0x6d,(int)sVar3,0x2c4618d0);
    return uVar19;
  }
  if (-0x8a < (int)&stack0x00000044) {
    *(uint *)((uint)*(ushort *)(in_stack_000002dc * 2) * 0x2000000 + 0xb4) =
         (uint)*(ushort *)(in_stack_000002dc * 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  enableFIQinterrupts();
  enableDataAbortInterrupts();
  *(int *)((iVar6 + 8) * 2) = iVar15 >> 5;
  iVar5 = *(int *)((in_stack_000002dc + -0xa5) * 0x10 + 0x10);
  uVar10 = _LAB_2c46186c;
  uVar14 = iVar15 >> 5;
  while( true ) {
    cVar2 = *(char *)(uVar14 + iVar5);
    uStack_20 = *(uint *)(uVar10 + 4);
    uVar10 = uVar10 >> (uVar10 & 0x1f) | uVar10 << 0x20 - (uVar10 & 0x1f);
    bVar18 = SCARRY4(uVar14,0xb2);
    uVar16 = uVar14 + 0xb2;
    if (uStack_20 + (uVar14 <= uStack_20) != 0) break;
    *(uint *)(uStack_20 + 0x58) = uStack_20;
    enableFIQinterrupts();
    iVar5 = uVar16 * 0x800;
    *(char *)(cVar2 + 0xc) = (char)uStack_20;
    uVar14 = uVar16;
    if (iVar5 < 0 != bVar18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(short *)(uVar14 + 0xdc) = (short)in_stack_00000158;
  in_stack_0000004c = iVar6 + 8;
  uVar7 = FUN_2c4f221c();
  uVar10 = uVar7;
  if (-1 < (int)uVar7) {
    puVar9 = puRam0000011b;
    if (puRam0000011b[2] != 0) {
      iVar6 = 0;
      uVar17 = 0;
      do {
        if ((int)(uRam000000fb << 0x1f) < 0) {
          uStack_20 = *(uint *)(puVar9[1] + iVar6 + 4);
          uStack_24 = 0;
          uVar10 = FUN_2c4f221c(uVar16);
          puVar9 = puRam0000011b;
          if (((int)uVar10 < 0) && (uVar10 != 0xfffffffe)) goto LAB_2c4f4068;
        }
        if ((int)(uRam000000fb << 0x1e) < 0) {
          if (*(uint *)(uVar14 + 0x126) < *(uint *)(puVar9[1] + iVar6 + 8)) {
            uVar10 = 0xffffffe4;
            goto LAB_2c4f4068;
          }
          uRam000000fb = uRam000000fb | 0x10000;
        }
        uVar17 = uVar17 + 1;
        iVar6 = iVar6 + 0xc;
      } while (uVar17 < puVar9[2]);
    }
    uVar17 = *puVar9;
    if ((uVar17 != 0) ||
       (uVar17 = FUN_2c47245c(2,*(undefined4 *)(*(int *)(uVar14 + 0x11a) + 0x28)), uVar17 != 0)) {
      uRam00000117 = uVar17;
      FUN_2c674268(uVar17,0xff,*(undefined4 *)(*(int *)(uVar14 + 0x11a) + 0x28));
      uRam0000010b = 0xffffffff;
      uVar8 = extraout_r1_00;
      if (uVar7 >> 0x14 == 0x201) {
        uVar8 = 0;
        uRam000000f3 = 0xfffffffe;
        uRam000000f7 = uVar7 & 0x3ff;
        uRam0000010b = 0xfffffffe;
        uRam000000fb = uRam000000fb | 0x100000;
        uRam0000010f = 0;
        uRam00000113 = *(undefined4 *)(*(int *)(uVar14 + 0x11a) + 0x28);
        if (uRam000000f7 != 0) {
          uStack_24 = 0;
          uStack_20 = uRam00000117;
          uVar19 = FUN_2c4f221c(uVar16);
          uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
          uVar10 = (uint)uVar19;
          if ((int)(uint)uVar19 < 0) goto LAB_2c4f4068;
        }
      }
      uVar10 = 0;
      goto LAB_2c4f4048;
    }
    uVar10 = 0xfffffff4;
    uRam00000117 = uVar17;
  }
LAB_2c4f4068:
  uRam000000fb = uRam000000fb | 0x80000;
  func_0x2c4f3ce8(uVar16,0xcb);
  puVar11 = *(undefined4 **)(uVar14 + 0xda);
  uVar8 = extraout_r1;
  if (puVar11 != (undefined4 *)0x0) {
    if (puVar11 == (undefined4 *)0xcb) {
      puVar13 = (undefined4 *)(uVar14 + 0xda);
      puVar11 = (undefined4 *)0xcb;
    }
    else {
      do {
        puVar13 = puVar11;
        puVar11 = (undefined4 *)*puVar13;
        if (puVar11 == (undefined4 *)0x0) {
          if (*puRam0000011b != 0) goto LAB_2c4f4048;
          goto LAB_2c4f40fa;
        }
      } while (puVar11 != (undefined4 *)0xcb);
    }
    *puVar13 = *puVar11;
  }
  if (*puRam0000011b == 0) {
LAB_2c4f40fa:
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(2,uRam00000117);
  }
LAB_2c4f4048:
  if (*_LAB_2c4f41e0 != in_stack_00000010) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return CONCAT44(uVar8,uVar10);
}

