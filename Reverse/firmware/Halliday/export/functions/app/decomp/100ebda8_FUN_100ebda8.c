/* FUN_100ebda8 @ 0x100ebda8 */

void FUN_100ebda8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  FUN_10138fe0();
  iVar4 = FUN_10138ff8();
  uVar5 = (DAT_100ebe78 - DAT_100ebe7c) * 0x20 & 0xff00;
  if (iVar4 == 0) {
    FUN_100a5b78(DAT_100ebeac | uVar5,DAT_100ebe88,DAT_100ebeb0,0);
  }
  else {
    FUN_100a5b78(DAT_100ebe80 | uVar5,DAT_100ebe88,DAT_100ebe84,iVar4);
  }
  puVar1 = DAT_100ebe94;
  FUN_100a5b78(DAT_100ebe90 | uVar5,DAT_100ebe88,DAT_100ebe98,*DAT_100ebe8c);
  uVar3 = DAT_100ebeb4;
  for (puVar6 = (undefined4 *)*puVar1; uVar2 = DAT_100ebea0, puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)puVar6[4]) {
    FUN_100a5b78(uVar5 | 0xe100034,DAT_100ebe88,uVar3,*puVar6,puVar6[3],puVar6[2],puVar6[1]);
  }
  uVar7 = DAT_100ebe9c | uVar5;
  for (iVar4 = puVar1[1]; uVar3 = DAT_100ebea8, iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3c)) {
    FUN_100a5b78(uVar7,DAT_100ebe88,uVar2,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 0x10),
                 *(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x20),
                 *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
  }
  for (iVar4 = *(int *)(DAT_100ebea4 + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3c)) {
    FUN_100a5b78(uVar5 | 0xe200032,DAT_100ebe88,uVar3,*(undefined4 *)(iVar4 + 4),
                 *(undefined4 *)(iVar4 + 0x20));
  }
  return;
}

