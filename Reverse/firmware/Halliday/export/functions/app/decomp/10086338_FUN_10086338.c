/* FUN_10086338 @ 0x10086338 */

bool FUN_10086338(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (4 < param_1) {
    return (bool)2;
  }
  if (param_2 < 4) {
    switch(param_2) {
    case 1:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = 2;
      break;
    case 3:
      uVar2 = 4;
      break;
    default:
      uVar3 = *(undefined4 *)(DAT_1008639c + param_1 * 4);
      FUN_10086948(uVar3);
      uVar2 = 5;
      goto LAB_1008636e;
    }
  }
  else {
    if (param_2 != 100) {
      return (bool)4;
    }
    uVar2 = 10;
  }
  uVar3 = *(undefined4 *)(DAT_1008639c + param_1 * 4);
LAB_1008636e:
  iVar1 = FUN_1011b536(uVar3,uVar2,param_3);
  return iVar1 != 0;
}

