/* FUN_140c2a2a @ 0x140c2a2a */

int * FUN_140c2a2a(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + -1;
  if (iVar2 == 1) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

