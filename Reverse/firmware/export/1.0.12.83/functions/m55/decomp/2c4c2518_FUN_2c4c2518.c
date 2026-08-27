/* FUN_2c4c2518 @ 0x2c4c2518 */

void FUN_2c4c2518(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_2c4c2558;
  if (*DAT_2c4c2554 == '\0') {
    iVar3 = DAT_2c4c2558 + 0x118;
    *DAT_2c4c2554 = '\x01';
    do {
      *(undefined1 *)(iVar4 + -0x14) = 0;
      *(int *)(iVar4 + -0x10) = iVar4;
      uVar2 = DAT_2c4c2560;
      iVar1 = DAT_2c4c255c;
      iVar4 = iVar4 + 0x14;
    } while (iVar4 != iVar3);
    *(undefined4 *)(DAT_2c4c255c + 0x11c) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    *(int *)(iVar1 + 300) = iVar1;
    *(undefined4 *)(iVar1 + 0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x2c674700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c674704)(1,uVar2);
    return;
  }
  return;
}

