/* FUN_2c43771c @ 0x2c43771c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c437f4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c43771c(int param_1,undefined4 param_2,char param_3,int param_4)

{
  uint unaff_r4;
  int unaff_r5;
  int unaff_r7;
  int unaff_r10;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr12;
  
  if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_4 + 9) = (char)((uint)param_2 >> 0x18);
  if (unaff_r5 < 0x19) {
    *(char *)(param_1 + 6) = param_3 + '\x05';
    *_LAB_2c43829c = (short)_LAB_2c43829c;
    uRam0000001b = 0x2c3bf2bc;
    uRam0000001f = uRam00000009;
    uRam00000023 = uRam0000000d;
    iRam00000027 = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(*(int *)(unaff_r7 + 4) + 0x24) = (short)*(undefined4 *)(unaff_r7 + 0x10);
  coprocessor_moveto(0xd,5,0,unaff_r10 * 2,in_cr12,in_cr0);
  return CONCAT44(param_2,unaff_r4 * 0x20000 + (uint)((unaff_r4 & 0x10) != 0));
}

