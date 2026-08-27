/* FUN_2c456cd0 @ 0x2c456cd0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c456d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c456cd0(undefined4 param_1,uint param_2,undefined2 *param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r4;
  int *piVar5;
  int unaff_r5;
  undefined4 unaff_r6;
  uint uVar6;
  uint unaff_lr;
  char in_NG;
  undefined4 in_cr6;
  undefined4 uStack_18;
  uint uStack_14;
  undefined2 *puStack_10;
  uint uStack_c;
  
  *(short *)((int)param_3 + unaff_r4) = (short)param_2;
  uVar3 = _LAB_2c457098;
  piVar2 = piRam00000032;
  uVar1 = uRam0000002e;
  if (in_NG != '\0') {
    *(uint *)param_2 = param_2;
    *(undefined4 *)(param_2 + 4) = unaff_r6;
    *param_3 = (short)uVar3;
    iVar4 = (int)(param_4 >> 5) >> 3;
    if (iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(iVar4 + _LAB_2c45718c) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((int)piRam00000032 + unaff_r5) = (char)(param_4 + 5);
  piVar5 = (int *)(param_2 >> 0x1e);
  *(uint *)param_2 = param_2;
  *(undefined4 *)(param_2 + 4) = 0xa4;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(int **)(param_2 + 0xc) = piVar2;
  *(undefined1 *)(piVar2 + 7) = 0xa4;
  uVar6 = unaff_lr ^ (uint)&uStack_18 >> 4;
  *piVar2 = param_4 + 5;
  piVar2[1] = param_2 + 0x92;
  piVar2[2] = 0xa4;
  piVar2[3] = (int)piVar5;
  piVar2[4] = uVar6;
  if (piVar2 == (int *)0xffffffec) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(piVar2 + 9) = 0x31;
  *(undefined1 *)(uVar6 + 0x19) = 0x31;
  uVar3 = _LAB_2c456f18;
  uVar1 = _LAB_2c456edc;
  iVar4 = *piVar5;
  UNRECOVERED_JUMPTABLE = (code *)piVar5[1];
  coprocessor_store(0xf,in_cr6,0x370);
  *(int *)iVar4 = iVar4;
  *(code **)(iVar4 + 4) = UNRECOVERED_JUMPTABLE;
  *(undefined4 *)(iVar4 + 8) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = uVar3;
  uStack_18 = param_1;
  uStack_14 = param_2;
  puStack_10 = param_3;
  uStack_c = param_4;
                    /* WARNING: Could not recover jumptable at 0x2c456d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar4,UNRECOVERED_JUMPTABLE,0x370,0xe4);
  return;
}

