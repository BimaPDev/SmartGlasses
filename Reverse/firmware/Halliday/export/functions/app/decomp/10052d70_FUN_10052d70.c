/* FUN_10052d70 @ 0x10052d70 */

void FUN_10052d70(void)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  undefined4 local_18;
  int local_14;
  
  iVar1 = DAT_10052e04;
  local_14 = *DAT_10052e00;
  if (*(char *)(DAT_10052e04 + 6) != '\0') {
    *(int *)(DAT_10052e04 + 0x14) = *(int *)(DAT_10052e04 + 0x14) + 1;
    if (*(short *)(iVar1 + 0x28) != 0) {
      unaff_r4 = (DAT_10052e0c - DAT_10052e08) * 0x20 & 0xff00;
      FUN_100a5b78(unaff_r4 | 0x1d40031,DAT_10052e10,DAT_10052e14);
      iVar2 = FUN_1005385c();
      if (iVar2 == 0) goto LAB_10052de4;
      FUN_100a5b78(unaff_r4 | 0x1e40011,DAT_10052e10,DAT_10052e18,iVar2);
    }
  }
  while( true ) {
    FUN_100434c0(&local_18);
    *(undefined4 *)(iVar1 + 0x18) = local_18;
    FUN_100528bc();
    if (*DAT_10052e00 == local_14) break;
    FUN_1013cdc0();
LAB_10052de4:
    FUN_100a5b78(unaff_r4 | 0x1e80031,DAT_10052e10,DAT_10052e1c);
    FUN_10052ce4();
  }
  return;
}

