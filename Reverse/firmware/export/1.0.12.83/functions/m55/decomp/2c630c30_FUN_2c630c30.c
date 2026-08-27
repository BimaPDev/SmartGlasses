/* FUN_2c630c30 @ 0x2c630c30 */

void FUN_2c630c30(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  short sVar7;
  
  uVar1 = FUN_2c6041dc(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  cVar5 = *param_2;
  if (cVar5 == '\0') {
    sVar7 = 1;
  }
  else {
    sVar7 = 0;
    pcVar4 = param_2;
    do {
      if (cVar5 == '\n') {
        sVar7 = sVar7 + 1;
        *(short *)(param_1 + 0x24) = sVar7;
      }
      pcVar4 = pcVar4 + 1;
      cVar5 = *pcVar4;
    } while (cVar5 != '\0');
    sVar7 = sVar7 + 1;
  }
  *(short *)(param_1 + 0x24) = sVar7;
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfe;
    FUN_2c638730(uVar1,param_2);
    sVar7 = *(short *)(param_1 + 0x26);
  }
  else {
    cVar5 = '\a';
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
    iVar2 = FUN_2c66c4ec(param_2);
    iVar2 = iVar2 + 1;
    iVar3 = FUN_2c62bf1c(iVar2 * 7);
    iVar6 = iVar3;
    do {
      iVar6 = iVar6 + iVar2;
      FUN_2c6435c4(iVar6 - iVar2,param_2);
      cVar5 = cVar5 + -1;
      *(undefined1 *)(iVar6 + -1) = 10;
    } while (cVar5 != '\0');
    *(undefined1 *)(iVar2 * 7 + iVar3 + -1) = 0;
    FUN_2c638730(uVar1,iVar3);
    FUN_2c62c040(iVar3);
    sVar7 = *(short *)(param_1 + 0x24) * 3;
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) * 7;
    *(short *)(param_1 + 0x26) = sVar7;
    if ((int)((uint)*(byte *)(param_1 + 0x2a) << 0x1f) < 0) {
      FUN_2c630880(param_1);
      sVar7 = *(short *)(param_1 + 0x26);
    }
  }
  *(short *)(param_1 + 0x28) = sVar7;
  FUN_2c600bac(uVar1);
  return;
}

