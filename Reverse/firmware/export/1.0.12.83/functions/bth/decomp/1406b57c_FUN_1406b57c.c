/* FUN_1406b57c @ 0x1406b57c */

void FUN_1406b57c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar8;
  int iVar9;
  int *piVar7;
  
  piVar8 = DAT_1406b5d0 + 2;
  piVar6 = DAT_1406b5d0;
  do {
    piVar7 = piVar6 + 1;
    iVar4 = *piVar6;
    if ((iVar4 != 0) && (uVar5 = (uint)*(byte *)(iVar4 + 0x4c), uVar5 != 0)) {
      uVar2 = 0;
      uVar3 = 0;
      do {
        iVar1 = *(int *)(iVar4 + 0x48);
        iVar9 = iVar1 + uVar3 * 6;
        uVar2 = uVar2 + 1;
        if (*(byte *)(iVar9 + 4) == param_1) {
          *(undefined1 *)(iVar9 + 4) = 0xff;
          *(undefined2 *)(iVar1 + uVar3 * 6) = 0;
          uVar5 = (uint)*(byte *)(iVar4 + 0x4c);
        }
        uVar3 = uVar2 & 0xff;
      } while ((uVar2 & 0xff) < uVar5);
    }
    piVar6 = piVar7;
  } while (piVar7 != piVar8);
  return;
}

