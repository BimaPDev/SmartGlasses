/* FUN_2c5f9b48 @ 0x2c5f9b48 */

void FUN_2c5f9b48(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  do {
    switch((short)param_1[0xd]) {
    case 5:
      iVar1 = param_1[7];
      goto LAB_2c5f9bc2;
    case 6:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
      (**(code **)(iVar3 + 8))(param_1[7]);
      break;
    case 7:
    case 0x13:
      (**(code **)(iVar3 + 8))(param_1[0xe]);
      (**(code **)(iVar3 + 8))(param_1[0xf]);
      break;
    case 0xb:
    case 0xc:
      (**(code **)(iVar3 + 8))(param_1[0xe]);
      (**(code **)(iVar3 + 8))(param_1[7]);
      iVar1 = param_1[5];
      goto joined_r0x2c5f9b9c;
    case 0x16:
    case 0x17:
      (**(code **)(iVar3 + 8))(param_1[0xf]);
      iVar1 = param_1[0x10];
LAB_2c5f9bc2:
      (**(code **)(iVar3 + 8))(iVar1);
      (**(code **)(iVar3 + 8))(param_1[0xe]);
    }
    iVar1 = param_1[5];
joined_r0x2c5f9b9c:
    if (iVar1 == 0) {
      piVar2 = (int *)param_1[1];
      (**(code **)(iVar3 + 8))(param_1);
      param_1 = piVar2;
    }
    else {
      *(int *)(iVar1 + 4) = param_1[1];
      piVar2 = (int *)param_1[4];
      param_1[1] = (int)piVar2;
      (**(code **)(iVar3 + 8))(param_1);
      param_1 = piVar2;
    }
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( true );
}

