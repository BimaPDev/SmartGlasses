/* FUN_1007db04 @ 0x1007db04 */

undefined4 FUN_1007db04(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  
  if (param_4 != 0) {
    if ((param_2 < *(uint *)(param_1[3] + 0x1ec0)) && (param_1[1] == 0)) {
      if ((1 < *(byte *)(*param_1 + 0x10)) &&
         (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
        (*pcVar1)(DAT_1007db40,DAT_1007db3c,99);
      }
    }
    else {
      FUN_10120de0(param_1,param_2,param_4,param_3);
    }
  }
  return 0;
}

