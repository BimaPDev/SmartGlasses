/* FUN_2c5f6ebc @ 0x2c5f6ebc */

void FUN_2c5f6ebc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(1,0x10);
  if (param_1[10] != 0) {
    *(undefined1 *)(param_1[10] + 0xe) = 1;
  }
  *(char *)(puVar1 + 3) = (char)param_2;
  puVar1[1] = param_3;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  *puVar1 = param_1[10];
  uVar2 = param_1[5];
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  puVar1[2] = uVar2;
  param_1[10] = puVar1;
  if (param_2 == 0) {
    *(undefined1 *)((int)param_1 + 0xfd1) = 0;
  }
  return;
}

