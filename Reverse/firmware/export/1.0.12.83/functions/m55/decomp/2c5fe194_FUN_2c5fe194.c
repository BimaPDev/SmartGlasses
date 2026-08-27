/* FUN_2c5fe194 @ 0x2c5fe194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fe194(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = _LAB_2c5fe204;
  uStack_14 = *_LAB_2c5fe200;
  *_LAB_2c5fe1fc = param_1;
  func_0x2c5fbcc0(auStack_24,param_2,0);
  uStack_18 = param_1;
  uVar2 = FUN_2c5fbcd4(auStack_24,_LAB_2c5fe208);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x13a,_LAB_2c5fe214,_LAB_2c5fe210,uVar1,_LAB_2c5fe20c,param_1,uVar2);
}

