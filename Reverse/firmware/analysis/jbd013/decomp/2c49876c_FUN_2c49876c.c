/* FUN_2c49876c @ 0x2c49876c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49876c(void)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uStack_24;
  undefined2 uStack_20;
  byte abStack_1c [6];
  byte abStack_16 [2];
  undefined4 uStack_14;
  byte *pbVar4;
  
  uStack_14 = *_LAB_2c498824;
  uStack_24 = *_LAB_2c498828;
  uStack_20 = (undefined2)_LAB_2c498828[1];
  FUN_2c498000(0,0,&uStack_24,6);
  FUN_2c497ab0(0,0,0,abStack_1c,6);
  iVar2 = 0;
  pbVar4 = abStack_1c;
  do {
    pbVar3 = pbVar4 + 1;
    iVar2 = iVar2 + (uint)*pbVar4;
    pbVar4 = pbVar3;
  } while (pbVar3 != abStack_16);
  if (iVar2 == 0xc3) {
    FUN_2c497ab0(1,0,0,abStack_1c,6);
    iVar2 = 0;
    pbVar4 = abStack_1c;
    do {
      pbVar3 = pbVar4 + 1;
      iVar2 = iVar2 + (uint)*pbVar4;
      pbVar4 = pbVar3;
    } while (pbVar3 != abStack_16);
    if (iVar2 == 0xc3) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x328,_LAB_2c498834,_LAB_2c498830,_LAB_2c49882c);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x324,_LAB_2c498834,_LAB_2c498830,_LAB_2c498838,uVar1,iVar2);
}

