/* FUN_2c38a108 @ 0x2c38a108 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c38a108(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    unaff_r4 = *(int *)(param_4 + 8);
    param_1 = 0;
  }
  *(char *)(unaff_r5 + 0x16) = (char)param_1;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(unaff_r4 + 0x10);
  iVar4 = *(int *)(unaff_r4 + 0x14);
  iVar3 = *(int *)(iVar2 + 4);
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(uint *)(iVar2 + 0xc);
  *(char *)(iVar4 + 0x16) = (char)(iVar1 >> 0xc);
  if (iVar5 != 0) {
    uVar6 = iVar1 >> 0x1f;
  }
  *(int *)(uVar6 + 0x18) = iVar3;
  if (iVar4 == 0) {
    *(short *)(uVar6 + 0x14) = (short)(iVar3 << (uVar6 & 0xff));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

