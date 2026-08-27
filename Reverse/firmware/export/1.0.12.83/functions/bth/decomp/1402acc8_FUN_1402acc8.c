/* FUN_1402acc8 @ 0x1402acc8 */

void FUN_1402acc8(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  pcVar2 = DAT_1402adf4;
  if (DAT_1402adec + (param_1 & 0xfffffffc) <= DAT_1402adf0) {
    if ((*DAT_1402adf4 != '\0') && (FUN_14029cb0(DAT_1402adf8,1), *pcVar2 != '\0')) {
      FUN_14029cb0(DAT_1402adfc,7);
    }
    puVar3 = DAT_1402ae00;
    if (*(char *)(DAT_1402ae00 + 10) != '\0') {
      iVar8 = 0;
      puVar7 = DAT_1402ae00;
      do {
        (*(code *)*puVar7)(6,0);
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(puVar3 + 10));
    }
    iVar4 = DAT_1402ae10;
    uVar1 = DAT_1402adf0;
    iVar8 = DAT_1402adec;
    uVar9 = 0;
    uVar10 = 0;
    puVar7 = (undefined4 *)((param_1 & 0xfffffffc) - 0x40);
    do {
      if (uVar1 < (uint)((int)puVar7 + iVar8)) {
        return;
      }
      if ((uVar9 & 3) == 0) {
        if (uVar9 == 0x10) {
          uVar6 = 0x2a;
        }
        else {
          uVar6 = 0x20;
        }
        uVar10 = FUN_1402a350(iVar4,100,DAT_1402ae04,uVar6,puVar7,*puVar7);
      }
      else {
        iVar5 = FUN_1402a350(iVar4 + uVar10,100 - uVar10,DAT_1402ae08,*puVar7);
        uVar11 = uVar10 + iVar5;
        uVar10 = uVar11;
        if ((uVar9 & 3) == 3) {
          uVar10 = uVar11 + 1;
          if (100 < uVar10) {
            uVar11 = 99;
            uVar10 = 100;
          }
          *(undefined1 *)(iVar4 + uVar11) = 10;
          if (*(char *)(puVar3 + 10) != '\0') {
            iVar5 = 0;
            puVar12 = DAT_1402ae00;
            do {
              (*(code *)*puVar12)(7,iVar4,uVar10);
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < (int)(uint)*(byte *)(puVar3 + 10));
          }
          if (*pcVar2 != '\0') {
            FUN_14029cb0(iVar4,uVar10);
          }
          if (*DAT_1402ae0c - 1 < 2) {
            FUN_14029e30();
          }
        }
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 != 0x30);
  }
  return;
}

