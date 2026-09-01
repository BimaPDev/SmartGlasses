/* FUN_10016708 @ 0x10016708 */

void FUN_10016708(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10016754;
  iVar1 = FUN_10015d78();
  if (iVar1 == 0) {
    if (*DAT_10016754 == iVar2) {
      return;
    }
  }
  else {
    FUN_101164a0(iVar1,DAT_10016758,0);
    if (*DAT_10016754 == iVar2) goto LAB_10016732;
  }
  FUN_1013cdc0();
LAB_10016732:
  FUN_101164a0(iVar1 + 0x1c,DAT_1001675c,0);
  return;
}

