/* FUN_140a421c @ 0x140a421c */

void FUN_140a421c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1402a6e8(4,0x2ae,DAT_140a428c,DAT_140a4288,DAT_140a4280,DAT_140a4284);
  FUN_140a367c(0,DAT_140a4290);
  uVar2 = FUN_140a26ac(DAT_140a4294,0x400);
  piVar1 = DAT_140a4298;
  iVar3 = *DAT_140a4298;
  *DAT_140a429c = uVar2;
  if (iVar3 == 0) {
    iVar3 = FUN_140e56e8(DAT_140a42a4);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a42a8);
    }
  }
  piVar1 = DAT_140a42a0;
  if (*DAT_140a42a0 == 0) {
    iVar3 = FUN_140e5418(DAT_140a42ac);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a42b0);
    }
  }
  return;
}

