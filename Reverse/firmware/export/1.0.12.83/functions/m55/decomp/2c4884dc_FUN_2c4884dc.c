/* FUN_2c4884dc @ 0x2c4884dc */

void FUN_2c4884dc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  puVar2 = DAT_2c488580;
  puVar1 = DAT_2c48857c;
  if (*DAT_2c488578 != '\0') {
    FUN_2c644044(*DAT_2c48857c,0xffffffff);
    for (iVar3 = FUN_2c485890(*puVar2); iVar4 = FUN_2c4858a8(*puVar2), iVar3 != iVar4;
        iVar3 = FUN_2c4858c0(iVar3)) {
      pcVar5 = *(code **)(*(byte **)(iVar3 + 4) + 4);
      if ((pcVar5 != (code *)0x0) && (**(byte **)(iVar3 + 4) == param_1)) {
        (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14);
      }
    }
    FUN_2c644080(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4d,DAT_2c488590,DAT_2c48858c);
}

