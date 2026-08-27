/* FUN_2c0fe492 @ 0x2c0fe492 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0fe492(int param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  int *unaff_r4;
  uint uVar2;
  int unaff_r6;
  int iVar3;
  uint uVar4;
  int unaff_r7;
  char in_OV;
  undefined8 unaff_d12;
  undefined8 in_d16;
  undefined8 in_d24;
  
  if ((uint)param_3 >> 0x1e == 0 || in_OV != '\0') {
    if (unaff_r6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    iVar3 = *unaff_r4;
    *param_3 = param_2;
    param_3[1] = (uint)param_3 >> 0x1e;
    param_3[2] = iVar3;
    uVar4 = *(uint *)(param_2 + unaff_r7);
    uVar2 = (int)uVar4 >> 0x1d;
    *(int *)param_1 = param_1;
    *(int **)(param_1 + 4) = param_3 + 3;
    *(int *)(param_1 + 8) = param_4;
    *(int *)(param_1 + 0xc) = unaff_r7;
    uVar1 = (uint)*(ushort *)(param_3 + 10);
    *(uint *)uVar1 = uVar1;
    *(int *)(uVar1 + 4) = param_2;
    *(uint *)(uVar1 + 8) = uVar2;
    *(int *)(uVar1 + 0xc) = unaff_r7;
    iVar3 = (int)*(char *)((uVar2 >> 0x12) * 2);
    *(int *)(iVar3 + param_2) = param_2;
    *(short *)((int)param_3 + 0x42) = (short)param_2;
    if (param_3 + 3 != (int *)0x0) {
      *(int *)(iVar3 + 0x68) = param_4;
      uVar1 = (uint)*(ushort *)(iVar3 * 0x20000 + 0x30);
      iVar3 = (int)*(char *)(param_4 + (uVar4 >> 0x10));
      *(uint *)(iVar3 + 0x68) = uVar1;
      *(uint *)(iVar3 + 0x68) = (uint)*(byte *)(param_4 + uVar1);
      software_bkpt(0xe9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)((int)param_3 + 0x42) = (short)param_2;
  }
  VectorComplexMultiplyAccumulateByElement(in_d16,unaff_d12,in_d24,0x5a,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

