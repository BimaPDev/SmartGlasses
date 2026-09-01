/* FUN_100f048c @ 0x100f048c */

undefined4 FUN_100f048c(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  
  FUN_1009dd80();
  uVar5 = FUN_1009343c();
  FUN_1012b336(uVar5,1);
  thunk_FUN_100f44ac(1,0x20,0x400,DAT_100f04b4);
  puVar1 = DAT_100f046c;
  FUN_10092f78(DAT_100f046c);
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 4) = DAT_100f0470;
  iVar2 = FUN_10092f98(puVar1);
  if (iVar2 == 0) {
    uVar3 = (DAT_100f0474 - DAT_100f0478) * 0x20 & 0xff00U | 0x680000;
    uVar5 = DAT_100f047c;
  }
  else {
    iVar4 = FUN_10087308();
    if (iVar4 == 0) {
      iVar4 = FUN_10087270();
      FUN_100872fc();
    }
    FUN_10124692(iVar2,iVar4);
    FUN_10087708(iVar2);
    FUN_1012b322();
    iVar2 = thunk_FUN_100f4960(1,DAT_100f0484,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = (DAT_100f0474 - DAT_100f0478) * 0x20 & 0xff00U | 0x7a0000;
    uVar5 = DAT_100f0488;
  }
  FUN_100a5b78(uVar3 | 0x11,DAT_100f0480,uVar5,DAT_100f0478,in_r3);
  return 0xffffffff;
}

