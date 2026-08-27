/* FUN_2c4e8850 @ 0x2c4e8850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8850(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = func_0x2c4efeec(*param_2);
  if ((4 < bVar3) && (iVar4 = FUN_2c4e861c(bVar3), iVar4 == 0)) {
    return _LAB_2c4e8920;
  }
  uVar2 = _LAB_2c4e890c;
  uVar1 = _LAB_2c4e8904;
  *_LAB_2c4e8908 = bVar3;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x99,uVar2,_LAB_2c4e8910,uVar1,bVar3);
}

