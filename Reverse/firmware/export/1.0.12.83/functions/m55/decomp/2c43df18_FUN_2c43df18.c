/* FUN_2c43df18 @ 0x2c43df18 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43df18(int param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_r2;
  uint *extraout_r2_00;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  int unaff_r5;
  int iVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int unaff_r7;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_r8;
  code *UNRECOVERED_JUMPTABLE;
  code *unaff_lr;
  bool bVar12;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr14;
  undefined8 uVar13;
  undefined4 in_stack_00000074;
  int in_stack_000001b0;
  int in_stack_000002d8;
  
  uVar10 = unaff_r7 + 0xeb;
  if (0x1a < param_3) {
    *(char *)(unaff_r6 + 10) = (char)uVar10;
    iVar9 = *(int *)(unaff_lr + 0x44);
    puVar4 = unaff_r4;
    if (param_3 < 0x3a) {
      *unaff_r4 = unaff_lr;
      unaff_r4[1] = param_2;
      unaff_r4[2] = uVar10;
      *(short *)((int)unaff_r4 + param_1 + 0xc) = (short)uVar10;
      *(int *)(param_1 + 0x28) = param_1;
      if ((uVar10 & 0x200000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar5 = *(int **)(uVar10 * 0x800 + 0x44);
      iVar9 = *piVar5;
      iVar7 = piVar5[1];
      param_2 = (int *)piVar5[3];
      unaff_r4 = (undefined4 *)(piVar5[4] << 0x1f);
      unaff_lr = (code *)(iVar7 >> 9);
      *(char *)(iVar7 + 5) = (char)iVar7;
      param_2[0x13] = iVar9;
      coprocessor_moveto(0xb,1,4,unaff_r8,in_cr14,in_cr7);
      *param_2 = (int)unaff_r4;
      param_2[1] = param_1;
      param_2[2] = (int)param_2;
      puVar4 = _LAB_2c43e12c;
    }
    uVar13 = (*unaff_lr)(unaff_r4,iVar9);
    *(char *)((int)((ulonglong)uVar13 >> 0x20) + 10) = (char)param_2;
    *(undefined4 **)((int)uVar13 + 0x20) = puVar4;
    *(char *)(extraout_r2 + 8) = (char)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 == 0x1b) {
    iVar9 = 0;
    if (param_1 != 0) {
      puVar4 = *(undefined4 **)(unaff_r5 + in_stack_000002d8);
      iVar9 = (int)(char)((char)in_stack_000002d8 + -0x66);
      *(undefined2 *)((int)puVar4 + 0xe) = 0xd80;
      uVar11 = *(undefined4 *)(iVar9 + 8);
      *puVar4 = param_2;
      puVar4[1] = 0x1b;
      puVar4[2] = &stack0x00000298;
      puVar4[3] = iVar9 + 0xc;
      puVar4[4] = uVar11;
      *(undefined4 *)(_LAB_2c43e0f0 + 0x1b) = 0x1b;
      *(char *)(_DAT_00000057 + 6) = (char)*(undefined2 *)(_DAT_00000057 + (int)param_2);
      if (SBORROW4(in_stack_000002d8,0x66)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(bRam00000039 + 0x1e) = bRam00000039;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    piVar5 = (int *)((int)param_2 * 0x4000000);
    iVar9 = *piVar5;
    param_2 = (int *)piVar5[1];
    param_4 = (undefined4 *)piVar5[2];
    iVar7 = piVar5[4];
    unaff_r4 = (undefined4 *)(piVar5[3] + 0x1f0);
    coprocessor_storelong(0,in_cr3,unaff_r4);
    *(char *)(_LAB_2c43dff8 + 9) = (char)piVar5[5];
    unaff_r6 = 0x2c43e150;
    *param_4 = param_2;
    param_4[1] = iVar7;
    param_4[2] = 0x2c43e150;
    param_4 = param_4 + 3;
  }
  bVar1 = *(byte *)(iVar9 + 0xc);
  *(int **)(unaff_r6 + 0x4c) = param_2;
  *(char *)(*(byte *)((int)unaff_r4 + 0xd) + 3) = (char)unaff_r6;
  iVar7 = _LAB_2c43e8de_2;
  software_bkpt(0x70);
  puVar4 = (undefined4 *)(int)*(short *)(*(int *)(iVar9 + 200) + (int)param_4);
  iVar9 = puVar4[1];
  if (-1 < (int)(bVar1 - 6)) {
                    /* WARNING: Could not recover jumptable at 0x2c43df5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*puVar4,iVar9,param_3,in_stack_00000074);
    return;
  }
  iVar8 = (int)param_3 >> 0x1f;
  if (((int)param_3 >> 0x1e & 1U) != 0) {
    uVar2 = *(ushort *)(unaff_r6 + 0x2a);
    *(int *)(iVar8 + 0x40) = iVar8;
    uVar3 = *(undefined2 *)(iVar9 + 0x14);
    *(char *)(unaff_r6 + (uint)uVar2) = (char)&stack0x0000017c;
    uVar13 = func_0x2bd6c3fe(uVar3,_DAT_2c43e638);
    uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
    *(short *)(uVar10 + 2) = (short)unaff_r6;
    puVar4 = (undefined4 *)(uVar10 >> 0xc);
    bVar12 = SCARRY4(iVar7,0x9d);
    iVar9 = iVar7 + 0x9d;
    if (-0x9e < iVar7) {
      software_interrupt(0xfa);
      puVar6 = (undefined4 *)puVar4[1];
      iVar9 = puVar4[3];
      piVar5 = puVar4 + 4;
      *puVar6 = (int)uVar13;
      puVar6[1] = extraout_r2_00;
      puVar6[2] = piVar5;
      puVar6[3] = puVar6;
      puVar6[4] = iVar9;
      puVar6[5] = (uint)uVar2;
      *(char *)(iVar9 + 0xe) = (char)uVar2;
      *piVar5 = (int)extraout_r2_00;
      puVar4[5] = piVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(byte *)(iVar8 + 2);
    *extraout_r2_00 = (uint)bVar1;
    *puVar4 = (int)uVar13;
    puVar4[1] = extraout_r2_00 + 1;
    puVar4[2] = (uint)bVar1;
    do {
      if (iVar9 < 0 == bVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar12 = SBORROW4(iVar8,0x9b);
      iVar9 = iVar8 + -0x9b;
    } while (in_stack_000001b0 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW4((int)&stack0x0000017c,0x3a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x2d < (int)&stack0x0000017c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

