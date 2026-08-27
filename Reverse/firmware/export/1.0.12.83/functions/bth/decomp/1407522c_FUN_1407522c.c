/* FUN_1407522c @ 0x1407522c */

void FUN_1407522c(short param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140759b8(param_1 + 0x10,param_2,param_3,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(short *)((int)puVar1 + 6) = param_1;
  }
  return;
}

