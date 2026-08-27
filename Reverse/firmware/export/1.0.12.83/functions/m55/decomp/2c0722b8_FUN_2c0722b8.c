/* FUN_2c0722b8 @ 0x2c0722b8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0722b8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int unaff_r7;
  
  bVar1 = *(byte *)(unaff_r7 + 8);
  uVar2 = -(uint)(bVar1 < 0xe0) - param_1;
  *(undefined4 *)((param_1 >> (uVar2 & 0xff)) + 0x24) = param_4;
  *(ushort *)(uVar2 * 2) = (ushort)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

