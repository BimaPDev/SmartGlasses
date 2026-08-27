/* FUN_2c6127fc @ 0x2c6127fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6127fc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_2c62c928();
  puVar4 = (undefined4 *)FUN_2c62c938(_LAB_2c612824);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_2c62c3b0(puVar4,0x14);
    uVar3 = _LAB_2c612834;
    uVar2 = _LAB_2c612830;
    uVar1 = _LAB_2c61282c;
    *puVar4 = _LAB_2c612828;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
  }
  return;
}

