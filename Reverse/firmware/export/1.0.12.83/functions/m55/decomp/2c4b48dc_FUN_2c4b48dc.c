/* FUN_2c4b48dc @ 0x2c4b48dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b48dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = _LAB_2c4b491c;
  func_0x2c4b4e60(param_1,param_3);
  if (*piVar3 != 0) {
    return;
  }
  iVar5 = FUN_2c4c2c50(_LAB_2c4b4920,0x20000);
  *_LAB_2c4b4924 = iVar5;
  uVar4 = _LAB_2c4b4928;
  if (iVar5 != 0) {
    *piVar3 = 0x400000;
    *_LAB_2c4b4228 = _LAB_2c4b492c;
    puVar1 = _LAB_2c4b4230;
    *_LAB_2c4b422c = 0;
    puVar2 = _LAB_2c4b4234;
    *puVar1 = uVar4;
    *puVar2 = 0x400000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4b4934,_DAT_2c4b4930);
}

