/* FUN_10098558 @ 0x10098558 */

void FUN_10098558(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 extraout_r2;
  short sVar7;
  undefined4 extraout_r3;
  char *pcVar8;
  char cVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    uVar10 = FUN_10094174(3,DAT_1009869c,0x68,DAT_100986a0,DAT_10098698,DAT_10098694,DAT_10098690);
    FUN_10119dc2(DAT_100986a8,DAT_100986a4,DAT_1009869c,0x68,uVar10);
    FUN_10119dc2(DAT_100986ac);
    FUN_1011a1f0(DAT_1009869c,0x68,extraout_r2,extraout_r3);
  }
  uVar1 = FUN_1012beea(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  pcVar6 = (char *)(param_2 + -1);
  while( true ) {
    pcVar6 = pcVar6 + 1;
    sVar7 = *(short *)(param_1 + 0x2c) + 1;
    if (*pcVar6 == '\0') break;
    if (*pcVar6 == '\n') {
      *(short *)(param_1 + 0x2c) = sVar7;
    }
  }
  *(short *)(param_1 + 0x2c) = sVar7;
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe;
    FUN_10097998(uVar1,param_2);
  }
  else {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
    iVar3 = FUN_1011ea10(param_2);
    iVar3 = iVar3 + 1;
    iVar4 = FUN_100942d8(iVar3 * 7);
    cVar9 = '\a';
    iVar2 = iVar4;
    do {
      iVar2 = iVar2 + iVar3;
      FUN_1011e9f0(iVar2 - iVar3,param_2);
      cVar9 = cVar9 + -1;
      *(undefined1 *)(iVar2 + -1) = 10;
    } while (cVar9 != '\0');
    *(undefined1 *)(iVar3 * 7 + iVar4 + -1) = 0;
    FUN_10097998(uVar1,iVar4);
    FUN_10094444(iVar4);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2c) * 3;
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) * 7;
    FUN_1012bf96(param_1);
  }
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x2e);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10094268(*(int *)(param_1 + 0x34),DAT_100986a0);
  }
  iVar2 = FUN_10094254((uint)*(ushort *)(param_1 + 0x2c) << 2,DAT_100986a0);
  *(int *)(param_1 + 0x34) = iVar2;
  if (iVar2 != 0) {
    pcVar6 = (char *)FUN_1012bec6(uVar1);
    iVar2 = 1;
    puVar5 = *(undefined4 **)(param_1 + 0x34);
    *puVar5 = pcVar6;
    while( true ) {
      pcVar8 = pcVar6 + 1;
      cVar9 = *pcVar6;
      if (cVar9 == '\0') break;
      pcVar6 = pcVar8;
      if (cVar9 == '\n') {
        puVar5[iVar2] = pcVar8;
        iVar2 = iVar2 + 1;
      }
    }
  }
  FUN_1012543e(uVar1);
  return;
}

