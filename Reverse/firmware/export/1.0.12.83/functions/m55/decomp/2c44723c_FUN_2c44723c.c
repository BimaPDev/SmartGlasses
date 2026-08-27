/* FUN_2c44723c @ 0x2c44723c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4473f2) */
/* WARNING: Removing unreachable block (ram,0x2c447298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44723c(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 *extraout_r3;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  bool bVar3;
  char cVar4;
  undefined8 in_d3;
  undefined8 unaff_d13;
  
  iVar2 = unaff_r5 + unaff_r7;
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = unaff_r5;
  *(int *)(iVar2 + 8) = unaff_r7;
  *unaff_r4 = *(undefined4 *)(param_2 + 0x48);
  unaff_r4[1] = param_2;
  unaff_r4[2] = param_4;
  unaff_r4[3] = unaff_r6;
  unaff_r4[4] = &stack0x000001fc;
  *(char *)(param_4 * 0x40000 + 0xd) = (char)param_2;
  piVar1 = _LAB_2c447520;
  FloatVectorPairwiseMax(unaff_d13,in_d3,2);
  *_LAB_2c447520 = param_4 * 0x40000 + 0x34;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = (int)piVar1;
  piVar1[4] = 0x2c4473f0;
  piVar1[5] = (int)&stack0x000001b4;
  iVar2 = (int)(unaff_r4 + -0x10) >> 0x13;
  sRam2c44746a = (short)((int)(unaff_r4 + -0x10) >> 0x13);
  cVar4 = SBORROW4((int)piVar1,2);
  bVar3 = (param_2 >> 0x13 & 1) != 0;
  software_interrupt(0xfa);
  func_0x2b575d54((int)piVar1 + -2,param_2 >> 0x14,0xb111d);
  while ((cVar4 != '\0' && (bVar3))) {
    if (cVar4 != '\0') {
      *extraout_r3 = extraout_r1;
      extraout_r3[1] = extraout_r2;
      extraout_r3[2] = extraout_r3;
      extraout_r3[3] = iVar2;
      extraout_r3[4] = 0x2c4473f4;
      uRam2c44744c = unaff_r6;
      *(undefined4 *)(iVar2 + 0x50) = 0x17;
      uRam2c4474ac = 0x2c4473f4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

