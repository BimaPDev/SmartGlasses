/* FUN_2c4e6c00 @ 0x2c4e6c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6c00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  
  iVar4 = FUN_2c4e94fc();
  uVar3 = _LAB_2c4e6ccc;
  uVar2 = _LAB_2c4e6cc8;
  uVar1 = _LAB_2c4e6cb4;
  iVar7 = 0;
  while( true ) {
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 8))(iVar7);
    (*pcVar8)(uVar2,iVar7,uVar6);
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 0xc))(iVar7);
    (*pcVar8)(uVar3,iVar7,uVar6);
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 0x10))(iVar7);
    (*pcVar8)(uVar1,iVar7,uVar6);
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 0x14))(iVar7);
    (*pcVar8)(_LAB_2c4e6cb8,iVar7,uVar6);
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 0x34))(iVar7);
    (*pcVar8)(_LAB_2c4e6cbc,iVar7,uVar6);
    iVar5 = FUN_2c4e9354();
    pcVar8 = *(code **)(iVar5 + 0x58);
    uVar6 = (**(code **)(iVar4 + 0x38))(iVar7);
    (*pcVar8)(_LAB_2c4e6cc0,iVar7,uVar6);
    if (iVar7 != 0) break;
    iVar7 = 1;
  }
  return _LAB_2c4e6cc4;
}

