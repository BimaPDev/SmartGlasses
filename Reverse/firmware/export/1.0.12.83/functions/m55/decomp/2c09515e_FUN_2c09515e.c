/* FUN_2c09515e @ 0x2c09515e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c094002) */

void FUN_2c09515e(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4,int param_5,
                 undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  undefined4 *puVar5;
  int unaff_r6;
  int *piVar6;
  int *unaff_r7;
  undefined4 unaff_r8;
  int in_r12;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr14;
  int in_stack_00000030;
  
  puVar5 = (undefined4 *)(unaff_r4 * 0x4000);
  if ((unaff_r4 & 0x40000) == 0 || puVar5 == (undefined4 *)0x0) {
    *(char *)(puVar5 + 1) = (char)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = param_1;
  puVar5[1] = unaff_r4;
  puVar5[2] = puVar5;
  puVar5[3] = unaff_r6;
  *(char *)((uint)*(ushort *)(param_4 + 0x36) + unaff_r6) = (char)((uint)param_2 >> 0x18);
  iVar2 = param_2 + unaff_r4;
  *(short *)(iVar2 + 0x28) = (short)iVar2;
  *unaff_r7 = param_2;
  unaff_r7[1] = unaff_r4;
  unaff_r7[2] = (param_2 >> 0x18) + 0x95;
  unaff_r7[3] = (int)unaff_r7;
  iVar2 = *(int *)(iVar2 + 0x60);
  coprocessor_moveto(0,7,7,iVar2,in_cr0,in_cr6);
  iVar4 = param_3 * 0x400;
  iVar3 = iVar2 * 0x100000;
  piVar6 = (int *)(iVar3 + iVar4);
  *piVar6 = iVar2;
  piVar6[1] = iVar3;
  piVar6[2] = param_3;
  piVar6[3] = iVar4;
  *(short *)(iVar3 + iVar4) = (short)param_3;
  software_bkpt(200);
  if (!SBORROW4(iVar4,0x47)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(iVar4 + -0x38);
  *param_4 = 0;
  *(undefined1 *)(in_stack_00000030 + 0x12) = 0xe0;
  *(undefined1 **)(iVar2 + *(int *)(uint)bVar1) = &stack0x00000010;
  puVar5 = (undefined4 *)(iVar2 * 4 + -0x8d);
  *puVar5 = unaff_r8;
  puVar5[param_3 * -0x100 + iVar2 * 0x40000] = iVar2;
  param_4[0x19] = (char)param_3;
  if (param_3 >> 8 != 0) {
    *(undefined4 *)(param_5 + 0x2c) = param_6;
  }
  coprocessor_movefromRt(6,9,in_cr14);
  coprocessor_movefromRt2(6,9,in_cr14);
  coprocessor_load(2,in_cr2,in_r12 + 0x178);
  iVar2 = coprocessor_movefromRt(2,7,in_cr14);
  coprocessor_movefromRt2(2,7,in_cr14);
  coprocessor_movefromRt(2,8,in_cr9);
  coprocessor_movefromRt2(2,8,in_cr9);
  *(short *)((param_3 >> 8) + iVar2) = (short)(param_3 >> 8);
  return;
}

