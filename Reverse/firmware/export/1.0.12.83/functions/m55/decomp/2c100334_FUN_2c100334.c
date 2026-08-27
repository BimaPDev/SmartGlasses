/* FUN_2c100334 @ 0x2c100334 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1004a4) */
/* WARNING: Removing unreachable block (ram,0x2c100316) */
/* WARNING: Removing unreachable block (ram,0x2c100202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c100334(uint param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  short sVar13;
  undefined4 uVar14;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  uint **ppuVar15;
  undefined4 unaff_lr;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined8 in_d4;
  undefined8 in_d30;
  uint in_stack_000000bc;
  uint uStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  uint uStack_24;
  uint *puStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  
  ppuVar15 = &puStack_18;
  puStack_18 = param_2;
  if (param_1 == 0) {
    *(char *)(unaff_r7 + 0x19) = (char)param_4;
    piVar3 = (int *)((int)param_3 * 0x100);
    if (piVar3 != (int *)0x0 && (int)piVar3 < 0 == (bool)in_OV) {
      coprocessor_load(5,in_cr0,unaff_r10 + -0xb8);
      if (((uint)param_3 & 0x1000000) != 0 && piVar3 != (int *)0x0) {
        uVar11 = 0x2c100364;
        param_3 = *(undefined4 **)((uint)ppuVar15 & 0xc);
        puVar12 = (uint *)0x5400000;
        uVar4 = _DAT_2c100328;
      }
      else {
        uVar4 = 0x2e;
        if (in_OV == '\0') {
          VectorShiftRightAccumulate(in_d4,in_d30,7);
          puVar9 = (undefined4 *)param_3[1];
          iVar5 = param_3[2];
          *puVar9 = *param_3;
          puVar9[1] = iVar5;
          puVar9[2] = 0x2e;
          puVar9[3] = unaff_r7;
          puVar9 = puVar9 + 4;
          piVar3[8] = iVar5;
          iVar5 = _DAT_2c0fff74;
          uVar11 = ((uint)param_3 & 0xffffff) >> 2;
          if ((((uint)param_3 & 0xffffff) >> 1 & 1) == 0 || uVar11 == 0) {
            coprocessor_moveto(2,7,4,puVar9,in_cr0,in_cr1);
            uVar11 = unaff_r7 >> 0x12;
            iVar6 = _DAT_2c0fff74 * 0x2000;
            uVar4 = (uint)*(ushort *)(iVar6 + 0x22);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar7 = *piVar3;
              *(short *)(uVar4 + iVar7) = (short)iVar7;
              *(int *)iVar7 = iVar7;
              *(int *)(iVar7 + 4) = iVar5;
              iVar5 = iVar5 * 0x2000000;
              *(int *)(iVar5 + 0x2c) = iVar5;
              *(undefined4 *)(uVar11 - 4) = unaff_lr;
              *(undefined4 *)(uVar11 - 8) = in_r12;
              *(undefined4 *)(uVar11 - 0xc) = unaff_r11;
              *(int *)(uVar11 - 0x10) = unaff_r8;
              *(uint *)(uVar11 - 0x14) = uVar11;
              *(int *)(uVar11 - 0x18) = iVar6;
              software_bkpt(0xe0);
              uVar11 = _MasterStackPointer << 10;
              iVar5 = _MasterStackPointer + _HardFault;
              iVar6 = iVar6 + iVar5;
              _DAT_000000fc = (undefined2)_DAT_2c1000b0;
              puVar9 = (undefined4 *)(uint)*(ushort *)(*(short *)(iVar5 + _NMI) + iVar5);
              coprocessor_load(2,in_cr9,(uint)*(byte *)(_Reset + 0x1d) + unaff_r8 + -0x138);
              uVar4 = _DAT_2c1000b0;
            }
            puVar9[7] = uVar4;
            *(short *)(iVar6 + uVar11) = (short)uVar11;
            *(int *)(iVar5 * 0x2000) = iVar5 * 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          software_bkpt(0xfe);
          puVar12 = (uint *)(uVar11 + 0x10);
          uVar4 = (int)puVar12 >> 0xd;
          param_3 = (undefined4 *)(*(int *)(uVar11 + 4) << 2);
        }
        else {
          puVar12 = (uint *)0x2c10052c;
        }
        uVar11 = uVar4 << 0xc;
      }
      uVar2 = *(ushort *)(param_3 + 2);
      *(uint **)(uVar11 + 0x68) = puVar12;
      uVar10 = *(uint *)(uVar2 + 0x30);
      *(uint *)(uVar10 + 0x30) = uVar4;
      *puVar12 = (uint)uVar2;
      puVar12[1] = uVar10;
      puVar12[2] = uVar4;
      puVar12[3] = uVar11;
      *(char *)(uVar11 * 0x2000000 + 0x1f) = (char)((int)uVar10 >> 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar13 = (short)(((uint)param_3 & 0xffffff) << 6);
    *(char *)(piVar3 + -1) = (char)(piVar3 + -1);
    puStack_2c = (undefined4 *)*param_2;
    uStack_30 = (int)param_2 - 0x79;
    iStack_28 = uStack_30 * 2;
    in_stack_000000bc = uRam00000058;
    if ((uStack_30 & 0x80000000) == 0) goto LAB_2c1003a8;
    uStack_24 = uRam00000058;
    ppuVar15 = (uint **)&uStack_30;
    in_stack_000000bc = (uint)puStack_2c >> 10;
    if (puStack_2c == (undefined4 *)0x0) {
      *(char *)(unaff_r7 + 0x19) = (char)iStack_28;
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x25,0x2c100366);
      puStack_14 = param_3;
      uStack_10 = param_4;
      (*pcVar1)();
    }
  }
  else {
    software_bkpt(0xd8);
    iStack_28 = (param_1 >> 10) << 0x13;
    sVar13 = 0xc;
    puStack_2c = (undefined4 *)(in_stack_000000bc << 0x17);
  }
  puStack_2c = (undefined4 *)((int)puStack_2c - 0x21);
  unaff_r7 = (uint)*(short *)(unaff_r7 * 2);
LAB_2c1003a8:
  ppuVar15[0x41] = (uint *)0xe400000;
  if (SBORROW4(unaff_r7,0x39)) {
    puVar12 = (uint *)(in_stack_000000bc >> (in_stack_000000bc & 0xff));
    ppuVar15[2] = *(uint **)(iStack_28 + 0xc);
    uVar8 = *puStack_2c;
    uVar14 = puStack_2c[2];
    uVar4 = *puVar12;
    uVar11 = puVar12[1];
    *(uint *)(unaff_r7 - 0x39) = uVar4;
    *(undefined4 *)(unaff_r7 - 0x35) = 0x2c1004bc;
    *(undefined4 *)(unaff_r7 - 0x31) = uVar8;
    *(uint *)(unaff_r7 - 0x2d) = uVar11;
    *(undefined4 *)(unaff_r7 - 0x29) = uVar14;
    uVar4 = uVar4 >> 8;
    uRam2c1004c4 = (undefined2)*(undefined4 *)(uVar4 * 0x1000000 + 0x60);
    if ((uVar4 & 0x100) == 0) {
      *(undefined4 *)(uVar11 + 0x2c1004bc) = 0x2c1004bc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = *(int *)(in_stack_000000bc + 0x6c);
  *(undefined1 *)((int)(unaff_r7 - 0x39) + iStack_28) = 0;
  if ((in_stack_000000bc & 0x7ffff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((iVar5 >> 0x20) + 0x3e) = 0;
  *(short *)(in_stack_000000bc * 0x8000 + 0xc) = sVar13 + (short)in_stack_000000bc;
  iVar5 = _DAT_2c100720;
  *(int *)(_DAT_2c10064c + 0x28) = _DAT_2c10064c >> 7;
  *_DAT_2c1008bc = 0;
  uVar8 = coprocessor_movefromRt(4,5,4,in_cr4,in_cr6);
  *(short *)(iVar5 + 0x30) = (short)((int)(in_stack_000000bc * 0x8000) >> 0x1d);
  return CONCAT44(uVar8,*ppuVar15);
}

