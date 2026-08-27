/* FUN_1407ec34 @ 0x1407ec34 */

undefined4 FUN_1407ec34(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1407ecb8;
  uVar1 = FUN_1408ad94();
  if (param_2 != 0) {
    if (*DAT_1407ecb8 == iVar2) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  iVar2 = *(int *)(param_3 + 0x18);
  if (((iVar2 != 0) && (*(short *)(iVar2 + 8) != 0)) && (*(char *)(iVar2 + 0xc) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1407eccc,uVar1,*(short *)(iVar2 + 8),*(char *)(iVar2 + 0xc));
  }
  if (1 < *(byte *)(param_3 + 2) - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1407ecbc,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1407ecc4,uVar1);
}

