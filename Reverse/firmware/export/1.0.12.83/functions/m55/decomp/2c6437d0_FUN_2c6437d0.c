/* FUN_2c6437d0 @ 0x2c6437d0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6437d0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  byte unaff_lr;
  undefined4 *puVar5;
  undefined4 unaff_s16;
  undefined4 unaff_s17;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s20;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  func_0x2c646bf8();
  piVar1 = _LAB_2c643828;
  iVar3 = *_LAB_2c643828;
  iVar4 = _LAB_2c643828[1];
  if (iVar3 == iVar4) {
    return param_1;
  }
  iVar2 = getProcessStackPointer();
  *(undefined4 *)(iVar2 + -4) = unaff_r11;
  *(undefined4 *)(iVar2 + -8) = unaff_r10;
  *(undefined4 *)(iVar2 + -0xc) = unaff_r9;
  *(undefined4 *)(iVar2 + -0x10) = unaff_r8;
  *(undefined4 *)(iVar2 + -0x14) = unaff_r7;
  *(undefined4 *)(iVar2 + -0x18) = unaff_r6;
  *(undefined4 *)(iVar2 + -0x1c) = unaff_r5;
  puVar5 = (undefined4 *)(iVar2 + -0x20);
  *puVar5 = unaff_r4;
  if ((unaff_lr & 0x10) == 0) {
    puVar5 = (undefined4 *)(iVar2 + -0x60);
    *puVar5 = unaff_s16;
    *(undefined4 *)(iVar2 + -0x5c) = unaff_s17;
    *(undefined4 *)(iVar2 + -0x58) = unaff_s18;
    *(undefined4 *)(iVar2 + -0x54) = unaff_s19;
    *(undefined4 *)(iVar2 + -0x50) = unaff_s20;
    *(undefined4 *)(iVar2 + -0x4c) = unaff_s21;
    *(undefined4 *)(iVar2 + -0x48) = unaff_s22;
    *(undefined4 *)(iVar2 + -0x44) = unaff_s23;
    *(undefined4 *)(iVar2 + -0x40) = unaff_s24;
    *(undefined4 *)(iVar2 + -0x3c) = unaff_s25;
    *(undefined4 *)(iVar2 + -0x38) = unaff_s26;
    *(undefined4 *)(iVar2 + -0x34) = unaff_s27;
    *(undefined4 *)(iVar2 + -0x30) = unaff_s28;
    *(undefined4 *)(iVar2 + -0x2c) = unaff_s29;
    *(undefined4 *)(iVar2 + -0x28) = unaff_s30;
    *(undefined4 *)(iVar2 + -0x24) = unaff_s31;
  }
  *(undefined4 **)(iVar3 + 0x38) = puVar5;
  *(byte *)(iVar3 + 0x22) = unaff_lr;
  *piVar1 = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

