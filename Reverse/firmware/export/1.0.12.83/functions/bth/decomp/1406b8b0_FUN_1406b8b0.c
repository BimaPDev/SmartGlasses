/* FUN_1406b8b0 @ 0x1406b8b0 */

void FUN_1406b8b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  int local_14;
  
  local_14 = *DAT_1406b988;
  if (param_3 == 4) {
    local_20 = 0;
    iVar1 = FUN_14073468(&local_20,7,0);
    if (iVar1 == 0) {
      if (param_4 == 0) {
        local_1a = *(undefined2 *)(param_2 + 0x18);
        local_1c = CONCAT11(local_1c._1_1_,3);
        *(undefined1 *)(param_2 + 0x1a) = 1;
      }
      else {
        local_1a = 0;
        local_18 = (undefined1)param_4;
        *(undefined1 *)(param_2 + 0x1a) = 0;
        local_1c = 0x201;
      }
      param_4 = FUN_1406d0c0(param_1,param_2,&local_1c,local_20,0);
      FUN_140735a8(local_20);
joined_r0x1406b932:
      if (param_4 == 0) {
        if (*DAT_1406b988 == local_14) {
          return;
        }
        goto LAB_1406b982;
      }
    }
  }
  else if (param_3 != 8) {
    if (param_3 != 3) goto joined_r0x1406b932;
    if ((param_4 == 0) && (*(char *)(param_2 + 0x1a) != '\0')) {
      iVar1 = *(int *)(DAT_1406b98c + (param_1 + 0x22) * 4);
      *(byte *)(iVar1 + 0x54) = *(byte *)(iVar1 + 0x54) | 8;
      FUN_14069190(param_1,*(undefined1 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x18));
    }
  }
  if (*DAT_1406b988 == local_14) {
    FUN_1406cf54(param_1,param_2,1);
    return;
  }
LAB_1406b982:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

