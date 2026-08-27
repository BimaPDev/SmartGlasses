/* FUN_14084d98 @ 0x14084d98 */

undefined4 FUN_14084d98(uint param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*DAT_14084e1c;
  if (piVar1 != DAT_14084e1c) {
    iVar2 = 0x3ea;
    do {
      if (*(ushort *)(piVar1 + 2) == param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14084e20,param_1);
      }
      iVar2 = iVar2 + -1;
      piVar1 = (int *)*piVar1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14082394();
      }
    } while (piVar1 != DAT_14084e1c);
  }
  iVar2 = FUN_140759b8(0x24);
  if (iVar2 != 0) {
    FUN_140e5658(iVar2,0,0x24);
    FUN_14074a08(iVar2,DAT_14084e1c);
    *(short *)(iVar2 + 8) = (short)param_1;
    *(undefined4 *)(iVar2 + 0x14) = param_3;
    *(undefined2 *)(iVar2 + 0x10) = param_4;
    *(undefined4 *)(iVar2 + 0x18) = param_2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14084e24,param_1);
}

