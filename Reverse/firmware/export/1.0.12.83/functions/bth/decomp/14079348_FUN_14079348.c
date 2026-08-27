/* FUN_14079348 @ 0x14079348 */

undefined4
FUN_14079348(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_20;
  int local_1c;
  
  local_1c = *DAT_1407943c;
  local_31 = 0x80;
  iVar1 = param_2 + -8;
  if (param_3 == 2) {
    if (param_5 != (undefined4 *)0x0) {
      if (*(byte *)((int)param_5 + 0xb) < 2) {
        if (*(code **)(param_2 + 0x24c) != (code *)0x0) {
          (**(code **)(param_2 + 0x24c))(param_1,iVar1,0x11,param_5);
        }
      }
      else if ((*(byte *)((int)param_5 + 0xb) == 2) && ((code *)*DAT_14079440 != (code *)0x0)) {
        (*(code *)*DAT_14079440)(param_1,iVar1,param_5);
      }
    }
  }
  else if (param_3 < 3) {
    local_20 = *(undefined2 *)(param_5 + 1);
    *(undefined4 *)(param_2 + 0x2d) = *param_5;
    *(undefined2 *)(param_2 + 0x31) = local_20;
    if (param_3 == 1) {
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(undefined4 *)(param_2 + 0x254) = 0;
      *(undefined2 *)(param_2 + 600) = 0;
      *(undefined1 *)(param_2 + 0x25a) = 0;
      *(undefined4 *)(param_2 + 0x25c) = 0;
      *(undefined2 *)(param_2 + 0x260) = 0;
      local_30 = 10;
      local_2c = DAT_14079444;
      local_28 = iVar1;
      FUN_1409073c(param_2 + 0x2d,&local_30);
    }
    else {
      *(undefined1 *)(param_2 + 0x2c) = 0;
    }
    *(undefined4 *)(param_2 + 0x34) = param_4;
    if (*(code **)(param_2 + 0x24c) != (code *)0x0) {
      (**(code **)(param_2 + 0x24c))(param_1,iVar1,0xc,&local_31);
    }
  }
  else if (param_3 == 3) {
    if (*(code **)(param_2 + 0x24c) != (code *)0x0) {
      (**(code **)(param_2 + 0x24c))(param_1,iVar1,0x10,&local_31);
    }
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x262) = 0;
  }
  if (*DAT_1407943c == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

