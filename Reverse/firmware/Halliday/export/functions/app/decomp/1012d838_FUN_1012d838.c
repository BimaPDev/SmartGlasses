/* FUN_1012d838 @ 0x1012d838 */

void FUN_1012d838(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  FUN_100a4328();
  FUN_100a4544();
  FUN_1009ecd0();
  FUN_1009eae4();
  FUN_1009e630();
  FUN_100af490();
  FUN_100a1c18();
  FUN_100a7ec4();
  FUN_100a2e58();
  FUN_100a3298();
  FUN_100e7e44();
  FUN_100a4254();
  FUN_10116500(DAT_100a1cbc,100);
  FUN_1011ea48(auStack_28,0,0x10,in_r3);
  iVar2 = FUN_10112e84(DAT_10067f00);
  piVar1 = DAT_10067f0c;
  iVar4 = DAT_10067f04 - DAT_10067f08;
  *DAT_10067f0c = iVar2;
  uVar5 = iVar4 * 0x20 & 0xff00;
  if (iVar2 == 0) {
    uVar5 = uVar5 | 0x200000;
    uVar3 = DAT_10067f10;
  }
  else {
    local_1c = 2;
    local_20 = 0;
    local_24 = 10000;
    (**(code **)(*(int *)(iVar2 + 8) + 8))(iVar2,auStack_28);
    iVar2 = (*(code *)**(undefined4 **)(*piVar1 + 8))(*piVar1,0);
    if (-1 < iVar2) {
      FUN_100a5b78(uVar5 | 0x350031,DAT_10067f14,DAT_10067f1c,local_24);
      return;
    }
    uVar5 = uVar5 | 0x310000;
    uVar3 = DAT_10067f18;
  }
  FUN_100a5b78(uVar5 | 0x11,DAT_10067f14,uVar3);
  return;
}

