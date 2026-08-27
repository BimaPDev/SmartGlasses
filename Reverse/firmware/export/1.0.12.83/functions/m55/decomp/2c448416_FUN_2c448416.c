/* FUN_2c448416 @ 0x2c448416 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c448416(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r4;
  uint uVar5;
  int unaff_r7;
  int unaff_lr;
  char in_OV;
  int in_stack_00000038;
  
  uVar5 = _LAB_2c448624;
  uVar2 = _LAB_2c448624 & 0x10000;
  *unaff_r4 = _LAB_2c448624 << 0x10;
  unaff_r4[1] = uVar5;
  unaff_r4[2] = unaff_r7;
  *(int *)((int)unaff_r4 + param_3 + 0xc) = param_3;
  iVar3 = 0x2c44874c;
  if (in_OV == '\0') {
    uVar5 = *(uint *)(unaff_lr + -0x14);
    param_4 = *(int *)(unaff_lr + -0x18);
    uVar4 = *(uint *)(unaff_lr + -0x1c);
    iVar3 = *(int *)(unaff_lr + -0x20);
  }
  else {
    uVar4 = (uint)*(short *)(unaff_r7 + uVar5);
    uRam000000c8 = 0x874c;
  }
  *(int *)((int)unaff_r4 + param_4 + 0xc) = param_4;
  if (uVar2 != 0) {
    uRam000000ce = (short)_MasterStackPointer;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(iVar3 + 0x14);
  if ((uVar4 & unaff_r7 << 7) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(uVar5 + 0x22) = (short)in_stack_00000038;
  *(undefined4 *)(uVar1 + 0x4c) = 0xac;
  *(char *)(in_stack_00000038 + 0x17) = (char)in_stack_00000038;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

