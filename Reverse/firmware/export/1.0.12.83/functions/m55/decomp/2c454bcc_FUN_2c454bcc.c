/* FUN_2c454bcc @ 0x2c454bcc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c454bcc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 in_cr0;
  
  uVar2 = *(ushort *)(param_1 + 0x20);
  *(short *)(param_4 + 0x30) = (short)*(undefined4 *)(param_3 + 0x24);
  bVar1 = *(byte *)(unaff_r6 + 0x70);
  puVar3 = (uint *)(param_4 >> 8);
  *puVar3 = (uint)uVar2;
  puVar3[1] = (uint)puVar3;
  puVar3[2] = (uint)bVar1;
  *(undefined2 *)(&LAB_2c454ee8 + bVar1) = 0x58;
  coprocessor_load(6,in_cr0,unaff_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

