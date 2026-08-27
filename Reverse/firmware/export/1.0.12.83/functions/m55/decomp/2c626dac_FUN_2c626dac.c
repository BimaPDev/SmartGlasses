/* FUN_2c626dac @ 0x2c626dac */

void FUN_2c626dac(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char local_124 [8];
  undefined1 auStack_11c [256];
  uint local_1c;
  
  uVar1 = DAT_2c626e3c;
  uVar2 = DAT_2c626e38;
  local_1c = *DAT_2c626e34;
  *param_3 = '\0';
  do {
    uVar4 = FUN_2c4f49c0(*(undefined4 *)(param_1 + 0x30),param_2,local_124);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar2 = 0xc;
      goto LAB_2c626e1c;
    }
    if (local_124[0] == '\x02') {
      FUN_2c62dbd4(param_3,0x100,uVar1,auStack_11c);
    }
    else {
      FUN_2c6435c4(param_3,auStack_11c);
    }
  } while ((((*param_3 == '/') && (param_3[1] == '.')) && (param_3[2] == '\0')) ||
          (uVar4 = FUN_2c66b624(param_3,uVar2), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
          (int)uVar4 == 0));
  uVar2 = 0;
LAB_2c626e1c:
  if ((*DAT_2c626e34 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,uVar3,*DAT_2c626e34 ^ local_1c,0);
}

