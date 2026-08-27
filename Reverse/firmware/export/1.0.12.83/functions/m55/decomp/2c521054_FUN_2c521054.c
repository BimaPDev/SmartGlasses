/* FUN_2c521054 @ 0x2c521054 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_2c521054(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[8] = 0;
  uVar2 = FUN_2c62bdd8(_LAB_2c52109c,500,param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_2c62be40();
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0x15] = 7;
  uVar3 = FUN_2c5fd09c();
  uVar2 = _LAB_2c5210a0;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar1 = FUN_2c5fd0c0(uVar3,0,_LAB_2c5210a4,0,param_1,uVar2,0x14);
  param_1[0x14] = uVar1;
  return param_1;
}

