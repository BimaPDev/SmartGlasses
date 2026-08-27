/* FUN_2c05d21c @ 0x2c05d21c */

void FUN_2c05d21c(undefined2 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  int in_stack_0000005c;
  
  coprocessor_function(2,2,6,in_cr5,in_cr0,in_cr3);
  *(undefined2 *)(param_4 + 0xe) = param_1;
  bVar1 = *(byte *)(param_3 + *(int *)(unaff_r11 + -0x380));
  coprocessor_function(3,0,6,in_cr6,in_cr2,in_cr2);
  *(ushort *)((char)bVar1 + 0xe) = (ushort)bVar1;
  iVar2 = *(int *)(UNRECOVERED_JUMPTABLE + -0x380);
  *(char *)(iVar2 + 8) = (char)iVar2;
                    /* WARNING: Could not recover jumptable at 0x2c05d246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2,in_stack_0000005c >> 4,0x22);
  return;
}

