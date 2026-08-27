/* FUN_2c0937ca @ 0x2c0937ca */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c093390) */

void FUN_2c0937ca(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r4;
  int iVar8;
  undefined4 unaff_r5;
  int iVar9;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r9;
  int unaff_lr;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr9;
  
  if (param_1 == (byte *)0x0) {
    coprocessor_function2(5,0xc,2,in_cr2,in_cr9,in_cr1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd8,0x2c093824);
    (*pcVar1)();
  }
  *(short *)(unaff_r7 + 0x1c) = (short)unaff_r5;
  *(byte **)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(byte **)(param_1 + 8) = param_1;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = unaff_r4;
  *(undefined4 *)(param_1 + 0x14) = unaff_r5;
  param_1[0x16] = (byte)param_4;
  if ((int)param_1 >> 6 != 0) {
    iVar4 = *(int *)param_1;
    iVar5 = *(int *)(param_1 + 4);
    piVar6 = *(int **)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x14);
    sVar3 = *(short *)(*(int *)(param_1 + 0x18) + iVar8);
    *(char *)((int)piVar6 + 0x1f) = (char)iVar4;
    *piVar6 = iVar4;
    piVar6[1] = (int)piVar6;
    piVar6[2] = iVar8;
    *(short *)(iVar7 + 10) = (short)iVar9;
    *piVar6 = iVar4;
    piVar6[1] = iVar5;
    piVar6[2] = (int)piVar6;
    piVar6[3] = iVar7;
    piVar6[4] = iVar8;
    piVar6[5] = (int)sVar3;
    iVar5 = (int)piVar6 * 0x800;
    bVar2 = *(byte *)(iVar9 + 0x1c);
    *(ushort *)(iVar4 + 0x1e) = (ushort)bVar2;
    *(char *)(iVar4 + 0x1b) = (char)iVar4;
    *(short *)(iVar4 + 0x12) = (short)iVar5;
    *(short *)(unaff_lr + -0x47) = (short)iVar9;
    *unaff_r6 = iVar4;
    unaff_r6[1] = (int)unaff_r6;
    unaff_r6[2] = (uint)bVar2;
    unaff_r6[3] = iVar5;
    unaff_r6[4] = unaff_r7;
    *(int *)(iVar5 + 0x398) = unaff_lr + -99;
    *(int *)(iVar5 + 0x39c) = iVar8;
    *(short *)(iVar9 + 0x38) = (short)iVar8;
    coprocessor_load(4,in_cr1,unaff_r9 + -0x2a4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_bkpt(0xe9);
  *(ushort *)((uint)*(byte *)(*param_1 + 0x1b) + (uint)*(byte *)((int)unaff_r6 * 0x80 + 4) + 0x20) =
       (ushort)*param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

