/* FUN_2c411db6 @ 0x2c411db6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c411db6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined2 unaff_r5;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(unaff_r4 + 0x44);
  *(char *)(unaff_r4 + 1) = (char)unaff_r5;
  *(undefined2 *)(unaff_r6 + iVar1) = unaff_r5;
  *(undefined4 *)(param_4 + 0x28) = param_1;
  iVar3 = *(int *)(unaff_r6 + 0x44);
  *(undefined4 *)(param_4 + 0x28) = param_1;
  *(char *)(unaff_r6 + 9) = (char)iVar3;
  *(int *)(param_3 + 0x28) = unaff_r4;
  uVar6 = (uint)*(byte *)(iVar3 + 1);
  iVar3 = *(int *)(unaff_r4 + 0x14);
  *(uint *)(iVar3 + 0x14) = uVar6;
  iVar4 = *(int *)(uVar6 + 4);
  iVar5 = *(int *)(uVar6 + 8);
  *(int *)(param_4 + 0x48) = iVar4;
  *(char *)(iVar4 + 0xd) = (char)iVar1;
  uVar2 = *(undefined4 *)(iVar4 + 100);
  *(uint *)(iVar5 + 0x48) = (uint)*(ushort *)(iVar3 + 0x1e);
  *(char *)(iVar4 + 0x19) = (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

