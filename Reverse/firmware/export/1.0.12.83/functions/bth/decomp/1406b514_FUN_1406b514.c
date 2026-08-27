/* FUN_1406b514 @ 0x1406b514 */

void FUN_1406b514(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xff;
    piVar1 = (int *)FUN_14066108(uVar3);
    uVar2 = uVar2 + 1;
    if (((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 9) == '\0')) &&
       (*(code **)(*piVar1 + 0x2c) != (code *)0x0)) {
      (**(code **)(*piVar1 + 0x2c))(param_1,uVar3,param_2,param_3,param_4);
    }
  } while (uVar2 != 0xb);
  return;
}

