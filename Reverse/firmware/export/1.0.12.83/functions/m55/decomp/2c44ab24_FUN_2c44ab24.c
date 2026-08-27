/* FUN_2c44ab24 @ 0x2c44ab24 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44ab24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 extraout_r3;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r7;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = &uStack_18;
  uStack_18 = param_3;
  uStack_14 = param_4;
  func_0x2cd2a5a8();
  *(undefined2 *)((unaff_r4 >> 8) + 0x24) = *(undefined2 *)(unaff_r7 + 8);
  *(undefined1 *)((unaff_r4 >> 8) + 4) = extraout_r3;
  uVar1 = *(undefined4 *)(unaff_r5 + 0x10);
  iVar3 = unaff_r5 + 0x14;
  if (0xf3 < unaff_r5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    *(short *)(iVar3 + 0x32) = (short)uVar1;
    iVar3 = puVar2[2];
    uVar1 = puVar2[4];
    puVar2 = puVar2 + 5;
  } while (!SBORROW4(unaff_r5,0xf4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

