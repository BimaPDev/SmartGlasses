/* FUN_100582d0 @ 0x100582d0 */

void FUN_100582d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  char *pcVar13;
  int iVar14;
  undefined1 local_3d;
  undefined1 auStack_3c [28];
  
  FUN_1005a014(param_1,*(int *)(param_1 + 8) + 8);
  iVar10 = DAT_100582ec;
  iVar9 = *(int *)(param_1 + 8) + 8;
  iVar11 = 0;
  uVar12 = 0;
  while( true ) {
    iVar14 = iVar11 + 1;
    piVar7 = (int *)FUN_1005955c(iVar9,iVar11,auStack_3c);
    if (piVar7 == (int *)0x0) break;
    uVar4 = 0;
    if (*piVar7 != 0) {
      uVar4 = FUN_1011ea10();
    }
    iVar11 = iVar14;
    if (uVar12 < uVar4) {
      uVar12 = uVar4;
    }
  }
  if (uVar12 != 0) {
    if (iVar10 != 0) {
      FUN_10059990(param_1,0,iVar10);
    }
    uVar3 = DAT_1005a010;
    uVar2 = DAT_1005a00c;
    uVar1 = DAT_1005a008;
    iVar10 = 0;
    while( true ) {
      iVar11 = iVar10 + 1;
      puVar8 = (undefined4 *)FUN_1005955c(iVar9,iVar10,auStack_3c);
      if (puVar8 == (undefined4 *)0x0) break;
      pcVar13 = (char *)*puVar8;
      iVar14 = puVar8[1];
      sVar5 = FUN_1011ea10(uVar1);
      iVar10 = iVar11;
      if ((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) {
        sVar6 = FUN_1011ea10(pcVar13);
        local_3d = 0x20;
        FUN_10059990(param_1,0,uVar2,uVar1,pcVar13);
        for (uVar4 = 0; uVar4 < (ushort)(uVar12 - sVar6); uVar4 = uVar4 + 1) {
          FUN_100597f8(param_1,&local_3d,1);
        }
        FUN_10059990(param_1,0,uVar3,uVar1,pcVar13);
        if (iVar14 == 0) {
          FUN_1011b14c(*(undefined4 *)(param_1 + 0x14),DAT_1005a004);
        }
        else {
          FUN_10059e2c(param_1,iVar14,uVar12 + 1 + sVar5 * 2);
        }
      }
    }
  }
  return;
}

