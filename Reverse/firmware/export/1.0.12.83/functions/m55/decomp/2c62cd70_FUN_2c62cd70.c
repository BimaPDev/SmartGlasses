/* FUN_2c62cd70 @ 0x2c62cd70 */

void FUN_2c62cd70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined1 param_7,undefined4 param_8,uint param_9,
                 uint param_10,undefined4 param_11,undefined4 param_12,uint param_13)

{
  char extraout_r2;
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  undefined8 uVar8;
  char *local_64;
  char acStack_5c [32];
  int local_3c;
  
  uVar8 = CONCAT44(param_6,param_5);
  local_3c = *DAT_2c62ce50;
  if ((param_5 == 0 && param_6 == 0) &&
     (uVar2 = param_13 & 0xffffffef, iVar3 = param_13 << 0x15, param_13 = uVar2, iVar3 < 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((param_13 & 0x20) == 0) {
      cVar7 = 'a';
    }
    else {
      cVar7 = 'A';
    }
    pcVar6 = acStack_5c;
    do {
      uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar4 = (uint)uVar8;
      uVar8 = FUN_2c672ae8(uVar4,uVar5,param_9,param_10);
      uVar2 = uVar2 + 1;
      if (extraout_r2 < '\n') {
        cVar1 = extraout_r2 + '0';
      }
      else {
        cVar1 = extraout_r2 + cVar7 + -10;
      }
      *pcVar6 = cVar1;
    } while ((param_10 < uVar5 || uVar5 - param_10 < (uint)(param_9 <= uVar4)) &&
            (pcVar6 = pcVar6 + 1, uVar2 < 0x20));
  }
  local_64 = acStack_5c;
  FUN_2c62caf8(param_1,param_2,param_3,param_4,local_64,uVar2,param_7,param_9,param_11,param_12,
               param_13);
  if (*DAT_2c62ce50 == local_3c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

