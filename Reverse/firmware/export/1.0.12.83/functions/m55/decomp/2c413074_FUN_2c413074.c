/* FUN_2c413074 @ 0x2c413074 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c413074(int param_1,undefined1 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int iVar3;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_ZR;
  
  *(int *)(unaff_r5 + 0x34) = param_3;
  if (in_ZR == '\0') {
    uVar2 = *(undefined4 *)(unaff_r7 + 0x28);
    *(char *)(unaff_r4 + 9) = (char)unaff_r6;
    *(char *)(unaff_r4 + 0x11) = (char)uVar2;
    *(char *)(*(int *)(param_1 + 4) + 1) = (char)*(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r4 + 0x36) = (short)param_3;
  iVar1 = *(int *)(param_3 + 0x48);
  *(undefined1 *)(unaff_r4 + 9) = param_2;
  *(int *)(unaff_r6 + 0x24) = param_3;
  *(short *)(unaff_r4 + 0x3e) = (short)param_3;
  iVar3 = *(int *)(unaff_r4 + 0x48);
  *(undefined1 *)(iVar3 + 9) = param_2;
  *(int *)(unaff_r6 + 0x24) = param_3;
  *(char *)(iVar3 + 0xd) = (char)unaff_r6;
  uVar2 = *(undefined4 *)(param_4 + 0x48);
  uRam2c413515 = param_2;
  *(int *)(unaff_r6 + 100) = param_3;
  *(int *)(unaff_r5 + 0x14) = unaff_r5;
  *(undefined4 *)(unaff_r5 + 0x54) = 0x2c41350c;
  uRam2c413521 = (undefined1)param_4;
  *(char *)(*(int *)(iVar1 + 0x58) + 2) = (char)unaff_r5;
  *(char *)(unaff_r5 + 1) = (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

