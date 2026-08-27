/* FUN_2c5fcfe0 @ 0x2c5fcfe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fcfe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar5;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  int *piVar4;
  
  puVar2 = _LAB_2c5fd098;
  puVar1 = _LAB_2c5fd08c;
  iStack_1c = *DAT_2c5fd088;
  FUN_2c644044(*_LAB_2c5fd098,0xffffffff,param_3,0);
  do {
    func_0x2c644248(&iStack_28,*puVar1,0);
    if (iStack_28 == 0x10) {
      FUN_2c5fbddc(uStack_24);
      break;
    }
  } while (iStack_28 == 0);
  piVar5 = _LAB_2c5fd090 + 0x10;
  piVar3 = _LAB_2c5fd090;
  do {
    piVar4 = piVar3 + 1;
    if (*piVar3 != 0) {
      FUN_2c5fc7c4();
      *piVar3 = 0;
    }
    piVar3 = piVar4;
  } while (piVar4 != piVar5);
  (**(code **)(puVar1[0x12] + 0xfc))(0);
  (**(code **)(puVar1[0x12] + 0x40))(0);
  (**(code **)(puVar1[0x12] + 0xdc))(0);
  if (*(char *)(puVar1 + 0x13) == '\0') {
    FUN_2c5fee28(puVar1[1]);
  }
  *DAT_2c5fd094 = 0;
  if (*DAT_2c5fd088 == iStack_1c) {
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

