/* FUN_2c4574f6 @ 0x2c4574f6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4574f6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_r5;
  int iVar3;
  int unaff_r7;
  
  piVar1 = (int *)(unaff_r7 >> 0x1f);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  if ((int)piVar1 + 0x5e < 0) {
    *(undefined4 *)(unaff_r7 + -0xe0) = param_1;
    *(undefined4 *)(unaff_r7 + -0xdc) = param_2;
    *(int *)(unaff_r7 + -0xd8) = (int)piVar1 + 0x5e;
    *(int *)(unaff_r7 + -0xd4) = iVar2;
    *(undefined4 *)(unaff_r7 + -0xd0) = unaff_r5;
    *(int *)(unaff_r7 + -0xcc) = iVar3;
    *(undefined4 **)(unaff_r7 + -200) = (undefined4 *)(unaff_r7 + -0xe0);
    *(undefined1 *)((int)piVar1 + 0x69) = *(undefined1 *)(unaff_r7 + -0xc1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 + iVar2 == 0 || param_4 + iVar2 < 0 != SCARRY4(param_4,iVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

