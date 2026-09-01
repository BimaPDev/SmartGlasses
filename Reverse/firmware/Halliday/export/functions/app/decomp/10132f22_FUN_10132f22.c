/* FUN_10132f22 @ 0x10132f22 */

undefined4
FUN_10132f22(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  undefined4 *puVar6;
  
  iVar1 = FUN_100c5d4c(0x2027,0x27);
  if (iVar1 != 0) {
    iVar2 = FUN_100c1fe4(iVar1 + 8,0x27);
    iVar3 = FUN_10132eca(iVar2,param_1);
    puVar5 = param_2;
    puVar7 = (undefined4 *)(iVar3 + 7);
    do {
      puVar6 = puVar5 + 1;
      *puVar7 = *puVar5;
      puVar5 = puVar6;
      puVar7 = puVar7 + 1;
    } while (puVar6 != param_2 + 4);
    FUN_1011ea48(iVar2 + 0x17,0,0x10);
    uVar4 = FUN_100c5e48(0x2027,iVar1,0,param_4);
    return uVar4;
  }
  return 0xffffff97;
}

