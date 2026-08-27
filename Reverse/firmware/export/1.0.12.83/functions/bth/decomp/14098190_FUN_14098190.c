/* FUN_14098190 @ 0x14098190 */

void FUN_14098190(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_140755e4();
  iVar1 = FUN_14086384(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_14098208);
  }
  uVar2 = FUN_140952cc(param_1);
  iVar1 = FUN_14097610();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x45,DAT_14098204,uVar2,*(undefined1 *)(iVar1 + 0xec),param_1[5],param_1[4],
                 *param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1409820c);
}

