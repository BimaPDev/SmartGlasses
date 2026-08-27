/* FUN_2c25270e @ 0x2c25270e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c25270e(void)

{
  ushort uVar1;
  int iVar2;
  int in_r3;
  int *unaff_r6;
  int unaff_r7;
  
  iVar2 = unaff_r7 * 8;
  uVar1 = *(ushort *)(iVar2 + 0x38);
  unaff_r6[0x19] = (int)unaff_r6;
  *unaff_r6 = iVar2;
  unaff_r6[1] = iVar2;
  unaff_r6[2] = in_r3;
  unaff_r6[3] = (uint)uVar1;
  unaff_r6[4] = (int)unaff_r6;
  *(uint *)(in_r3 << 2) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

