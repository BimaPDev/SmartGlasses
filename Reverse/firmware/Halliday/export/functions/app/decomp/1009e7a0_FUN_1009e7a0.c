/* FUN_1009e7a0 @ 0x1009e7a0 */

int FUN_1009e7a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_54 [2];
  undefined1 local_52;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [28];
  
  FUN_1011ea48(auStack_54,0,0x14);
  iVar3 = FUN_1009e688(param_1);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1013ca1a(auStack_40,0,1);
    uVar7 = *(undefined4 *)(iVar3 + 8);
    local_52 = 4;
    uStack_48 = DAT_1009e858;
    local_4c = auStack_40;
    FUN_10063a30(uVar7);
    FUN_10114a38();
    iVar4 = FUN_1009ece8(param_1,auStack_54);
    if (iVar4 == 0) {
      FUN_101150e0();
    }
    else {
      FUN_10115194(*(undefined4 *)(iVar3 + 8),0xfffffff0);
      iVar6 = DAT_1009e85c;
      FUN_101150e0();
      uVar2 = DAT_1009e868;
      uVar1 = DAT_1009e864;
      iVar6 = iVar6 - DAT_1009e860;
      do {
        iVar5 = FUN_1011dbde(auStack_40,6000);
        if (iVar5 == 0) break;
        FUN_100a5b78(iVar6 * 0x20 & 0xff00U | 0xe30021,uVar2,uVar1,*(undefined4 *)(iVar3 + 4));
        iVar5 = FUN_1012d0c2(param_1);
      } while (iVar5 != 0);
      FUN_10063abc(uVar7);
    }
  }
  return iVar4;
}

