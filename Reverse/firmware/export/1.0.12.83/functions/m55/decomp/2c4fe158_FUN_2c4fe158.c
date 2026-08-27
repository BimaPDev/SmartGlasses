/* FUN_2c4fe158 @ 0x2c4fe158 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fe158(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = func_0x2c4ff9d4();
  uVar3 = _LAB_2c50245c;
  iVar1 = **(int **)(iVar1 + 0xa0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
    uVar2 = registry_lookup(_LAB_2c502458);
    FUN_2c638730(uVar4,uVar2);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar2 = registry_lookup(_LAB_2c502460);
    FUN_2c638730(uVar4,uVar2);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = registry_lookup(_LAB_2c502464);
    FUN_2c638730(uVar4,uVar2);
    func_0x2c501864(iVar1 + 0x144);
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_2c5e2e80(uVar3);
    FUN_2c606e38(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = FUN_2c5e2e80(uVar3);
    FUN_2c606e38(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar2 = FUN_2c5e2e80(uVar3);
    FUN_2c606e38(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = FUN_2c5e2e80(_LAB_2c502468);
    FUN_2c606e38(uVar4,uVar2,0);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = FUN_2c5e2e80(uVar3);
    FUN_2c603c40(uVar2,0x57,uVar3,0);
    return;
  }
  return;
}

