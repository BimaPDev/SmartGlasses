/* FUN_2c4a5624 @ 0x2c4a5624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a5624(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = _LAB_2c4a5710;
  iVar6 = *_LAB_2c4a5710;
  if (iVar6 == 0) {
    iVar6 = FUN_2c4c2c50(_LAB_2c4a5750,1000);
    *piVar1 = iVar6;
  }
  puVar2 = _LAB_2c4a5714;
  uVar7 = FUN_2c4c2cd8(iVar6,0x74);
  uVar5 = _LAB_2c4a5720;
  uVar4 = _LAB_2c4a571c;
  uVar3 = _LAB_2c4a5718;
  *puVar2 = uVar7;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x5e3,uVar5,_LAB_2c4a5724,uVar4,uVar3,0x5e3,0x74);
}

