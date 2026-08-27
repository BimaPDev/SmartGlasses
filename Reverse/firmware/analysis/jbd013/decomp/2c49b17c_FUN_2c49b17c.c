/* FUN_2c49b17c @ 0x2c49b17c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49b17c(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_2c4969dc(0x12,0x13);
  puVar2 = _LAB_2c49b1b8;
  piVar1 = _LAB_2c49b1b0;
  iVar5 = *_LAB_2c49b1b0;
  *_LAB_2c49b1b4 = 1;
  *piVar1 = iVar5 + 1;
  FUN_2c673c48(0);
  FUN_2c4c26a8(*puVar2);
  uVar3 = *puVar2;
  if ((uVar3 <= DAT_2c4c264c + 0x118) && (uVar3 >= DAT_2c4c264c)) {
    uVar4 = FUN_2c4c2440(uVar3,0,0,uVar3 < DAT_2c4c264c,800);
    return uVar4;
  }
  return 2;
}

