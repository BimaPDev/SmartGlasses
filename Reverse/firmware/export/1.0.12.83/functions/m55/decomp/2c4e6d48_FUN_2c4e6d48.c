/* FUN_2c4e6d48 @ 0x2c4e6d48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6d48(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_2c4e94fc();
  iVar2 = (*(code *)*puVar1)();
  iVar3 = FUN_2c4e9354();
  (**(code **)(iVar3 + 0x58))(_LAB_2c4e6d70,iVar2);
  uVar4 = _LAB_2c4e6d78;
  if (iVar2 != 0) {
    uVar4 = _LAB_2c4e6d74;
  }
  return uVar4;
}

