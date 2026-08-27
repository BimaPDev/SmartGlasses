/* FUN_2c4e6d20 @ 0x2c4e6d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6d20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = FUN_2c4e94fc();
  iVar2 = FUN_2c4e9354();
  pcVar4 = *(code **)(iVar2 + 0x58);
  uVar3 = (**(code **)(iVar1 + 0xc))(2);
  (*pcVar4)(_LAB_2c4e6d40,uVar3);
  return _LAB_2c4e6d44;
}

