/* FUN_2c0f82f8 @ 0x2c0f82f8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0f7ccc) */

void FUN_2c0f82f8(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_r6;
  int unaff_r10;
  undefined1 *puVar3;
  char in_NG;
  char in_OV;
  bool bVar4;
  undefined4 in_cr2;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined8 in_d4;
  undefined8 in_d6;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 in_d29;
  
  if (in_NG != in_OV) {
    iVar1 = *param_4;
    puVar2 = (undefined4 *)param_4[1];
    *(ushort *)(unaff_r6 + 0x32) = (ushort)*param_1;
    iVar1 = iVar1 >> 0x15;
    Reset = (undefined1)*(undefined2 *)(unaff_r6 + 0x2a);
    *(char *)(iVar1 + 9) = (char)iVar1;
    uRam2c0f7fb8 = *puVar2;
    uRam2c0f7fbc = puVar2[2];
    uRam2c0f7fc0 = puVar2[4];
    uRam2c0f7fc4 = *(uint *)(iVar1 + 0x5c) >> 0x19;
    bVar4 = false;
    coprocessor_storelong(5,in_cr13,unaff_r10 + 0x1f0);
    coprocessor_loadlong(5,in_cr2,&stack0x00000008);
    VectorMultiplySubtractLong(in_d4,in_d29,4,1);
    *(undefined4 *)(*(int *)(uRam2c0f7fc4 * 0x800 + 0x18) + 0x5c) =
         *(undefined4 *)(uRam2c0f7fc4 * 0x800 + 0x10);
    puVar3 = &stack0x00000008;
    while( true ) {
      VectorMultiplySubtractLong(in_d6,in_d29,1,1);
      coprocessor_loadlong(5,in_cr10,puVar3 + 0x14);
      VectorMultiplySubtractLong(unaff_d10,in_d29,1,1);
      software_bkpt(0xe0);
      do {
      } while (bVar4);
      VectorMultiplySubtractLong(unaff_d9,in_d29,1,1);
      VectorMultiplySubtractLong(unaff_d10,in_d29,2,1);
      iVar1 = (int)(puVar3 + 0x2c0f7de0) * 0x10000;
      if (((uint)(puVar3 + 0x2c0f7de0) & 0x10000) == 0 || iVar1 == 0) break;
      bVar4 = SBORROW4(iVar1,0x18600);
      puVar3 = puVar3 + 0x14;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(*param_1 + 0x18) = (char)param_4;
  *(undefined4 *)(*(byte *)((int)param_4 + 0x1f) + 0x30) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

