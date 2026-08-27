/* FUN_2c4e3f24 @ 0x2c4e3f24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3f24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c4df91c();
  if (iVar1 == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0xe,1);
    FUN_2c4e0504(_LAB_2c4e3f84,0,0,0,_LAB_2c4e3f8c,0xe,_LAB_2c4e3f88,0x1300,_LAB_2c4e3f80);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2c4e3df4(param_1,*param_2,param_2[1],param_2[2],*(undefined1 *)(param_2 + 3));
  }
  return uVar2;
}

