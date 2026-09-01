/* FUN_100a66c0 @ 0x100a66c0 */

void FUN_100a66c0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int local_1c [2];
  
  local_1c[0] = 0;
  FUN_10056b90(7,local_1c);
  if (local_1c[0] == 0) {
    FUN_10119dc2(DAT_100a6768);
  }
  else {
    iVar2 = FUN_10112e84(DAT_100a6754);
    uVar3 = FUN_1005ddc8(0xfb);
    uVar1 = DAT_100a6760;
    uVar5 = DAT_100a6758;
    if ((uVar3 != 0) && (iVar2 != 0)) {
      if (0x3fff < *(uint *)(uVar3 + 0x10)) {
        FUN_10119dc2(DAT_100a6764,DAT_100a6760,0x4000);
        uVar5 = 0;
        pcVar4 = *(code **)(*(int *)(iVar2 + 8) + 8);
        (*pcVar4)(iVar2,pcVar4,*(undefined4 *)(uVar3 + 0xc),0,*(undefined4 *)(uVar3 + 0x10),0);
        pcVar4 = *(code **)(*(int *)(iVar2 + 8) + 4);
        (*pcVar4)(iVar2,pcVar4,*(undefined4 *)(uVar3 + 0xc),0,uVar1,uVar5,0x4000,0);
        FUN_10056ae4(7,0);
        return;
      }
      iVar2 = 0x4000;
      uVar5 = DAT_100a675c;
      uVar3 = *(uint *)(uVar3 + 0x10);
    }
    FUN_10119dc2(uVar5,uVar3,iVar2);
  }
  return;
}

