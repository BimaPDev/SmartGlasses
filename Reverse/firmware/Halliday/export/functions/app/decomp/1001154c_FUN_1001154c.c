/* FUN_1001154c @ 0x1001154c */

void FUN_1001154c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *DAT_100115d4;
  *(undefined1 *)(param_1 + 0x470) = 0;
  if (*(char *)(param_1 + 0x471) != '\0') {
    FUN_100a5b78((DAT_100115dc - DAT_100115d8) * 0x20 & 0xff00U | 0xc80031,DAT_100115e4,DAT_100115e0
                 ,DAT_100115d8,param_1);
    *(undefined1 *)(param_1 + 0x471) = 0;
    *(undefined2 *)(param_1 + 0x474) = 0;
    FUN_1013cec4(param_1 + 0x418);
    FUN_100a99c4(0,7,DAT_100115e8,0);
    piVar2 = (int *)(param_1 + 0x47c);
    do {
      piVar3 = piVar2 + 1;
      if (*piVar2 != 0) {
        FUN_100a0a70();
        FUN_100a0b00(*piVar2);
        *piVar2 = 0;
        piVar2[7] = 0;
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x498));
  }
  if (*DAT_100115d4 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

