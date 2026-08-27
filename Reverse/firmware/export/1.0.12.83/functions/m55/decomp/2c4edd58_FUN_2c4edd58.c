/* FUN_2c4edd58 @ 0x2c4edd58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4edd58(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  char in_ZR;
  
  uVar2 = *param_3;
  if (in_ZR == '\0') {
    if (param_4 == 5) {
      FUN_2c638730(uVar2,_LAB_2c4eddc4);
      cVar1 = *_LAB_2c4eddb4;
      *_LAB_2c4eddbc = '\x01';
      if (cVar1 == '\0') {
        return;
      }
      goto LAB_2c4edd84;
    }
    FUN_2c638730(uVar2,_LAB_2c4eddb0);
    if (*_LAB_2c4eddb4 == '\0') {
      return;
    }
  }
  else {
    FUN_2c638730(uVar2,_LAB_2c4eddb8);
    *_LAB_2c4eddb4 = '\x01';
  }
  if (*_LAB_2c4eddbc == '\0') {
    return;
  }
LAB_2c4edd84:
                    /* WARNING: Could not recover jumptable at 0x2c4edd92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*_LAB_2c4eddc0 + 0x10) + 0xc))(*_LAB_2c4eddc0,2);
  return;
}

