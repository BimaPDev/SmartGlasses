/* FUN_140870ec @ 0x140870ec */

void FUN_140870ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_14085c48();
  iVar2 = FUN_14075c1c(0x80);
  iVar3 = FUN_140786b4();
  if ((iVar1 != 0) && ((iVar2 < 8 || (iVar3 < 8)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14087130,*(undefined1 *)(iVar1 + 0x52),iVar2,iVar3);
  }
  return;
}

