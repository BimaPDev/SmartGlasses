/* FUN_2c45705a @ 0x2c45705a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45772c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45705a(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int *piVar13;
  int in_r12;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr13;
  int iStack00000050;
  undefined4 in_stack_00000224;
  
  piVar3 = (int *)*param_4;
  iVar4 = param_4[1];
  uVar7 = param_4[2];
  uVar11 = param_4[3];
  if (!SBORROW4(param_1,0x36)) {
    *(short *)(param_1 + 0x1e) = (short)piVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = param_1 >> 0x17;
  if (param_1 != 0) {
    *piVar3 = param_1;
    piVar3[1] = param_2;
    piVar3[2] = (int)piVar3;
    piVar3[3] = iVar5;
    cVar2 = (char)(iVar4 + uVar11) + 'G';
    bVar1 = *(byte *)(iVar4 + uVar11 + -0xa2);
    uVar10 = (uint)bVar1;
    iVar4 = (int)*(short *)(uVar11 + 0x65e);
    iVar8 = iVar4 + uVar11;
    iStack00000050 = param_2;
    if (-1 < (int)(uVar11 - 0x7a)) {
      *(char *)(piVar3 + 7) = (char)uVar11;
      *(int *)(param_1 * 2 + 0x70) = param_1 * 2;
      iVar4 = ((int)piVar3 << 1) >> 0x1c;
      *(char *)(iVar4 + 0x1c) = cVar2;
      *(uint *)(uVar10 + iVar8) = uVar11 ^ uVar10;
      *(byte *)(iVar5 + 0x1c) = bVar1;
      iVar9 = (int)uVar10 >> 1;
      iVar5 = iVar5 + 0x12;
      *(int *)(iVar4 + 0x74) = iVar8;
      uRam0000001d = (undefined1)(uVar11 ^ uVar10);
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      *(int *)(iVar4 + 0x70) = iVar5;
      *(char *)(iVar4 + 0x1c) = (char)(((int)piVar3 << 1) >> 0x1c);
      *(char *)(iVar4 * 2 + 0x1c) = cVar2;
      *(undefined1 *)(iVar9 * 2 + 0x1d) = uRam0000001d;
      *(undefined1 *)(iVar9 + 0x15) = uRam0000001d;
      *(int *)(iVar9 * 4 + 0x74) = iVar5 * iVar8;
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      *(undefined1 *)(iVar9 + 0x1d) = uRam0000001d;
      UNRECOVERED_JUMPTABLE = (code *)((iVar9 + in_r12) * 2);
      Reserved1 = (undefined1)iVar5;
                    /* WARNING: Could not recover jumptable at 0x2c3b2ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,iVar5,iVar9 + in_r12 >> 0x20);
      return;
    }
    *(uint *)(uVar11 + 0x18) = uVar11;
    *(short *)(iVar5 + 0x30) = *(short *)(uVar11 + 0x65e);
    piVar13 = *(int **)((int)piVar3 + iVar8);
    piVar3 = (int *)(iVar5 * 0x20000);
    coprocessor_function2(6,8,1,in_cr13,in_cr1,in_cr11);
    *piVar13 = param_1;
    piVar13[1] = iVar4;
    piVar13[2] = 0x2c4573fc;
    piVar13[3] = (int)piVar3;
    piVar13[4] = iVar5;
    piVar13[5] = uVar10;
    *(undefined1 *)(piVar13 + 8) = 0xfc;
    *piVar3 = param_1;
    piVar3[1] = iVar4;
    piVar3[2] = 0x2c4573fc;
    piVar3[3] = iVar5;
    piVar3[4] = (int)(piVar13 + 6);
                    /* WARNING: Could not emulate address calculation at 0x2c45733c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(iVar8 + -0x61))(param_1,in_stack_00000224,0x2c4573fc,piVar3 + 5);
    return;
  }
  puVar12 = (undefined1 *)(param_2 >> 9);
  uVar11 = (uint)_MemManage;
  puVar6 = (undefined4 *)(uVar11 - 0x65);
  *puVar6 = 0xcb;
  *(undefined4 **)(uVar11 - 0x61) = puVar6;
  *(undefined4 *)(uVar11 - 0x5d) = uVar7;
  *(undefined4 *)(uVar11 - 0x59) = 0xc;
  *puVar12 = 0xcb;
  uRam000000cf = 0xcb;
  uRam000000d7 = 0xc;
  iRam000000cb = param_1;
  uRam000000d3 = uVar7;
  puRam000000db = puVar12;
  *(undefined4 *)(uVar11 - 0x41) = 0xcb;
  *(undefined4 *)(uVar11 - 0x41) = 0xcb;
  piVar3 = (int *)(((uint)puVar6 & 0x7fffffff) >> 0x19);
  *piVar3 = (int)puVar6 * 2;
  piVar3[1] = 0x197;
  piVar3[2] = (int)piVar3;
  piVar3[3] = (int)&stack0x00000358;
  piVar3[4] = (int)puVar12;
  *(undefined4 **)((int)puVar6 * 8 + 0x24) = puVar6;
  *(short *)(&stack0x00000378 + (int)puVar6 * 2) = (short)&stack0x00000358 * 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

