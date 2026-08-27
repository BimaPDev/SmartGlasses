/* FUN_14092520 @ 0x14092520 */

undefined4 FUN_14092520(undefined4 param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar6;
  undefined4 *puVar7;
  char local_44;
  uint local_3c;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *puVar5;
  
  local_2c = *DAT_14092654;
  local_34 = 0;
  local_30 = 0;
  FUN_140e5658(param_3,0,param_4);
  if (param_2 + -1 == 0) {
    uVar2 = 0;
    if (param_4 == 0) {
      uVar2 = 2;
      *param_3 = '\x01';
      param_3[1] = '\t';
    }
  }
  else {
    uVar2 = param_2 + 1;
    if (param_4 < uVar2) {
      *param_3 = (char)param_4 + -1;
      param_3[1] = '\b';
      FUN_140e5278(param_3 + 2,param_1,param_4 - 2);
      uVar2 = param_4;
    }
    else {
      *param_3 = (char)param_2;
      param_3[1] = '\t';
      FUN_140e5278(param_3 + 2,param_1,param_2 + -1);
    }
  }
  uVar3 = 0;
  do {
    local_3c = uVar3;
    if (uVar3 == 2) {
      local_44 = '\x03';
LAB_14092592:
      puVar7 = DAT_14092658 + 3;
      puVar4 = DAT_14092658;
      uVar6 = uVar2;
      do {
        puVar5 = puVar4 + 1;
        uVar2 = uVar6;
        if ((code *)*puVar4 != (code *)0x0) {
          local_34 = 0;
          local_30 = 0;
          if (uVar6 < param_4) {
            uVar2 = uVar6 + 2;
            (*(code *)*puVar4)(uVar3 & 0xff,param_3 + uVar2,(param_4 - 2) - uVar6,&local_34,
                               &local_30);
            if (local_34 == 0) {
              param_3[uVar6] = '\x01';
              param_3[uVar6 + 1] = local_44;
            }
            else {
              param_3[uVar6] = (char)local_34 + '\x01';
              cVar1 = local_44;
              if (local_34 != local_30) {
                cVar1 = (char)local_3c;
              }
              param_3[uVar6 + 1] = cVar1;
              uVar2 = uVar6 + local_34 + 2;
            }
          }
        }
        puVar4 = puVar5;
        uVar6 = uVar2;
      } while (puVar5 != puVar7);
    }
    else {
      if (uVar3 == 4) {
        local_44 = '\x05';
        goto LAB_14092592;
      }
      if (uVar3 == 0x10) {
        local_3c = 6;
        local_44 = '\a';
        goto LAB_14092592;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x11) {
      if (*DAT_14092654 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return 0;
    }
  } while( true );
}

