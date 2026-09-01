/* FUN_100b8330 @ 0x100b8330 */

undefined4
FUN_100b8330(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    uVar1 = param_3;
    uVar3 = param_4;
    FUN_10119dc2(DAT_100b8384,DAT_100b8380,DAT_100b837c,0x8f,param_1,param_2,param_3,param_4,param_4
                );
    FUN_1011a1f0(DAT_100b837c,0x8f,uVar1,uVar3);
  }
  uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,param_3,param_4);
  FUN_100b8194(param_1,param_4,0);
  return uVar1;
}

