/* FUN_10093048 @ 0x10093048 */

void FUN_10093048(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_1012a754(param_2,0x14,param_3,param_4,param_1,param_2,param_3);
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    *param_2 = param_1[8];
    param_2[1] = param_1[9];
  }
  else {
    if (cVar1 == '\x02') {
      uVar3 = param_1[3];
    }
    else {
      if (cVar1 != '\x04') goto LAB_10093066;
      uVar3 = 10;
    }
    param_2[2] = uVar3;
  }
LAB_10093066:
  if (*(code **)(pcVar2 + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10093072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pcVar2 + 4))(pcVar2,param_2);
    return;
  }
  FUN_10094174(2,DAT_100930a4,0xbf,DAT_100930a0,DAT_1009309c);
  return;
}

