/* FUN_14065c10 @ 0x14065c10 */

void FUN_14065c10(int *param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  char local_4a;
  char cStack_49;
  undefined4 local_18;
  
  if (param_2 == 0) {
    local_4a = (char)param_3;
    if (((char)*param_1 != local_4a) ||
       (cStack_49 = (char)((ushort)param_3 >> 8), *(char *)((int)param_1 + 1) != cStack_49)) {
      param_2 = 1;
    }
    uVar1 = param_2 ^ 1;
  }
  else if (param_2 == 2) {
    param_2 = DAT_14065cbc[1];
    local_18 = CONCAT22((short)((uint)DAT_14065cbc[3] >> 0x10),param_3);
    if ((((*param_1 == *DAT_14065cbc) && (param_1[1] == param_2)) && (param_1[2] == DAT_14065cbc[2])
        ) && (param_1[3] == local_18)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  if ((*DAT_14065cb8 ^ *DAT_14065cb8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar1,param_2,*DAT_14065cb8 ^ *DAT_14065cb8,0);
  }
  return;
}

