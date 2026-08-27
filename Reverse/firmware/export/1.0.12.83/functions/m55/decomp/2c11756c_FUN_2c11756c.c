/* FUN_2c11756c @ 0x2c11756c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11756c(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  int iVar4;
  int unaff_r6;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d4;
  undefined8 in_d27;
  
  *(short *)(param_4 * 0x20000 + 0x18) = (short)unaff_r6;
  VectorMultiplySubtract(in_d4,in_d2,1,0);
  *(short *)(unaff_r6 + 8) = (short)unaff_r6;
  piVar1 = _DAT_2c1178c8;
  coprocessor_moveto(1,0,0,unaff_r4 << 0xd,in_cr1,in_cr1);
  VectorMultiplySubtract(in_d1,in_d27,4,0);
  *(undefined2 *)(((unaff_r4 << 0xd) >> 0xc) + 0x36) = *(undefined2 *)(unaff_r4 + 0x36);
  iVar4 = piVar1[4];
  iVar2 = *param_3;
  iVar3 = param_3[2];
  *(int **)(*(int *)(*piVar1 + 0xc) + iVar4 + (uint)(0x80 < (uint)piVar1[2] >> 0x1a) + 0x14) =
       param_3 + 4;
  *(short *)(iVar3 + 0x10) = (short)iVar4;
  *(int **)(iVar3 + 0x10) = param_3 + 4;
  iVar4 = _DAT_2c1177c8 * 4;
  coprocessor_moveto(8,7,2,iVar2,in_cr0,in_cr1);
  *(undefined4 *)(iVar2 + 0x104) = &stack0xfffffffc;
  *(undefined4 *)(iVar2 + 0x108) = unaff_r9;
  *(undefined4 **)(iVar4 + iVar2 + iVar3 + 0x10) = (undefined4 *)(iVar2 + 0x104);
  software_bkpt(0);
  uRam00000016 = 0;
  uRam00000048 = 0;
  *(undefined4 *)
   (*(int *)(((int)&stack0x000000c0 >> ((uint)&stack0x000000c0 & 0xff)) + 4) * 0x400000 + 0x14) =
       0xd;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

