/* FUN_2c450322 @ 0x2c450322 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c450322(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint unaff_r4;
  uint *unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  int iStack00000010;
  
  bVar2 = *(byte *)(param_4 + 6);
  iStack00000010 = unaff_r6 + 0xad;
  if (iStack00000010 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r7 + param_1) = (short)param_4;
  if (unaff_r4 != 0) {
    uVar3 = *(ushort *)((int)unaff_r5 + (uint)bVar2);
    *(char *)((int)param_4 + 2) = (char)param_2;
    if (unaff_r6 < 0xffffff53) {
      *unaff_r5 = (uint)uVar3;
      unaff_r5[1] = unaff_r4;
      func_0x2b895014();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xbb,0x2c45031e);
      (*pcVar1)();
    }
    *(int *)(unaff_r6 + 0x125) = unaff_r7;
    *(char *)((int)unaff_r5 + 7) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = param_2;
  param_4[1] = 0;
  param_4[2] = unaff_r7;
  *(short *)(unaff_r6 + 0xb5) = (short)unaff_r7;
  *(int *)(unaff_r6 + 0xcd) = iStack00000010;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

