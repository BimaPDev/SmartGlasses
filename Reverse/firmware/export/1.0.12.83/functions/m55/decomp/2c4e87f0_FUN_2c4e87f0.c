/* FUN_2c4e87f0 @ 0x2c4e87f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e87f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = func_0x2c4efeec(*param_2);
  if ((4 < bVar4) && (iVar5 = FUN_2c4e861c(bVar4), iVar5 == 0)) {
    return _LAB_2c4e884c;
  }
  uVar3 = _LAB_2c4e8840;
  uVar2 = _LAB_2c4e883c;
  uVar1 = _LAB_2c4e8834;
  *_LAB_2c4e8838 = bVar4;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x8d,uVar3,uVar2,uVar1,bVar4);
}

