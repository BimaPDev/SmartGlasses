/* FUN_2c2d8f92 @ 0x2c2d8f92 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d8f92(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 *puVar2;
  
  *param_4 = unaff_r5;
  uVar1 = uRam2c2d8f9c;
  puVar2 = (undefined4 *)(unaff_r7 + 8);
  *(undefined4 **)(unaff_r7 + 0x50) = puVar2;
  *puVar2 = param_2;
  *(undefined4 *)(unaff_r7 + 0xc) = *(undefined4 *)(unaff_r7 + 4);
  *(undefined4 *)(unaff_r7 + 0x10) = unaff_r4;
  *(undefined4 *)(unaff_r7 + 0x14) = uVar1;
  *(undefined4 *)(unaff_r7 + 0x18) = unaff_r6;
  *(undefined4 **)(unaff_r7 + 0x1c) = puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

