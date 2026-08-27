/* FUN_14074f94 @ 0x14074f94 */

void FUN_14074f94(byte *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_14074fe8;
  uVar3 = *param_1 - 1;
  if (0x27 < (uVar3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14074ff0,DAT_14074fec);
  }
  iVar4 = DAT_14074fe8 + uVar3 * 0x28;
  if (*(byte **)(iVar4 + 0x20) == param_1) {
    FUN_140756c0();
    puVar2 = *(undefined1 **)(iVar4 + 0x20);
    *(undefined1 *)(iVar1 + uVar3 * 0x28) = 0;
    *puVar2 = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    FUN_140756b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14074ff4,DAT_14074fec,param_1);
}

