/* FUN_10086aa0 @ 0x10086aa0 */

undefined4 FUN_10086aa0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = DAT_10086acc;
    break;
  case 1:
    uVar1 = DAT_10086ad0;
    break;
  case 2:
    uVar1 = DAT_10086ad4;
    break;
  case 3:
    uVar1 = DAT_10086ad8;
    break;
  case 4:
    uVar1 = DAT_10086adc;
    break;
  default:
    return 0;
  }
  *param_2 = uVar1;
  return 1;
}

