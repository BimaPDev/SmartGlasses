/* FUN_2c48c320 @ 0x2c48c320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48c320(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _LAB_2c48c374;
  uVar3 = _LAB_2c48c370;
  uVar2 = _LAB_2c48c36c;
  sVar1 = *_LAB_2c48c368;
  *_LAB_2c48c368 = sVar1 + 1;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x20a,uVar4,uVar3,uVar2,sVar1 + 1);
}

