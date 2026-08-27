/* FUN_2c442582 @ 0x2c442582 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c442582(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint extraout_r2;
  int iVar8;
  undefined4 extraout_r3;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *unaff_r5;
  undefined8 *puVar13;
  int iVar14;
  undefined4 unaff_r6;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 in_cr7;
  undefined1 in_q13 [16];
  undefined8 uVar18;
  undefined4 in_stack_0000024c;
  
  *unaff_r5 = param_1;
  unaff_r5[1] = param_3;
  unaff_r5[2] = param_4;
  unaff_r5[3] = unaff_r5;
  unaff_r5[4] = unaff_r6;
  uVar5 = *param_3;
  uVar17 = (uint)bRam0000000f;
  piVar6 = (int *)(((uint)unaff_r5 & 0x3fffff) >> 7);
  uVar11 = (int)unaff_r5 * 0x100;
  puVar13 = *(undefined8 **)(uVar17 + uVar11);
  *(char *)(uVar11 + ~uVar5) = (char)param_3[1];
  if ((uVar11 & 0x100000) == 0 || (int)unaff_r5 * 0x100000 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = (uint)*(byte *)((int)unaff_r5 * 0x100000 + 0xe);
  uVar18 = func_0x2bd199e8(~uVar5,in_stack_0000024c);
  *(undefined4 *)(uVar17 + 0x51) = (int)uVar18;
  *(undefined4 *)(uVar17 + 0x55) = extraout_r3;
  *(undefined8 **)(uVar17 + 0x59) = puVar13;
  *(undefined4 *)(uVar17 + 0x5d) = 0;
  *(undefined4 **)(uVar17 + 0x61) = (undefined4 *)(uVar17 + 0x51);
  do {
  } while (0xffffffb3 < extraout_r2);
  bVar2 = false;
  while( true ) {
    *(char *)(((uint)puVar13 & 0xffff) + 1) = (char)((ulonglong)uVar18 >> 0x20);
    coprocessor_load(1,in_cr7,0x2c4425dc);
    if ((int)uVar18 == 0) break;
    if (bVar2) {
      *(char *)(*(int *)(uRam00000036 + 0x7c) + 3) = (char)uVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar13 = uVar18;
    *(undefined8 **)(puVar13 + 1) = puVar13;
    *(undefined4 *)((int)puVar13 + 0xc) = 0;
    uVar5 = (uint)_LAB_2c4420b4;
    uVar18 = CONCAT44(uVar5,(int)uVar18 + 0x9c);
    *(uint *)(uVar11 + 0x74) = (uint)*(ushort *)(puVar13 + 5);
    bVar2 = (uVar5 >> 0x11 & 1) != 0;
    uVar11 = uVar5 >> 0x12;
    VectorAdd(in_q13,in_q13,1);
  }
  software_interrupt(0xaf);
  if (bRam2c4425ee != 0xd3bbda24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar15 = *(int *)(param_2 + 0x10);
  piVar9 = *(int **)(uVar17 + 4);
  iVar14 = *(int *)(uVar17 + 0xc);
  iVar16 = *(int *)(uVar17 + 0x10);
  iVar3 = *piVar9;
  iVar8 = piVar9[1];
  *(int **)(iVar16 + 0x68) = piVar9 + 3;
  iVar4 = *piVar6;
  iVar7 = piVar6[1];
  iVar10 = piVar6[2];
  iVar12 = piVar6[3];
  if (iVar15 < 0x96) {
    *(int *)iVar4 = iVar4;
    *(int *)(iVar4 + 4) = iVar8;
    *(int *)(iVar4 + 8) = iVar10;
    *(int *)(iVar4 + 0xc) = iVar16;
    *(short *)(iVar3 + iVar7) = (short)iVar16;
    sVar1 = *(short *)(iVar12 * 2);
    *(char *)(sVar1 + 0xd) = (char)iVar14;
    software_bkpt(0x58);
    *(undefined1 *)(sVar1 + iVar14) = 0x84;
    software_bkpt(0x38);
    *(short *)(*(int *)(iVar14 + 0x4a) + 0x2a) = (short)*(int *)(iVar14 + 0x4a);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

