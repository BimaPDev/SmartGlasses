/* FUN_1012d552 @ 0x1012d552 */

undefined4 FUN_1012d552(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    pcVar2 = *(code **)(*(int *)(param_1 + 0xc) + 4);
    uVar1 = 0;
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)();
    }
    FUN_1012d1f4(param_1);
  }
  return uVar1;
}

