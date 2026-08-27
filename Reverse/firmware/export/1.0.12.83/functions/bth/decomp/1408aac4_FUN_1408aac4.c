/* FUN_1408aac4 @ 0x1408aac4 */

undefined4 FUN_1408aac4(uint param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(DAT_1408ab3c + 8);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    iVar3 = 0x3ea;
    do {
      if (*(ushort *)(piVar2 + 2) == param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1408ab40,param_1);
      }
      iVar3 = iVar3 + -1;
      piVar2 = (int *)*piVar2;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1408a810();
      }
    } while (piVar2 != piVar1);
  }
  iVar3 = FUN_140759b8(0x14);
  if (iVar3 != 0) {
    FUN_14074a08(iVar3,DAT_1408ab44);
    *(undefined4 *)(iVar3 + 0xc) = param_3;
    *(undefined4 *)(iVar3 + 0x10) = param_4;
    *(short *)(iVar3 + 8) = (short)param_1;
    *(undefined1 *)(iVar3 + 10) = param_2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1408ab48,param_1);
}

