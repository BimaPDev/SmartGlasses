/* FUN_2c0b2880 @ 0x2c0b2880 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b2880(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int in_r12;
  undefined4 in_cr3;
  undefined8 in_d0;
  undefined8 in_d23;
  int in_stack_00000098;
  
  if (unaff_r5 != 0) {
    iVar5 = unaff_r7 + -0x12;
    if (param_2 != 0) {
      iVar5 = unaff_r7 + -0x2c;
    }
    iVar3 = 0x2c0b292c;
    uVar2 = (uint)*(ushort *)(unaff_r6 + 0x18);
    *(short *)(unaff_r6 + 8) = (short)in_stack_00000098;
    uVar1 = (undefined1)*(ushort *)(unaff_r6 + 0x18);
    *(undefined1 *)(iVar5 + -0x72) = uVar1;
    *(int *)(iVar5 + -0x4a) = in_stack_00000098;
    *(undefined1 *)(param_1 + in_stack_00000098) = uVar1;
    iVar5 = uVar2 + param_1 * in_stack_00000098;
    FloatVectorPairwiseMax(in_d0,in_d23,4);
    for (; uVar2 = uVar2 >> 4, SBORROW4(iVar5,0x86); iVar5 = iVar5 + -0xfc) {
      do {
        *(char *)(param_1 + 0x1d) = (char)unaff_r6;
        uVar4 = iVar3 - 0x56;
        *(char *)(unaff_r6 + 0x1b) = (char)param_1;
        iVar3 = iVar3 + -300;
      } while (0xd5 < uVar4 && iVar3 != 0);
      *(char *)(param_1 + 0x17) = (char)iVar3;
    }
    *(char *)(uVar2 + 4) = (char)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_4 + 10) = (short)(unaff_r7 + -0x35);
  if (unaff_r7 + -0x35 != 200) {
    coprocessor_storelong(0xf,in_cr3,in_r12 + 0x1d4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

