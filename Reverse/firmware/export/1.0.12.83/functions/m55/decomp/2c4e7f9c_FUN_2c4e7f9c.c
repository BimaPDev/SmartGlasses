/* FUN_2c4e7f9c @ 0x2c4e7f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e7f9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar5 = _LAB_2c4e8030;
  iVar4 = 0;
  uVar7 = 0;
  do {
    puVar8 = puVar5 + iVar4;
    iVar4 = iVar4 + 4;
    uVar3 = FUN_2c66c4ec(*puVar8);
    uVar2 = _LAB_2c4e8040;
    uVar1 = _LAB_2c4e8034;
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
  } while (iVar4 != 0x150);
  puVar8 = _LAB_2c4e8030 + 0x150;
  puVar5 = _LAB_2c4e8030;
  do {
    func_0x2c4efe98(*puVar5,uVar7);
    puVar6 = puVar5 + 4;
    iVar4 = FUN_2c4e9354();
    (**(code **)(iVar4 + 0x58))(uVar2,*(undefined1 *)(puVar5 + 1),*(undefined1 *)((int)puVar5 + 5));
    iVar4 = FUN_2c4e9354();
    (**(code **)(iVar4 + 0x58))(uVar1,puVar5[3]);
    puVar5 = puVar6;
  } while (puVar6 != puVar8);
  iVar4 = FUN_2c4e9354();
  (**(code **)(iVar4 + 0x58))(_LAB_2c4e8038);
  func_0x2c4efe98(_LAB_2c4e803c,uVar7);
  iVar4 = FUN_2c4e9354();
  (**(code **)(iVar4 + 0x58))(_LAB_2c4e8040,0);
  iVar4 = FUN_2c4e9354();
                    /* WARNING: Could not recover jumptable at 0x2c4e802e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 0x58))(_LAB_2c4e8048,_LAB_2c4e8044);
  return;
}

