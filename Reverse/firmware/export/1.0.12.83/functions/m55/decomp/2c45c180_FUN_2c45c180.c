/* FUN_2c45c180 @ 0x2c45c180 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45c180(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int unaff_r4;
  int unaff_r5;
  
  uVar1 = *(ushort *)(unaff_r4 + 4);
  *(ushort *)(unaff_r5 + 0x16) = uVar1 - 0xd7;
  *(undefined4 *)(uVar1 - 0x6b) = param_2;
  if (0xd6 < uVar1) {
    *(char *)(param_1 + 5) = (char)param_4;
    *(int *)(param_4 >> 0x12) = (int)&stack0x0000016c >> 0xf;
    func_0x2d1c6c78();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

