/* FUN_2c479ed6 @ 0x2c479ed6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479ed6(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(_LAB_2c479f08 + param_2) = 0;
  puVar2 = _LAB_2c479f10;
  puVar1 = _LAB_2c479f0c;
  if (param_2 == 1) {
    FUN_2c644958(*_LAB_2c479f10);
    *puVar2 = 0;
    return;
  }
  if (param_2 != 2) {
    return;
  }
  FUN_2c644958(*_LAB_2c479f0c);
  *puVar1 = 0;
  return;
}

