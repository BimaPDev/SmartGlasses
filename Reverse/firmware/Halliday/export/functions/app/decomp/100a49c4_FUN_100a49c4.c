/* FUN_100a49c4 @ 0x100a49c4 */

undefined4 FUN_100a49c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = thunk_FUN_10112e84(DAT_100a4a70);
  uVar5 = (DAT_100a4a74 - DAT_100a4a78) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(uVar5 | 0x1740011,DAT_100a4a80,DAT_100a4a7c,DAT_100a4a78,param_1,param_2);
  }
  else {
    (*(code *)**(undefined4 **)(iVar2 + 8))();
    FUN_1011ea48(DAT_100a4a84,0,400);
    iVar3 = thunk_FUN_1009efa0(DAT_100a4a88,DAT_100a4a84,400);
    uVar1 = DAT_100a4a94;
    uVar8 = uVar5 | DAT_100a4a90;
    piVar6 = DAT_100a4a84;
    iVar2 = 0;
    do {
      if ((piVar6[1] == 0) && (*piVar6 != 0x6270)) {
        *piVar6 = 0x6270;
      }
      iVar4 = *piVar6;
      iVar7 = iVar2 + 1;
      FUN_100a5b78(uVar8,DAT_100a4a80,uVar1,iVar2,piVar6[1],iVar4);
      piVar6 = piVar6 + 2;
      iVar2 = iVar7;
    } while (iVar7 != 0x19);
    if (-1 < iVar3) {
      return 0;
    }
    FUN_100a5b78(uVar5 | 0x1920012,DAT_100a4a80,DAT_100a4a8c,DAT_100a4a88,iVar3,iVar4);
  }
  return 0xffffffff;
}

