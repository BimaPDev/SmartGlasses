/* FUN_14067bc4 @ 0x14067bc4 */

int FUN_14067bc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte param_5,
                short param_6,short param_7,short param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_14067cc4;
  piVar1 = (int *)FUN_14066108(param_2);
  if (param_6 == 0) {
    iVar2 = 1;
  }
  else if (((param_5 < 2) && (param_4 < 3)) && ((param_4 == 0 || (param_7 == 0)))) {
    if (((piVar1 == (int *)0x0) || (*(int *)(*piVar1 + 8) == 0)) ||
       ((param_9 == 0 && (*(int *)(*piVar1 + 0xc) == 0)))) {
      iVar2 = 0x42;
    }
    else {
      sVar3 = param_8 + 3;
      if (param_4 == 1) {
        uVar4 = 0x31;
      }
      else if (param_4 == 2) {
        uVar4 = 0x39;
        sVar3 = param_8 + 0xf;
      }
      else if (param_7 == 0) {
        if (param_5 == 0) {
          uVar4 = 0x20;
        }
        else {
          uVar4 = 0x28;
        }
      }
      else {
        uVar4 = 0x28;
      }
      iVar2 = FUN_1406cc4c(param_1,param_2,param_3,uVar4,sVar3,0x38,DAT_14067cc8,&local_30);
      if (iVar2 == 0) {
        *(short *)(local_30 + 0x28) = param_6;
        *(short *)(local_30 + 0x2a) = param_7;
        *(short *)(local_30 + 0x2c) = param_8;
        *(int *)(local_30 + 0x24) = param_9;
        *(byte *)(local_30 + 0x34) = param_5;
        *(undefined1 *)(local_30 + 0x35) = 0;
        if (param_9 != 0) {
          FUN_1407358c(param_9);
        }
        FUN_1406d4d4(local_30);
        FUN_1406cdd0(param_1,local_30);
      }
    }
  }
  else {
    iVar2 = 0x40;
  }
  if (*DAT_14067cc4 == local_2c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

