/* FUN_2c516308 @ 0x2c516308 */

void FUN_2c516308(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return;
  }
  iVar2 = param_1[1];
  uVar1 = registry_lookup(*param_1);
  FUN_2c638730(iVar2,uVar1);
  return;
}

