/* FUN_2c49f310 @ 0x2c49f310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49f310(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = _LAB_2c49f3ec;
  iVar6 = *_LAB_2c49f3ec;
  if (iVar6 == 0) {
    iVar6 = FUN_2c4c2c50(_LAB_2c49f428,1000);
    *piVar1 = iVar6;
  }
  puVar2 = _LAB_2c49f3f0;
  uVar7 = FUN_2c4c2cd8(iVar6,0x6c);
  uVar5 = _LAB_2c49f3fc;
  uVar4 = _LAB_2c49f3f8;
  uVar3 = _DAT_2c49f3f4;
  *puVar2 = uVar7;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x66e,uVar5,uVar4,uVar3,0x6c);
}

