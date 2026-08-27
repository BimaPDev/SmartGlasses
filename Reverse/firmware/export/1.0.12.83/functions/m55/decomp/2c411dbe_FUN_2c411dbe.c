/* FUN_2c411dbe @ 0x2c411dbe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c411dbe(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int iVar3;
  int *unaff_r6;
  int iVar4;
  uint uVar5;
  
  iVar1 = *unaff_r6;
  iVar3 = unaff_r6[1];
  *(undefined4 *)(unaff_r6[2] + 0x18) = *(undefined4 *)(unaff_r4 + 0x44);
  *(int *)(iVar3 + 0x14) = iVar3;
  *(char *)(unaff_r4 + 9) = (char)param_4;
  *(short *)(iVar1 + 0xe) = (short)unaff_r4;
  uVar2 = *(undefined4 *)(unaff_r4 + 0x44);
  *(int *)(param_3 + 0x28) = unaff_r4;
  uVar5 = (uint)*(byte *)(iVar3 + 1);
  iVar1 = *(int *)(unaff_r4 + 0x14);
  *(uint *)(iVar1 + 0x14) = uVar5;
  iVar3 = *(int *)(uVar5 + 4);
  iVar4 = *(int *)(uVar5 + 8);
  *(int *)(param_4 + 0x48) = iVar3;
  *(char *)(iVar3 + 0xd) = (char)uVar2;
  uVar2 = *(undefined4 *)(iVar3 + 100);
  *(uint *)(iVar4 + 0x48) = (uint)*(ushort *)(iVar1 + 0x1e);
  *(char *)(iVar3 + 0x19) = (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

