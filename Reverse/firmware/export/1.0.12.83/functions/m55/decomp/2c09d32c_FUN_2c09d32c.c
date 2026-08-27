/* FUN_2c09d32c @ 0x2c09d32c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c09d32c(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  int iVar4;
  int *unaff_r7;
  int unaff_r11;
  undefined4 in_cr3;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (-1 < unaff_r4 >> 0xe) {
    func_0x2cadfad8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *unaff_r7;
  iVar3 = unaff_r7[1];
  iVar4 = unaff_r7[3];
  uVar1 = (uint)*(byte *)(iVar2 * 2);
  *(uint *)(&stack0x00000050 + iVar3) = uVar1;
  coprocessor_movefromRt(10,1,5,in_cr3,in_cr12);
  *(short *)(&stack0x00000018 + iVar3) = (short)iVar4;
  coprocessor_load(4,in_cr15,unaff_r11 + -0x194);
                    /* WARNING: Could not recover jumptable at 0x2c09d47e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r11 + 0x2c09d482))(uVar1,iVar2,0,0x22);
  return;
}

