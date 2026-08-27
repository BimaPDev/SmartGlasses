/* FUN_2c4e70ac @ 0x2c4e70ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4e70ac(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_2c4e94fc();
  iVar1 = (**(code **)(iVar1 + 0x2c))();
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e70d4,iVar1);
  uVar3 = _LAB_2c4e70dc & ~(iVar1 >> 0x20);
  if (iVar1 < 0) {
    uVar3 = _LAB_2c4e70d8;
  }
  return uVar3;
}

