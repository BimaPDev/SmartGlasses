/* FUN_10011924 @ 0x10011924 */

void FUN_10011924(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_100119ac;
  iVar2 = *DAT_1001199c;
  iVar3 = *DAT_100119ac;
  FUN_100a5b78(DAT_100119a8 | (DAT_100119a0 - DAT_100119a4) * 0x20 & 0xff00U,DAT_100119b4,
               DAT_100119b0,param_1,param_2);
  FUN_1001154c(*piVar1);
  if (*(char *)(DAT_100119b8 + 0x8e) == '\n') {
    if (*DAT_1001199c == iVar2) {
      return;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x470) = 1;
    *(undefined2 *)(iVar3 + 0x476) = 0;
    piVar1 = DAT_1001199c;
    *(undefined4 *)(iVar3 + 0x46c) = param_2;
    if (*piVar1 == iVar2) goto LAB_10011982;
  }
  FUN_1013cdc0();
LAB_10011982:
  FUN_10011734(iVar3);
  return;
}

