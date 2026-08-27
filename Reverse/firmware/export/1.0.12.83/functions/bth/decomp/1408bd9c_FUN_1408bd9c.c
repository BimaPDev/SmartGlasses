/* FUN_1408bd9c @ 0x1408bd9c */

void FUN_1408bd9c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_1407522c(0x41);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_140754ec(iVar1,9);
    *(undefined1 *)(param_2 + 0xa9) = 0;
    uVar3 = (uint)*(byte *)(param_2 + 0x96);
    uVar2 = DAT_1408c0ac;
    if (uVar3 < 10) {
      uVar2 = *(undefined4 *)(DAT_1408c0a8 + uVar3 * 4);
    }
    *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) & 0xf7;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x46,DAT_1408c0b0,param_1,*(undefined2 *)(param_2 + 0x12),
                 *(undefined2 *)(param_2 + 0x14),uVar3,uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1408c0bc,0x38);
}

