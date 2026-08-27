/* FUN_2c4c06f8 @ 0x2c4c06f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c06f8(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = _LAB_2c4c0718;
  FUN_2c4c26a8(*_LAB_2c4c0718);
  uVar2 = *puVar1;
  if ((uVar2 <= DAT_2c4c264c + 0x118) && (uVar2 >= DAT_2c4c264c)) {
    uVar3 = FUN_2c4c2440(uVar2,0,0,uVar2 < DAT_2c4c264c,0x280);
    return uVar3;
  }
  return 2;
}

