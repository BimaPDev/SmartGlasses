/* FUN_140a0ee0 @ 0x140a0ee0 */

void FUN_140a0ee0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
  piVar2 = DAT_140a0f20;
  iVar1 = DAT_140a0f1c;
  iVar3 = FUN_140e53c8(1,DAT_140a0f1c,*DAT_140a0f20,0,in_r3);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a0f28,DAT_140a0f24,iVar1,iVar3);
  }
  iVar3 = *piVar2;
  iVar3 = FUN_140e53c8(1,iVar1 + iVar3,iVar3,0,in_r3);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a0f28,DAT_140a0f24,*piVar2 + iVar1,iVar3);
}

