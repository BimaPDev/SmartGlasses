/* FUN_2c213350 @ 0x2c213350 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c213350(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int iVar2;
  int unaff_r10;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr14;
  undefined8 unaff_d8;
  undefined8 in_d16;
  
  software_interrupt(10);
  if (param_3 << 2 != 0 && param_3 << 2 < 0 == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  VectorHalvingAdd(unaff_d8,in_d16,1,1);
  if (unaff_r6 * 8 != 4) {
    coprocessor_movefromRt(0,7,2,in_cr14,in_cr0);
  }
  uVar1 = *(ushort *)(param_3 + 0x38);
  if (param_3 == unaff_r10) {
    iVar2 = _DAT_2c24e55c << 1;
    *(undefined1 *)((unaff_r5 & 0x23800) * 0x20 + 0x30) = 0x1c;
    *(int *)((unaff_r4 + 0x9e) * 8 + 4) = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_r4 + param_4 * 0x10000000 + -4) = unaff_r4;
  *(uint *)((uint)uVar1 * 2) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

