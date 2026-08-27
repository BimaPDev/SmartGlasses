/* FUN_2c0f8ff8 @ 0x2c0f8ff8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f8ff8(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r10;
  
  iVar2 = _DAT_2c0f9110;
  bRam000000a3 = *(byte *)((int)unaff_r4 + 0x1a);
  *(short *)((int)unaff_r4 + 0x2a) = (short)unaff_r4;
  *(short *)(param_1 + 0x2a) = (short)*(undefined4 *)(unaff_r5 + 0x14);
  bVar1 = *(byte *)(bRam000000a3 + 0x1a);
  *(undefined4 *)(iVar2 * 2) = param_3;
  uVar3 = _DAT_2c0f92e0;
  *unaff_r4 = unaff_r10;
  unaff_r4[1] = iVar2;
  unaff_r4[2] = uVar3;
  unaff_r4[3] = (uint)bVar1;
  *(char *)(unaff_r5 + 3) = (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

