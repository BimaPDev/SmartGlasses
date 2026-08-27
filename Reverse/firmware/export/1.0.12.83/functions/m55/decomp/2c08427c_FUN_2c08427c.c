/* FUN_2c08427c @ 0x2c08427c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c084220) */
/* WARNING: Removing unreachable block (ram,0x2c084232) */
/* WARNING: Removing unreachable block (ram,0x2c084170) */
/* WARNING: Removing unreachable block (ram,0x2c084176) */
/* WARNING: Removing unreachable block (ram,0x2c08417a) */
/* WARNING: Removing unreachable block (ram,0x2c084196) */
/* WARNING: Removing unreachable block (ram,0x2c0841a6) */
/* WARNING: Removing unreachable block (ram,0x2c0841b4) */
/* WARNING: Removing unreachable block (ram,0x2c0840fc) */
/* WARNING: Removing unreachable block (ram,0x2c08423a) */
/* WARNING: Removing unreachable block (ram,0x2c08423e) */

undefined8 FUN_2c08427c(int param_1,int param_2,int *param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int unaff_r6;
  int *piVar6;
  undefined4 unaff_r7;
  int iStack000000a4;
  
  piVar6 = (int *)(unaff_r6 + -0x22);
  if (!SBORROW4(unaff_r6,0x22)) {
    *param_3 = param_4;
    param_3[1] = unaff_r4;
    param_3[2] = (int)piVar6;
    param_3[3] = unaff_r6 * -0x80000000;
    *(short *)(unaff_r4 * 2) = (short)param_3 + 0x10;
    uVar4 = param_4 + 0x53;
    *(undefined2 *)(unaff_r4 * 2) = 0x34;
    iVar5 = *(int *)((int)piVar6 + param_1);
    *(char *)(uVar4 * 0x800 + 9) = (char)uVar4;
    *(undefined2 *)((uVar4 >> 0x13) + 0x20) = 0x20;
    return CONCAT44((int)*(short *)(iVar5 + 100) >> 0x18,unaff_r7);
  }
  *piVar6 = param_2;
  iStack000000a4 = unaff_r6 + -0x1e;
  uVar2 = *(ushort *)(unaff_r5 + 0x20);
  sVar3 = *(short *)(param_4 * 2);
  *(short *)(uVar2 + 0x38) = (short)*(undefined4 *)(param_2 + 0x10);
  *(char *)(sVar3 + 0x12) = (char)uVar2;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x95,0x2c0842e2);
  (*pcVar1)();
}

