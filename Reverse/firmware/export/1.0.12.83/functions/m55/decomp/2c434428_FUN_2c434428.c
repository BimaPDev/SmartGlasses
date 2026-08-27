/* FUN_2c434428 @ 0x2c434428 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c434428(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r10;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr14;
  int in_stack_00000028;
  int in_stack_00000188;
  
  iVar3 = 0xc6;
  iVar4 = _LAB_2c434498;
  do {
    *(char *)(iVar3 + 5) = (char)unaff_r6;
    unaff_r10 = unaff_r10 + -0x240;
    coprocessor_loadlong(2,in_cr14,unaff_r10);
    *(undefined2 *)(param_3 + 4) = 0x4514;
    software_hlt(0x1a);
    if (param_3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_function(4,10,5,in_cr8,in_cr10,in_cr6);
    puVar1 = (ushort *)(iVar4 + in_stack_00000188);
    unaff_r6 = (int)&stack0x000000f0 >> 7;
    iVar3 = in_stack_00000028 + -0x85;
    iVar2 = iVar4 + -0x51;
    iVar4 = iVar4 + -0x1f;
  } while (iVar2 < 0);
  *(char *)(*puVar1 + 0xc) = (char)*(undefined4 *)(unaff_r8 + -0x1d4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

