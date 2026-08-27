/* FUN_14084e94 @ 0x14084e94 */

undefined4 FUN_14084e94(uint param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*DAT_14084f08;
  if (piVar1 != DAT_14084f08) {
    iVar2 = 0x3ea;
    do {
      if (*(ushort *)(piVar1 + 2) == param_1) {
        if ((char)piVar1[8] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_14084f10,param_1,piVar1,param_4);
        }
        piVar1[7] = param_3;
        *(undefined1 *)((int)piVar1 + 10) = param_2;
        *(undefined1 *)(piVar1 + 8) = 1;
        if ((piVar1[5] != 0) && ((short)piVar1[4] != 0)) {
          FUN_14090744(piVar1[5]);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14084f0c,param_1,piVar1,param_4);
      }
      iVar2 = iVar2 + -1;
      piVar1 = (int *)*piVar1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14082394();
      }
    } while (piVar1 != DAT_14084f08);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14084f14,param_1,piVar1,param_4);
}

