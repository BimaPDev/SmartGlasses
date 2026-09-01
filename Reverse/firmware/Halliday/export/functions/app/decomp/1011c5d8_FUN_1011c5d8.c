/* FUN_1011c5d8 @ 0x1011c5d8 */

undefined4 FUN_1011c5d8(int param_1,undefined4 param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [64];
  
  iVar3 = 0x40;
  while( true ) {
    pcVar1 = (code *)FUN_10063450();
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*pcVar1)(auStack_98,0x40);
    if (iVar2 == 0) break;
    iVar2 = *(short *)(param_3 + 2) + 0x1f;
    if (iVar2 < 0) {
      iVar2 = *(short *)(param_3 + 2) + 0x3e;
    }
    FUN_1011ca16(auStack_b8,auStack_98,param_3 + 0x24,(iVar2 << 0x13) >> 0x18);
    iVar2 = FUN_1011d25c(auStack_58,auStack_b8,param_3);
    if (iVar2 != 0) {
      iVar3 = *(short *)(param_3 + 2) + 7;
      if (iVar3 < 0) {
        iVar3 = *(short *)(param_3 + 2) + 0xe;
      }
      FUN_1011d2ac(param_2,iVar3 >> 3,auStack_b8);
      FUN_1011d2ac(param_1,(int)param_3[1],auStack_58);
      FUN_1011d2ac(param_1 + param_3[1],(int)param_3[1],auStack_58 + *param_3 * 4);
      FUN_1011c5ca(auStack_b8,0x20);
      return 1;
    }
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

