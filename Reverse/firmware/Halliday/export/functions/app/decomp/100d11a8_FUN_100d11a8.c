/* FUN_100d11a8 @ 0x100d11a8 */

undefined4 FUN_100d11a8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = FUN_10135838(param_1,0xc);
  if (iVar1 == 0) {
    uVar3 = 8;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c1fe4(iVar1 + 8,0x40);
    puVar5 = (undefined4 *)*DAT_100d11fc;
    puVar4 = puVar2;
    puVar7 = puVar5;
    do {
      puVar6 = puVar7;
      puVar7 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
    } while (puVar7 != puVar5 + 8);
    puVar4 = puVar2 + 8;
    do {
      puVar2 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar2;
    } while (puVar2 != puVar6 + 9);
    FUN_10135546(param_1,iVar1,0);
    uVar3 = 0;
  }
  return uVar3;
}

