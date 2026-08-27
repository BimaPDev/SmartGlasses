/* FUN_140bd0f0 @ 0x140bd0f0 */

void FUN_140bd0f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_140bd164;
  piVar1 = DAT_140bd160;
  *DAT_140bd15c = 0;
  FUN_1405016c(0,uVar2);
  if (*piVar1 == 0) {
    iVar3 = FUN_140e5998();
    *piVar1 = iVar3;
  }
  piVar1 = DAT_140bd168;
  if (*DAT_140bd168 == 0) {
    iVar3 = FUN_140e5138(DAT_140bd184);
    *piVar1 = iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_140bd170,DAT_140bd16c);
}

