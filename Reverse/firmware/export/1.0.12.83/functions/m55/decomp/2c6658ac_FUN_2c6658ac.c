/* FUN_2c6658ac @ 0x2c6658ac */

undefined4
FUN_2c6658ac(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,uint param_6,uint param_7,uint *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  iVar1 = FUN_2c669488();
  if ((int)(iVar1 * ((int)param_4 - (int)param_3 >> 2) + (param_6 - param_7)) < 1) {
    while (param_3 < param_4) {
      iVar1 = func_0x2c66df68(param_6,*param_3,&uStack_30);
      if (iVar1 == -1) goto LAB_2c665958;
      param_6 = param_6 + iVar1;
      *param_2 = uStack_30;
      param_2[1] = uStack_2c;
      param_3 = param_3 + 1;
    }
  }
  else {
    for (; (param_3 < param_4 && (param_6 < param_7)); param_6 = param_6 + uVar2) {
      uVar2 = func_0x2c66df68(auStack_34,*param_3,&uStack_30);
      if (uVar2 == 0xffffffff) goto LAB_2c665958;
      if (param_7 - param_6 < uVar2) {
        uVar3 = 1;
        goto LAB_2c665948;
      }
      FUN_2c674668(param_6,auStack_34,uVar2);
      *param_2 = uStack_30;
      param_2[1] = uStack_2c;
      param_3 = param_3 + 1;
    }
  }
  if (param_3 < param_4) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_2c665948:
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar3;
LAB_2c665958:
  uVar3 = 2;
  goto LAB_2c665948;
}

