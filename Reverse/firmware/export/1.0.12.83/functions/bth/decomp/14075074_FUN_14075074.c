/* FUN_14075074 @ 0x14075074 */

void FUN_14075074(byte *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *param_1 - 1;
  if (0x27 < (uVar2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14075104,DAT_14075100);
  }
  iVar4 = DAT_140750f4 + uVar2 * 0x28;
  if (*(byte **)(iVar4 + 0x20) != param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14075108,DAT_14075100,param_1);
  }
  if (*(char *)(DAT_140750f4 + uVar2 * 0x28) == '\0') {
    return;
  }
  FUN_140756c0();
  FUN_14074d80();
  piVar1 = DAT_140750fc;
  iVar3 = *DAT_140750fc;
  *(undefined4 *)(iVar4 + 0x14) = *DAT_140750f8;
  *(undefined1 *)(iVar4 + 1) = 1;
  if (iVar3 != 0) {
    FUN_140756a8();
  }
  iVar4 = FUN_14074dc0();
  if (iVar4 != 0) {
    *piVar1 = 1;
    FUN_14075698();
    FUN_140756b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1407510c,DAT_14075100,0);
}

