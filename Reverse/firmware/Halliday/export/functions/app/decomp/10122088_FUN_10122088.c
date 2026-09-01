/* FUN_10122088 @ 0x10122088 */

uint FUN_10122088(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_1 + param_2;
  for (; param_1 != piVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 + *param_1;
  }
  return uVar2 ^ 0xaa55;
}

