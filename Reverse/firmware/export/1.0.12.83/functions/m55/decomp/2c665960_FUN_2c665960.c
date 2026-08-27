/* FUN_2c665960 @ 0x2c665960 */

undefined1
FUN_2c665960(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,uint *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_3;
  for (; (param_3 < param_4 && (param_6 < param_7)); param_6 = param_6 + 1) {
    iVar1 = func_0x2c6695cc(param_6,param_3,param_4 - param_3,&uStack_28);
    if (iVar1 == -1) {
      uVar2 = 2;
      goto LAB_2c6659ac;
    }
    if (iVar1 == -2) {
      uVar2 = 1;
      goto LAB_2c6659ac;
    }
    if (iVar1 == 0) {
      iVar1 = 1;
      *param_6 = 0;
    }
    param_3 = param_3 + iVar1;
    *param_2 = uStack_28;
    param_2[1] = uStack_24;
  }
  uVar2 = param_3 < param_4;
LAB_2c6659ac:
  *param_5 = param_3;
  *param_8 = param_6;
  return uVar2;
}

