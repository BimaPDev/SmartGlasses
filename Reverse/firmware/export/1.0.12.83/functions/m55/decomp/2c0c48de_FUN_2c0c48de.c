/* FUN_2c0c48de @ 0x2c0c48de */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0c48de(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int *unaff_r5;
  undefined1 *unaff_r6;
  int iVar5;
  int *piVar6;
  undefined4 unaff_r7;
  int in_stack_00000328;
  
  *(undefined1 *)((int)unaff_r5 + (int)unaff_r6) = param_4;
  *unaff_r6 = 0;
  _MasterStackPointer = unaff_r5;
  _Reset = unaff_r6;
  _NMI = unaff_r7;
  *(undefined2 *)(unaff_r4 * 4 + -0xc9) = 0xc;
  iVar2 = in_stack_00000328 * 0x10000000;
  *(int *)(param_2 + 0x70) = in_stack_00000328;
  iVar3 = *unaff_r5;
  iVar4 = unaff_r5[2];
  iVar5 = unaff_r5[3];
  *(int *)(iVar3 + 0x70) = unaff_r5[1];
  uVar1 = SUB42(unaff_r5 + 4,0);
  *(undefined2 *)(iVar5 + iVar3) = uVar1;
  *(undefined2 *)(iVar5 + iVar3) = uVar1;
  piVar6 = (int *)(iVar2 >> 5);
  *piVar6 = iVar2;
  piVar6[1] = 0;
  piVar6[2] = iVar2 + iVar4 + 7;
  piVar6[3] = (int)(unaff_r5 + 4) * 0x8000;
  piVar6[4] = (int)piVar6;
  piVar6[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

