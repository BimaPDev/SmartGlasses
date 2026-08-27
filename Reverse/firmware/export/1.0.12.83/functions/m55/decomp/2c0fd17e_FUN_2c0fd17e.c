/* FUN_2c0fd17e @ 0x2c0fd17e */

void FUN_2c0fd17e(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int *piVar3;
  int unaff_r7;
  
  piVar3 = *(int **)(unaff_r7 + 0x44);
  *piVar3 = param_3;
  piVar3[1] = unaff_r6;
  piVar3[2] = (int)piVar3;
  piVar3 = (int *)(unaff_r6 >> 0x19);
  *piVar3 = param_3;
  piVar3[1] = unaff_r4;
  piVar3[2] = unaff_r5;
  piVar3[3] = unaff_r6;
  bVar2 = *(byte *)((int)piVar3 + 0x2f);
  *(short *)(unaff_r5 + 0x36) = (short)*(undefined4 *)(*(int *)(param_3 + -0xcc) + 0x90);
  *(char *)(bVar2 + 0x12) = (char)unaff_r4;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(9,0x2c0fcbfe);
  (*pcVar1)();
}

