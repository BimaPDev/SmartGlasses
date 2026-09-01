/* FUN_100348d0 @ 0x100348d0 */

void FUN_100348d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_10034930;
  if (param_1 == 0x10) goto LAB_10034916;
  if (param_1 != 0x14) {
    if (param_1 != 0x16) {
      FUN_100a5b78((DAT_10034938 - DAT_10034934) * 0x20 & 0xff00U | 0x1880011,DAT_10034940,
                   DAT_1003493c,param_1,param_1);
      iVar2 = DAT_10034944;
      while( true ) {
        if (*DAT_10034930 == iVar1) break;
        FUN_1013cdc0(iVar2);
LAB_10034916:
        iVar2 = 0;
LAB_10034918:
        iVar2 = iVar2 * 0xe + DAT_10034948;
      }
      return;
    }
    iVar2 = 2;
    goto LAB_10034918;
  }
  iVar2 = 1;
  goto LAB_10034918;
}

