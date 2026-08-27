/* FUN_2c0b31c8 @ 0x2c0b31c8 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_2c0b31c8(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  if (unaff_r7 == 0) {
    *(char *)(*(ushort *)(unaff_r6 + -0x3ca) + 0xb) = (char)unaff_r4;
    return CONCAT44(param_2 + 0xfc,param_2);
  }
  if (unaff_r7 == 0x3f) {
    uVar1 = *(ushort *)(unaff_r4 + unaff_r5);
    *(undefined2 *)(uVar1 + 10) = 0xff31;
    uRam2c0b2e5c = (uint)uVar1;
    iRam2c0b2e60 = unaff_r4;
    iRam2c0b2e64 = unaff_r6 + -0x4e8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

