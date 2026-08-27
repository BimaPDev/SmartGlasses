/* FUN_2c48a674 @ 0x2c48a674 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a674(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = _LAB_2c48a714;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x77,DAT_2c48a728,DAT_2c48a72c,_LAB_2c48a734);
  }
  if (*_LAB_2c48a710 != '\0') {
    piVar3 = (int *)FUN_2c4728e8(5,4);
    puVar2 = DAT_2c48a718;
    *piVar3 = param_1;
    FUN_2c644044(*puVar1,0xffffffff);
    iVar4 = FUN_2c4858f0(*puVar2,DAT_2c48a71c,piVar3);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x85,DAT_2c48a728,DAT_2c48a72c,DAT_2c48a724,DAT_2c48a720,param_1);
    }
    FUN_2c4857c8(*puVar2,piVar3);
    FUN_2c644080(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x7c,DAT_2c48a728,DAT_2c48a72c,_LAB_2c48a730);
}

