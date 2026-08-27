/* FUN_2c5329f8 @ 0x2c5329f8 */

void FUN_2c5329f8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar2 = *(int **)(param_1 + 0xc);
  piVar4 = *(int **)(param_1 + 0x1c);
  piVar3 = *(int **)(param_1 + 0x14);
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  do {
    if (piVar4 == piVar2) {
      return;
    }
    while( true ) {
      piVar1 = (int *)piVar2[1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
      piVar1 = (int *)piVar2[2];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
      piVar1 = (int *)piVar2[3];
      piVar2 = piVar2 + 5;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
      if (piVar3 != piVar2) break;
      puVar5 = puVar5 + 1;
      piVar2 = (int *)*puVar5;
      piVar3 = piVar2 + 0x7d;
      if (piVar4 == piVar2) {
        return;
      }
    }
  } while( true );
}

