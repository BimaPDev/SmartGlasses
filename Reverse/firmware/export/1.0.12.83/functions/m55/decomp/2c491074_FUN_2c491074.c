/* FUN_2c491074 @ 0x2c491074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c491074(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  puVar1 = _LAB_2c4910c8;
  iVar2 = FUN_2c485890(*_LAB_2c4910c8);
  do {
    iVar3 = FUN_2c4858a8(*puVar1);
    if (iVar2 == iVar3) {
      return;
    }
    pbVar4 = *(byte **)(iVar2 + 4);
    iVar2 = FUN_2c4858c0(iVar2);
  } while (*pbVar4 != param_1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xea,_LAB_2c4910d4,_LAB_2c4910d0,_LAB_2c4910cc,param_1);
}

