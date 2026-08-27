/* FUN_1403214c @ 0x1403214c */

undefined4 FUN_1403214c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = DAT_140321a8;
  piVar5 = DAT_140321a4;
  iVar3 = 1;
  iVar2 = (int)&DAT_c0520000 - (int)DAT_140321a4;
  piVar4 = DAT_140321a4;
  while (*(int *)(iVar2 + (int)piVar4) = iVar3, piVar4 != piVar1) {
    piVar4 = piVar4 + 1;
    iVar3 = *piVar4;
  }
  iVar3 = 1;
  while( true ) {
    if (*(int *)(iVar2 + (int)piVar5) != iVar3) {
      FUN_1402a6e8(4,0x2e2,DAT_140321bc,DAT_140321b8,DAT_140321b4);
      return 0;
    }
    if (piVar5 == DAT_140321ac) break;
    piVar5 = piVar5 + 1;
    iVar3 = *piVar5;
  }
  *DAT_140321b0 = 1;
  return 1;
}

