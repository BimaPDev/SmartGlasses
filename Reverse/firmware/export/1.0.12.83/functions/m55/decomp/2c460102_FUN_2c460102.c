/* FUN_2c460102 @ 0x2c460102 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c460102(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  int unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int unaff_pc;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined8 extraout_d4;
  undefined4 in_stack_00000274;
  undefined1 in_stack_000003b4;
  
  *(undefined4 *)(unaff_r4 + 0x50) = unaff_r5;
  func_0x2be8c64e(param_1,in_stack_00000274,param_3 + 4,*param_3,param_1,param_2,param_3,param_4);
  piVar1 = piRam2c4602a8;
  iVar4 = iRam2c4602a4;
  uVar3 = uRam2c4602a0;
  iVar2 = iRam2c46029c;
  uVar8 = (uint)*(byte *)((int)piRam2c4602a8 + uRam2c4602a0);
  *(char *)(iRam2c46029c + 0x1a) = (char)extraout_r3;
  iVar5 = _LAB_2c460520;
  coprocessor_moveto2(0xb,10,iVar4,unaff_r8,in_cr8);
  if (0xaf < (int)uVar3) {
    *(char *)(iVar4 + 7) = (char)iVar2;
    iVar5 = extraout_r3;
    if (0xaf < uVar3) {
      uRam2c460117 = extraout_d4;
      coprocessor_store(2,in_cr15,iVar4 + -0x38);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c460176:
    *(int *)(iVar5 + 4) = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *piVar1;
  iVar6 = piVar1[1];
  iVar7 = piVar1[2];
  piVar9 = (int *)piVar1[3];
  piVar1 = (int *)(uVar8 - 100);
  if (uVar8 < 100) {
    if (uVar8 != 100) {
      *piVar9 = iVar4;
      piVar9[1] = iVar6;
      piVar9[2] = (int)piVar9;
      iVar5 = extraout_r3 + -0xef;
      *(short *)(iVar6 + 4) = (short)*(char *)((int)piVar9 + iVar2);
      *(undefined1 *)(extraout_r3 + -0xda) = in_stack_000003b4;
      goto LAB_2c460176;
    }
  }
  else {
    piVar9 = (int *)((int)piVar9 >> ((uint)piVar9 & 0xff));
    *(int *)(uVar8 + 0x82d) = iVar4;
    piVar1 = piVar9;
  }
  if (-1 < (int)piVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (extraout_r3 == 200) {
    if (!SBORROW4((int)piVar9,unaff_r11 + 0x23)) {
      HintPreloadDataForWrite(unaff_pc + 0xf9e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)(unaff_r11 + 0x28) = (char)piVar9;
    if (iVar5 != 0) {
      coprocessor_loadlong(2,in_cr11,unaff_r9 + 0x310);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(iVar4 + 0xf) = (char)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

