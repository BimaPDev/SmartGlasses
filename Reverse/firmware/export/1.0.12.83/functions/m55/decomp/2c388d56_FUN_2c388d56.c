/* FUN_2c388d56 @ 0x2c388d56 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c388d56(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000035c;
  
  iVar2 = *(int *)(param_4 + 4);
  iVar3 = *(int *)(param_4 + 8);
  iVar4 = *(int *)(param_4 + 0x10);
  *(char *)(*(int *)(param_4 + 0xc) + 0x16) = (char)((int)param_1 >> 0x1f);
  if (param_3 == 0) {
    iVar2 = *(int *)((*(int *)(iVar2 + 0x54 + iVar4) + 0x86) * 2);
    *(char *)(iVar2 + 5) = (char)iVar2;
    in_stack_0000035c = 0x172;
  }
  *(short *)(*(ushort *)(in_stack_0000035c + 0x18) + 0x1c) = (short)iVar3;
  puVar1 = (undefined4 *)((short)(iVar3 << 1) * 0x100);
  *(int *)((*(uint *)(iVar4 << 1) >> (iVar3 << 1 & 0xffU)) + 0x18) = iVar3;
  *(short *)puVar1[1] = (short)*puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

