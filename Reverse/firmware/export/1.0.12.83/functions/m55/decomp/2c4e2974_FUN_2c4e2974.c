/* FUN_2c4e2974 @ 0x2c4e2974 */

int FUN_2c4e2974(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    if (param_3 <= *param_2) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar1 != 0) {
      if ((char)param_1[0x69] == '\0') {
        return iVar1;
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1,*param_2,param_1 + 0x65);
      if (iVar2 != 0) {
        return iVar1;
      }
    }
    *param_2 = *param_2 + 1;
  } while( true );
}

