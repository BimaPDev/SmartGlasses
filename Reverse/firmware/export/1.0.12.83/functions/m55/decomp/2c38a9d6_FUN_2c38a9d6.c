/* FUN_2c38a9d6 @ 0x2c38a9d6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c38a9d6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_4 + 8);
  iVar4 = *(int *)(param_4 + 0x10);
  *(char *)(*(int *)(param_4 + 0xc) + 0x16) = (char)((int)param_1 >> 0x1f);
  if (param_3 == 0) {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 4;
    iVar1 = *(int *)((iVar1 + 0x86) * 2);
    *(char *)(iVar1 + 5) = (char)iVar1;
  }
  puVar2 = (undefined4 *)((short)((int)piVar3 << 1) * 0x100);
  *(int **)((*(uint *)(iVar4 << 1) >> ((int)piVar3 << 1 & 0xffU)) + 0x18) = piVar3;
  *(short *)puVar2[1] = (short)*puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

