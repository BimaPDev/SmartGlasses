/* FUN_2c41303a @ 0x2c41303a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c41303a(undefined4 param_1,undefined1 param_2)

{
  ushort uVar1;
  int unaff_r4;
  int unaff_r5;
  
  *(undefined1 *)(unaff_r5 + 0xd) = param_2;
  uVar1 = *(ushort *)(unaff_r4 + 6);
  *(char *)(unaff_r5 + 0x1d) = (char)*(undefined4 *)(uVar1 + 0x48);
  *(uint *)(unaff_r4 + 0x14) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

