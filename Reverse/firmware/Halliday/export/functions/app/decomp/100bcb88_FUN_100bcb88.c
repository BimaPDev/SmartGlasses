/* FUN_100bcb88 @ 0x100bcb88 */

void FUN_100bcb88(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_100bcbe0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    FUN_1011ea48(DAT_100bcbe0,0,0x40);
    if (0x3e < param_2) {
      param_2 = 0x3f;
    }
    FUN_1013d428(iVar1,param_1,param_2,0x40);
    *(undefined1 *)(iVar1 + param_2) = 0;
    iVar2 = DAT_100bcbe8;
    *DAT_100bcbe4 = 1;
    FUN_100a5b78((iVar2 - DAT_100bcbec) * 0x20 & 0xff00U | 0x4180031,DAT_100bcbf4,DAT_100bcbf0,iVar1
                );
    return;
  }
  return;
}

