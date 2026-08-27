/* FUN_2c5a4bc8 @ 0x2c5a4bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a4bc8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e518(0,uVar1,_LAB_2c5a4c70);
  FUN_2c48e518((int)uRam2c5a4c68,uVar1,_LAB_2c5a4c74);
  uVar2 = FUN_2c48e738();
  FUN_2c48e4c8(uVar2,_LAB_2c5a4c78,1);
  FUN_2c48e4c8(uVar2,_LAB_2c5a4c7c,0);
  uVar3 = FUN_2c48e3e8(uVar2);
  FUN_2c48e5b4(uVar1,_LAB_2c5a4c80,uVar3);
  uVar4 = FUN_2c48e3e8(uVar1);
  if (*_LAB_2c5a4c84 == '\x01') {
    FUN_2c5a49b0(param_1,uVar4);
  }
  FUN_2c48e87c(uVar3);
  FUN_2c48e87c(uVar4);
  FUN_2c48dea0(uVar2);
  FUN_2c48dea0(uVar1);
  uVar1 = _LAB_2c5a4c88;
  *_LAB_2c5a4c8c = 1;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5a4c94,0xff,_LAB_2c5a4c90,uVar1);
}

