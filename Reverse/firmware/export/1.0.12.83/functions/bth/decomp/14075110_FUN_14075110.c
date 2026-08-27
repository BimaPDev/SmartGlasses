/* FUN_14075110 @ 0x14075110 */

void FUN_14075110(byte *param_1)

{
  int iVar1;
  
  if (0x27 < (*param_1 - 1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14075160,DAT_1407515c);
  }
  iVar1 = DAT_14075158 + (*param_1 - 1) * 0x28;
  if (*(byte **)(iVar1 + 0x20) == param_1) {
    FUN_140756c0();
    *(undefined1 *)(iVar1 + 1) = 0;
    FUN_140756b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14075164,DAT_1407515c,param_1);
}

