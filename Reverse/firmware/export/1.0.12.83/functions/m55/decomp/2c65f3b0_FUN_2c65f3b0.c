/* FUN_2c65f3b0 @ 0x2c65f3b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c65f3b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  *param_1 = _LAB_2c65f3e8;
  iVar1 = FUN_2c64ce24();
  if ((iVar2 != iVar1) && (iVar2 != 0)) {
    thunk_FUN_2c669588(iVar2);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_2c6657b0(param_1 + 3);
  FUN_2c64cdcc(param_1);
  return param_1;
}

