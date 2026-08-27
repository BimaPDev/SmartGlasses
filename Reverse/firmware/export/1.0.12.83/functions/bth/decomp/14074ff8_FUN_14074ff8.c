/* FUN_14074ff8 @ 0x14074ff8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14074ff8(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1 - 1;
  if (0x27 < (uVar1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14075070,_LAB_14075068);
  }
  iVar2 = _LAB_14075064 + uVar1 * 0x28;
  if (*(byte **)(iVar2 + 0x20) == param_1) {
    if (*(char *)(_LAB_14075064 + uVar1 * 0x28) == '\0') {
      return;
    }
    FUN_140756c0();
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    *(undefined4 *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar2 + 4) = param_5;
    *(undefined4 *)(iVar2 + 8) = param_5;
    *(undefined4 *)(iVar2 + 0x18) = param_3;
    *(undefined4 *)(iVar2 + 0x1c) = param_4;
    FUN_140756b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(_LAB_1407506c,_LAB_14075068,param_1);
}

