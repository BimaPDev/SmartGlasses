/* FUN_2c0673a8 @ 0x2c0673a8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0673a8(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  int unaff_r9;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  coprocessor_store(7,in_cr3,*param_2 + -0x2f8);
  coprocessor_load(8,in_cr11,unaff_r9 + -0x294);
  bVar1 = *(byte *)(param_2 + 6);
  uVar2 = param_3 + (uint)bVar1 * -0x10;
  iVar3 = unaff_r5 >> 0xc;
  *(char *)(bVar1 + uVar2 + 0x13) = (char)*(undefined2 *)((int)param_2 * 2);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar3 >> (uVar2 & 0xff);
  }
  if (iVar3 == 0) {
    *(ushort *)(iVar4 * 2) = (ushort)bVar1 * 0x10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

