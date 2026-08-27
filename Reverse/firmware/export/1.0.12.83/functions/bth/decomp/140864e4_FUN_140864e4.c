/* FUN_140864e4 @ 0x140864e4 */

undefined4 FUN_140864e4(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 1) {
    if (param_3 < 0x1a) {
      if (-1 < (int)((DAT_140865f8 >> (param_3 & 0xff)) << 0x1f)) goto LAB_14086556;
    }
    else if (param_3 != 0x33) {
LAB_14086556:
      iVar1 = FUN_1408aa84(param_3);
      if ((iVar1 == 0) && ((iVar1 = FUN_140926cc(), iVar1 == 0 || (param_3 != 0x1f)))) {
        uVar2 = 4;
        goto LAB_14086586;
      }
    }
    iVar1 = FUN_14085e30(param_2 & 0xfff);
    if ((iVar1 == 0) || (1 < *(byte *)(iVar1 + 0x4b) - 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_140865fc);
    }
    if ((*(uint *)(iVar1 + 0x44) & 0xff00ff00) == 0) {
      if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_140865f4,*(undefined1 *)(param_4 + 0x1b),*(undefined1 *)(iVar1 + 0x35)
                    );
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140865f4,0xff,*(undefined1 *)(iVar1 + 0x35));
    }
  }
  uVar2 = 3;
LAB_14086586:
  FUN_1408df8c(param_1,uVar2,param_2,0,0);
  return 0;
}

