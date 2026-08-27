/* FUN_2c43d20e @ 0x2c43d20e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43d20e(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_r7;
  code *unaff_r11;
  int iVar3;
  undefined8 uVar4;
  int in_stack_00000110;
  
  iVar1 = _LAB_2c43d4e4;
  *(undefined2 *)(unaff_r11 + 0x3c) = param_1;
  uVar4 = (*unaff_r11)();
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4 + 0x10;
  *(int *)(*(int *)((int)uVar4 + 0xc) + 0x18) = iVar3;
  *(int *)(uVar2 + iVar1) = iVar3;
  *(short *)(in_stack_00000110 + 4) = (short)iVar3;
  *(undefined4 *)(iVar1 + 0x20) = unaff_r7;
  *(char *)((uVar2 >> 2) + 0x10) = (char)*(undefined4 *)((char)((ulonglong)uVar4 >> 0x20) + 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

