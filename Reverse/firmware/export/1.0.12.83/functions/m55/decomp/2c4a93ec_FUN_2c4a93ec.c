/* FUN_2c4a93ec @ 0x2c4a93ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a93ec(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r3;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar5 = _LAB_2c4a9458;
  puVar1 = _LAB_2c4a9454;
  uVar4 = *_LAB_2c4a9454;
  uVar7 = param_4;
  if (param_4 < uVar4) {
    puVar6 = (undefined1 *)*_LAB_2c4a9458;
  }
  else {
    uVar3 = *_LAB_2c4a9458;
    *_LAB_2c4a9454 = param_4 + 4 & 0xfffffffc;
    puVar6 = (undefined1 *)func_0x2c4aa510(uVar3);
    uVar4 = *puVar1;
    *puVar5 = puVar6;
    puVar5 = extraout_r3;
  }
  FUN_2c674268(puVar6,0,uVar4,puVar5,uVar7);
  *puVar6 = param_2;
  FUN_2c674668(puVar6 + 1,param_3,param_4);
  iVar2 = FUN_2c4bd438(1,param_1,puVar6,param_4 + 1 & 0xffff);
  return -(uint)(iVar2 != 0);
}

