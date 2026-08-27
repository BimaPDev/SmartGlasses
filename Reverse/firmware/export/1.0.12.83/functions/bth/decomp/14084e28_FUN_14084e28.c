/* FUN_14084e28 @ 0x14084e28 */

undefined4 FUN_14084e28(uint param_1,undefined1 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*DAT_14084e88;
  if (piVar1 != DAT_14084e88) {
    iVar2 = 0x3ea;
    do {
      if (*(ushort *)(piVar1 + 2) == param_1) {
        *(undefined1 *)((int)piVar1 + 0xb) = param_2;
        *(short *)(piVar1 + 3) = (short)param_3;
        if (param_4 <= param_3) {
          *(short *)((int)piVar1 + 0xe) = (short)param_4;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14084e8c,param_1,param_3,param_4);
      }
      iVar2 = iVar2 + -1;
      piVar1 = (int *)*piVar1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14082394();
      }
    } while (piVar1 != DAT_14084e88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14084e90,param_1);
}

