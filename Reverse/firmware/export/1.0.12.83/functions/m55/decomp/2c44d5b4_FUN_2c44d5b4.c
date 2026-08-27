/* FUN_2c44d5b4 @ 0x2c44d5b4 */

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_2c44d5b4(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int iVar4;
  int *unaff_r5;
  int *piVar5;
  uint *puVar6;
  int unaff_r6;
  undefined1 unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_CY;
  char in_OV;
  int *piVar7;
  undefined4 in_cr8;
  undefined1 *in_stack_0000032c;
  undefined1 auStack_10 [4];
  
  *(short *)(param_3 + 0x18) = (short)param_3;
  if (in_NG == '\0') {
    software_interrupt(0xd);
    if ((bool)in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = unaff_r5[3];
    puVar6 = (uint *)unaff_r5[4];
    *(char *)(*(int *)(unaff_r6 + 4) + *(int *)(unaff_r6 + 8)) = (char)*(int *)(unaff_r6 + 8);
    in_CY = ((int)in_stack_0000032c >> 0x1c & 1U) != 0;
    uVar3 = *puVar6;
    *(char *)(iVar4 + 0x1a) = (char)in_stack_0000032c;
    unaff_r4 = *(int *)(in_stack_0000032c + 100);
    *(char *)(iVar4 + 5) = (char)((int)in_stack_0000032c >> 0x1d);
    software_interrupt(0xfb);
LAB_2c44d4fc:
    if (in_CY == '\0') {
      *(char *)(unaff_r4 + 0x1b) = (char)unaff_r4;
      *(short *)(uVar3 + 0x10) = (short)in_stack_0000032c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_r6 + 0x15) = unaff_r7;
  in_stack_0000032c = &stack0x000001a0;
  iVar4 = unaff_r6 + -0x3d0;
  coprocessor_loadlong(5,in_cr8,iVar4);
  *unaff_r5 = param_2;
  piVar7 = unaff_r5 + 1;
  if (param_2 == 0) {
    if (in_NG == in_OV) {
      *(char *)(param_3 + 0xf) = (char)unaff_r6 + 'T';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = iVar4 * 0x800;
    piVar5 = (int *)((int)piVar7 - param_1);
    if (piVar5 != (int *)0x0 && param_1 <= (int)piVar7) {
      *(undefined1 *)((char)in_stack_0000032c[uVar3] + 0xf) = 0;
      return CONCAT44(param_5,param_1);
    }
  }
  else {
    iVar2 = SignedSaturate((int)auStack_10 * 0x400000,0x17);
    SignedDoesSaturate((int)auStack_10 * 0x400000,0x17);
    *(int *)(unaff_r4 + 0x20) = iVar4;
    uVar1 = *(ushort *)(param_2 + 6);
    uVar3 = (uint)uVar1;
    if (!in_ZR && in_NG == in_OV) goto LAB_2c44d4fc;
    *param_4 = iVar2;
    param_4[1] = uVar3;
    param_4[2] = (int)param_4;
    param_4[3] = unaff_r4;
    param_4[4] = (int)piVar7;
    param_4[5] = (int)in_stack_0000032c;
    if ((int)in_stack_0000032c < param_3) {
      return (ulonglong)CONCAT24(uVar1,param_3);
    }
    *(short *)(unaff_r6 + -0x39c) = (short)in_stack_0000032c;
    *(char *)(iVar2 + 0x15) = (char)iVar4;
    piVar5 = piVar7;
  }
  *(char *)(uVar3 + (int)piVar5) = (char)iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

