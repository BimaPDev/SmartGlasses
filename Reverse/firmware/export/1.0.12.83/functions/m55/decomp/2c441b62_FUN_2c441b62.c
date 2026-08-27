/* FUN_2c441b62 @ 0x2c441b62 */

undefined8 FUN_2c441b62(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint unaff_r5;
  int *piVar2;
  int unaff_r6;
  int unaff_pc;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(char *)(param_2 + 0x15) = (char)param_3;
  }
  uVar1 = *(ushort *)(param_3 + 0x2e);
  piVar2 = (int *)(unaff_r5 >> 7);
  *piVar2 = param_2;
  piVar2[1] = (uint)uVar1;
  piVar2[2] = param_3;
  piVar2[3] = unaff_r6;
  *(char *)(param_2 + 0xf) = (char)unaff_r6;
  *(short *)(param_2 + 0x24) = (short)param_2;
  *(short *)(unaff_pc + 0xf25) = (short)param_3 + -0x9e;
  uRam2c441a77 = (char)uVar1;
  return CONCAT44(unaff_r6,param_2);
}

