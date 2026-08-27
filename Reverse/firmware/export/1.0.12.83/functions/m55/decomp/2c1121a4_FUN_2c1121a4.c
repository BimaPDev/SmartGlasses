/* FUN_2c1121a4 @ 0x2c1121a4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c11222e) */
/* WARNING: Removing unreachable block (ram,0x2c0a3120) */

void FUN_2c1121a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  undefined4 in_r12;
  undefined4 in_cr3;
  
  puVar1 = (undefined2 *)(uint)*(ushort *)(param_3 * 8 + 0x38);
  if (param_4 < -0x98) {
    *puVar1 = 0x1a;
  }
  coprocessor_store(0xe,in_cr3,puVar1);
  iVar2 = (unaff_r7 & 1) * 0x100000;
  *(int *)(unaff_r6 + 0x40) = param_4 + 0x98;
  *(int *)(unaff_r6 + 0x44) = unaff_r5;
  *(int *)(unaff_r6 + 0x48) = iVar2;
  *(int *)(iVar2 + param_4 + 0x98) = unaff_r5;
  *(undefined4 *)(unaff_r5 + 8) = in_r12;
  *(undefined4 *)(unaff_r5 + 0xc) = 0xc;
  *(char *)(Reserved5 * 0x10 + 0x184a) = (char)uRam000000e4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

