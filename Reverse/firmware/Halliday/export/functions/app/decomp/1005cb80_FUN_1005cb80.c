/* FUN_1005cb80 @ 0x1005cb80 */

undefined4 FUN_1005cb80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_1005cba4;
  if (((param_1 == 2) || (param_1 == 4)) || (puVar2 = DAT_1005cba8, param_1 == 1)) {
    uVar1 = *puVar2;
  }
  else {
    FUN_10119dc2(DAT_1005cbac,param_1,param_3,param_4,param_4);
    uVar1 = 0;
  }
  return uVar1;
}

