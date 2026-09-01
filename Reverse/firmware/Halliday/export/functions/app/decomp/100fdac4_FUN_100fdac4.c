/* FUN_100fdac4 @ 0x100fdac4 */

uint FUN_100fdac4(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x154);
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  if (uVar3 != 0) {
    uVar2 = 0;
    piVar1 = *(int **)(param_1 + 0x164);
LAB_100fdaea:
    do {
      if ((*(ushort *)((int)piVar1 + 6) == param_2) && ((short)piVar1[2] != 0)) {
        if ((((short)*piVar1 == 3) && (*(ushort *)((int)piVar1 + 2) < 2)) &&
           (((short)piVar1[1] == 0x409 || (*param_3 == 0xffffffff)))) {
          *param_3 = uVar2;
        }
        if ((*piVar1 == 1) && (((short)piVar1[1] == 0 || (*param_4 == 0xffffffff)))) {
          *param_4 = uVar2;
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 5;
          if (uVar2 == uVar3) break;
          goto LAB_100fdaea;
        }
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (uVar2 != uVar3);
  }
  if (-1 < (int)*param_3) {
    return 1;
  }
  return ~*param_4 >> 0x1f;
}

