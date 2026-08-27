/* FUN_2c119e1e @ 0x2c119e1e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c119e1e(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r7;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr10;
  
  uVar1 = *(ushort *)(unaff_r4 + 0x38);
  *(undefined2 *)(uint)uVar1 = 0;
  iVar3 = *(int *)((param_3 >> 5) + 4);
  uVar2 = *(ushort *)(unaff_r7 + 0x5b);
  *(char *)((undefined2 *)(uint)uVar1 + 2) = (char)uVar1;
  coprocessor_function2(0xe,0xd,1,in_cr2,in_cr8,in_cr10);
  *(short *)(iVar3 + 10) = (short)((int)(uint)uVar2 >> 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

