/* FUN_2c447034 @ 0x2c447034 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c447034(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_cr3;
  undefined4 in_cr12;
  undefined8 uVar4;
  
  uVar4 = func_0x2c00102c((int)*(short *)(param_2 * 2));
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  if (0x8e < unaff_r7) {
    bVar1 = *(byte *)(unaff_r5 + 0xe);
    coprocessor_loadlong(9,in_cr3,unaff_r11);
    *(short *)((int)uVar4 + 0x34) = (short)uVar4;
    iVar2 = (unaff_r4 >> 0xb) * 0x20000;
                    /* WARNING: Could not recover jumptable at 0x2c44705c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(bVar1 + 0x7d))(iVar2,iVar3,*(undefined1 *)(iVar2 + iVar3));
    return;
  }
  coprocessor_store(7,in_cr12,unaff_r7 + -0xb0);
  *(undefined2 *)(extraout_r2 + 0x28) = 0x73b8;
  iRam2c4473b8 = extraout_r2;
  _LAB_2c4473bc = extraout_r3;
  iRam2c4473c0 = unaff_r5;
  uRam2c4473c4 = 0x2c447000;
  if ((extraout_r3 >> 6 & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

