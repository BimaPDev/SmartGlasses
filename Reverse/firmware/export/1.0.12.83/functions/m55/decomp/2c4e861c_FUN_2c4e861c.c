/* FUN_2c4e861c @ 0x2c4e861c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e861c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = _LAB_2c4e8654;
  iVar3 = 0;
  puVar5 = _LAB_2c4e8650;
  do {
    iVar2 = FUN_2c4e9354();
    iVar4 = iVar3 + 1;
    (**(code **)(iVar2 + 0x58))(uVar1,iVar3,*puVar5,*(code **)(iVar2 + 0x58),param_4);
    iVar3 = iVar4;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 5);
  iVar3 = FUN_2c4e9354();
  (**(code **)(iVar3 + 0x58))(_LAB_2c4e8658,param_1);
  return 0;
}

